using System;
using Random = System.Random;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class SortingAlgorithmCopy : Algorithm
{
    
    protected ArrayIndex[] array;
    public int size;
    public int[] arr;
    protected Queue<short[]> q = new Queue<short[]>();

    // This is called in readQueue's default command.
    // The class that extends SortingAlgorithm has to define extra commands
    abstract public IEnumerator extendCommands(short[] command);

    protected class ArrayIndex{
        public GameObject o;
        public int value;

        // Build the primary array index
        public ArrayIndex(int value){
            // build an ArrayIndex item for the main array. This will have an initial height, value, and position
            this.value = value;
            o = GameObject.CreatePrimitive(PrimitiveType.Cube);
            o.transform.position = new Vector3(value, (value+1)*.5f, 0);
            o.transform.localScale = new Vector3(1, value + 1, 1); 
        }
        public ArrayIndex(){

        }
   }
    // build the visible array and the array used for command building
    // They will be in sorted order and then shuffled
    protected void buildArray(){
        for(int i = 0; i < size; i++){
            array[i] = new ArrayIndex(i);
            arr[i] = i;
        }
        shuffle();
    }
    // randomize the command array
    public void shuffle(){
        int i;
        Random r = new Random();
        for (i = 0; i < size; i++){
            swap(i, r.Next(i, size), 0);
        }
    }

    // swap the two object references and their location in space
    protected void swap(ref ArrayIndex a, ref ArrayIndex b)
    {
        ArrayIndex temp = a;
        Vector3 position;

        a = b;
        b = temp;
        
        position = a.o.transform.position;
        a.o.transform.position = new Vector3(b.o.transform.position.x, a.o.transform.position.y, 0);
        b.o.transform.position = new Vector3(position.x, b.o.transform.position.y, 0);

    }
    // swap two int indices
    protected void swap(int x, int y, short arrayCode)
    {
        q.Enqueue(new short[] {1, (short)x, (short)y, arrayCode});
        int temp = arr[x];
        arr[x] = arr[y];
        arr[y] = temp;
    }
    
    // Go through the queue
    public IEnumerator readQueue()
    {
        foreach(short[] instr in q){

            // Since some of these methods have an auxArray version,
            // we'll jump over to that whenever we want to do something with auxArray
            if (instr[3] == 1){
                yield return extendCommands(instr);
            }
            else{
                switch (instr[0])
                {
                    case 0: // set the index of instr[1] from the array indicated by instr[3] to the value in instr[2]
                        writeToIndex(array, instr[1], instr[2]);
                        yield return new WaitForSeconds(time);
                
                        break;
                    case 1: // swap index instr[1] and instr[2] in array instr[3]
                        swap(ref array[(int)instr[1]], ref array[(int)instr[2]]);
                        yield return new WaitForSeconds(time);
                        break;
                    case 2: // change index [instr[1]] of array instr[3] into the color of instr[2]
                        colorChange(instr[1], instr[2], array);
                        break;
                    case 3: // change array[instr[1]] and array[instr[2]] red
                        colorChange(instr[1], 1, array);
                        colorChange(instr[2], 1, array);

                        yield return new WaitForSeconds(time);
                        break;
                    case 4: // change array[instr[1]] and array[instr[2]] white
                        colorChange(instr[1], 0, array);
                        colorChange(instr[2], 0, array);

                        break;
                    case 5: // change array[instr[1]] and array[instr[2]] blue
                        colorChange(instr[1], 3, array);
                        colorChange(instr[2], 3, array);

                        break;
                    case 6: // Mark partition. Makes the colors of all the elements in the indices between and including j and k to blue to show a partition of an array that is being operated on.
                        for(int i = instr[1]; i <= instr[2]; i++)
                        {
                            colorChange(i, 3, array);
                        }
                        break;
                    case 7: // Unmark partition. Makes the colors of all the elements in the indices between and including j and k to white.

                        for (int i = instr[1]; i <= instr[2]; i++)
                        {
                            colorChange(i, 0, array);
                        }
                        break;
                    case 8: // Make all elements green, indicating the sort is complete
                        for (int i = 0; i < size; i++){
                            colorChange(i, 2, array);
                            yield return new WaitForSeconds(time);
                        }
                        break;
                    
                    default:
                    // Go to the other set of commands
                        yield return extendCommands(instr);
                        break;
                }
            }
        } 
    }

    protected void writeToIndex(ArrayIndex[] array, int index, int value){
        array[index].value = value;
        array[index].o.transform.position = new Vector3(array[index].o.transform.position.x, (value+1)*.5f, 0);
        array[index].o.transform.localScale = new Vector3(1, value + 1, 1);
    }
    // convert the ArrayList object at primary[primaryIndex] into secondary[secondaryIndex]
    protected void copyArrayValue(ArrayIndex[] primary, ArrayIndex[] secondary, int primaryIndex, int secondaryIndex){
        primary[primaryIndex].value = secondary[secondaryIndex].value;
        primary[primaryIndex].o.transform.position = new Vector3(primary[primaryIndex].o.transform.position.x, (primary[primaryIndex].value +1)*.5f, 0);
        primary[primaryIndex].o.transform.localScale = new Vector3(1, primary[primaryIndex].value +1, 1);
    }
    protected void colorChange(int element, int colorCode, ArrayIndex[] array){
        switch (colorCode){
            case 0:
                array[element].o.GetComponent<Renderer>().material.color = Color.white;
                break;
            case 1:
                array[element].o.GetComponent<Renderer>().material.color = Color.red;
                break;
            case 2:
                array[element].o.GetComponent<Renderer>().material.color = Color.green;
                break;
            case 3:
                array[element].o.GetComponent<Renderer>().material.color = Color.blue;
                break;
            case 4: 
                array[element].o.GetComponent<Renderer>().material.color = Color.black;
                break;
            default:
                break;
        }
    }
    
    // This method enqueues an instance where two values were compared
    public bool compare(int x, int y, short code, short arrayCode)
    {
        q.Enqueue(new short[] {3, (short)x, (short)y, arrayCode});
        q.Enqueue(new short[] {code, (short)x, (short)y, arrayCode});

        return true;
    }

    public void setCam()
    {
        float z = (float)((-1 * size) / (2 * Math.Tan(Math.PI / 6)));
        Camera.main.transform.position = new Vector3(size/2 + 1, size/2 + 1, (float)(z*1.1) );
        Camera.main.farClipPlane = (float)(-1.1*z + 200);
    }

   /* protected GameObject[] array; // Will need to move this into a constructor later
    private int i = 0;
    Random r = new Random();
    protected bool isMoving = false; // tracks if objects are moving
    protected int left, right; // tracks which indices are moving
    protected float leftOriginal, rightOriginal; // tracks original location of objects
    protected bool unsorted = false; // tracks if the array has been unsorted
    int size;

    public SortingAlgorithm(int size): base()
    {
        array = new GameObject[size];
        this.size = size;

    }
    // shuffle the array
    public void shuffle()
    {
        // for each index, swap the object with another random object
        if (i < size)
        {
            // set up the values needed to properly move two objects
            if (!isMoving)
            {
                left = i;
                right = r.Next(i, size);
                isMoving = true;
                leftOriginal = array[left].transform.position.x;
                rightOriginal = array[right].transform.position.x;

            }
            movePieces();
            // increment i if the two objects have finished moving
            if (!isMoving)
                i++;
        }
        // all indices have been shuffled. Sorting algorithm can now run
        else
        {
            unsorted = true;
        }
    }

    // move two pieces by .1f each frame.
    // array[left] is the one that was on the left and it will move right
    // array[right[ is the one that was on the right and will move left
    public void movePieces()
    {
        array[left].transform.position = new Vector3(array[left].transform.position.x + 1f, array[left].transform.position.y, array[left].transform.position.z);
        array[right].transform.position = new Vector3(array[right].transform.position.x - 1f, array[right].transform.position.y, array[right].transform.position.z);

        // If either object has reached its destination, flag them as no longer moving and swap their references in the array
        if (array[left].transform.position.x >= rightOriginal || array[right].transform.position.x <= leftOriginal)
        {
            // The two objects are not guaranteed to reach their destinations at the same time so there needs to be a slight correction
            array[left].transform.position = new Vector3(rightOriginal, array[left].transform.position.y, array[left].transform.position.z);
            array[right].transform.position = new Vector3(leftOriginal, array[right].transform.position.y, array[right].transform.position.z);
            swap(ref array[left], ref array[right]);
            isMoving = false;
        }
    }
    // swap the two object references
    protected void swap(ref GameObject x, ref GameObject y)
    {
        GameObject temp = x;
        x = y;
        y = temp;
    }
    */
}
