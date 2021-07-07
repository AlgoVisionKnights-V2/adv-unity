using System;
using Random = System.Random;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
public abstract class SortingAlgorithm1 : Algorithm
{
    protected ArrayIndex[] array;
    public int size;
    public int[] arr;
    public int comparisons, swaps, accesses;
    protected Queue<QueueCommand> queue = new Queue<QueueCommand>();
    private GameObject canvas;
    protected TMP_Text showText;
    public Color green;

    // This is called in readQueue's default command.
    // The class that extends SortingAlgorithm has to define extra commands
    abstract public void extendCommands(QueueCommand q);
    abstract public void sort();
    protected class ArrayIndex{
        public GameObject o;
        public int value;

        // Build the primary array index
        public ArrayIndex(int value, GameObject boxPrefab){
            // build an ArrayIndex item for the main array. This will have an initial height, value, and position
            this.value = value;
            o = GameObject.Instantiate(boxPrefab);// CREATE CUBES
            o.transform.position = new Vector3(value * 2, 3, 0);
            //o.transform.localScale = new Vector3(1, value + 1, 1); 
        }
        // Build an ArrayIndex item and specify its index, and consequent location
        public ArrayIndex(int value, int index, GameObject boxPrefab){
            // build an ArrayIndex item for the main array. This will have an initial height, value, and position
            this.value = value;
            o = GameObject.Instantiate(boxPrefab);// CREATE CUBES
            o.transform.position = new Vector3(index * 2, 3, 0);
            var t = o.GetComponentInChildren<TextMeshPro>();
            t.text = value.ToString();
            //t.transform.position = new Vector3(o.transform.position.x,o.transform.position.y,o.transform.position.z - 1);
        }
        public ArrayIndex(){

        }
   }

   public class QueueCommand{
       /*
            Refer to readQueue for the meaning of each command Id
            Refer to colorChange for the meaning of each colorId

            For arrayId:
                0 - ArrayIndex array
                1 - AuxArrayIndex auxArray (used in SortingAlgorithmWithAuxArray)
       */
       
       public short commandId;
       public int index1, index2;
       public short arrayId, colorId, textColorId;
       public string message;
       public long time;

        // Use this constructor when you just want the queue to pause for a moment
        public QueueCommand(){
           commandId = 0;
           arrayId = 0;
           time = timer.ElapsedMilliseconds;
        }
        // Use this constructor when you need to color multiple indices
        // Depending on the command, it will color only array[index1] and array[index2]
        // or it will color every index from index1 to index2 inclusive
       public QueueCommand(short commandId, int index1, int index2, short arrayId, short colorId){
           this.commandId = commandId;
           this.index1 = index1;
           this.index2 = index2;
           this.arrayId = arrayId;
           this.colorId = colorId;
           time = timer.ElapsedMilliseconds;
       }
       // Use this constructor when you need to color only one index
       public QueueCommand(short commandId, int index1, short arrayId, short colorId){
           this.commandId = commandId;
           this.index1 = index1;
           this.arrayId = arrayId;
           this.colorId = colorId;
           time = timer.ElapsedMilliseconds;
       }       
       // Use this construcotr when you need to do anything else with your two indices
       public QueueCommand(short commandId, int index1, int index2, short arrayId){
           this.commandId = commandId;
           this.index1 = index1;
           this.index2 = index2;
           this.arrayId = arrayId;
           time = timer.ElapsedMilliseconds;
       }
       public QueueCommand(short commandId, short arrayId, short colorId){
            this.commandId = commandId;
            this.arrayId = arrayId;
            this.colorId = colorId;
           time = timer.ElapsedMilliseconds;
       }
        public QueueCommand(short commandId, int index1, int index2, short arrayId, short colorId, string message){
           this.commandId = commandId;
           this.index1 = index1;
           this.index2 = index2;
           this.arrayId = arrayId;
           this.colorId = colorId;
           this.message = message;
           time = timer.ElapsedMilliseconds;
       }
       // Use this constructor when you need to color only one index
       public QueueCommand(short commandId, int index1, short arrayId, short colorId, string message){
           this.commandId = commandId;
           this.index1 = index1;
           this.arrayId = arrayId;
           this.colorId = colorId;
           this.message = message;
           time = timer.ElapsedMilliseconds;
       }       
       // Use this construcotr when you need to do anything else with your two indices
       public QueueCommand(short commandId, int index1, int index2, short arrayId, string message){
           this.commandId = commandId;
           this.index1 = index1;
           this.index2 = index2;
           this.arrayId = arrayId;
           this.message = message;
           this.message = message;
           time = timer.ElapsedMilliseconds;
       }
       public QueueCommand(short commandId, short arrayId, short colorId, string message){
           this.commandId = commandId;
           this.arrayId = arrayId;
           this.colorId = colorId;
           this.message = message;
           time = timer.ElapsedMilliseconds;
       }
       public QueueCommand(short commandId, string message)
       {
           this.commandId = commandId;
            this.textColorId = 3;
           this.message = message;
           time = timer.ElapsedMilliseconds;
       }
       public QueueCommand(short commandId, string message, short textColorId)
        {
           this.commandId = commandId;
           this.message = message;
           this.textColorId = textColorId;
           time = timer.ElapsedMilliseconds;
       }
       // Use this one if you are doing something that affects a whole array in general
       public QueueCommand(short commandId, short arrayId){
           this.commandId = commandId;
           this.arrayId = arrayId;
            time = timer.ElapsedMilliseconds;

       }
   }

    public void setup(int size){
        this.size = size;
        arr = new int[size];
        array = new ArrayIndex[size];
        comparisons = swaps = accesses = 0;
        sort();
        setCam();
    }
    // build the visible array and the array used for command building
    // They will be in sorted order and then shuffled
    protected void buildArray(GameObject boxPrefab, GameObject canvas){
        int i;
        this.canvas = canvas;
        showText = canvas.transform.GetChild(5).GetComponent<TMP_Text>();

        for(i = 0; i < size; i++){
            arr[i] = i;
        }
        shuffle();
        for(i = 0; i < size; i ++){
            array[i] = new ArrayIndex(arr[i], i, boxPrefab);
        }

    }
    // randomize the command array
    public void shuffle(){
        int i;
        Random r = new Random();
        for (i = 0; i < size; i++){
            internalSwap(i, r.Next(i, size));
        }
    }

    // swap the two object references and their location in space
    protected void swap(ref ArrayIndex a, ref ArrayIndex b)
    {
        ArrayIndex temp = a;
        Vector3 position;

        int temp1;

        temp1 = a.value;

        a.value = b.value;
        b.value = temp1;

        var t = a.o.GetComponentInChildren<TextMeshPro>();
        t.text = a.value.ToString();

        t = b.o.GetComponentInChildren<TextMeshPro>();
        t.text = b.value.ToString();
        
        /*a = b;
        b = temp;
        
        position = a.o.transform.position;
        a.o.transform.position = new Vector3(b.o.transform.position.x, a.o.transform.position.y, 0);
        b.o.transform.position = new Vector3(position.x, b.o.transform.position.y, 0);
        //showText.text = "Swap!";
        //showText.color = Color.blue;*/
    }

    // This swap command is meant to be used by shuffle() when setting up the array
    // It does not queue anything.
    void internalSwap(int x, int y){
        int temp = arr[x];
        arr[x] = arr[y];
        arr[y] = temp;        
    }
    // swap two int indices
    // Also queue in a cwap command
    // Intended to be used by sort()
    protected void swap(int x, int y)
    {
        queue.Enqueue(new QueueCommand(2, x, y, 0, "Swapped " + arr[x] + " and " + arr[y]));
        int temp = arr[x];
        arr[x] = arr[y];
        arr[y] = temp;
    }
    
    // Go through the queue
    public IEnumerator readQueue(GameObject canvas)
    {
        Debug.Log("Total runtime: " + stopTime);
        int totalCommands = queue.Count;
        QueueCommand q;
        while (queue.Count > 0){
            q = queue.Dequeue();


            //Time bar fuctionality
            //Debug.LogError("Filling time bar with " + (1f / totalCommands));
            canvas.transform.GetChild(10).GetComponent<Slider>().value += (float)(1f / totalCommands);
            completionPercent = 1 - (float)queue.Count / totalCommands;
            canvas.transform.GetChild(10).GetChild(2).GetChild(0).GetChild(0).GetComponent<TMP_Text>().text = "" + (int)(completionPercent * 100) + "%";
            currentTime = q.time;
            canvas.transform.GetChild(11).GetComponent<TMP_Text>().text = "" + (int)(stopTime * completionPercent) + " ms";
            canvas.transform.GetChild(12).GetChild(0).GetComponent<TMP_Text>().text = "Comparisons: " + comparisons;
            canvas.transform.GetChild(12).GetChild(1).GetComponent<TMP_Text>().text = "Swaps: " + swaps;

            // Since some of these methods have an auxArray version,
            // we'll jump over to that whenever we want to do something with auxArray
            if (q.arrayId != 0){
                extendCommands(q);
            }
            else{
                switch (q.commandId)
                {
                    case 0: // wait
                        yield return new WaitForSeconds(time);
                        break;
                    case 1: // change the color of two indices
                        colorChange(q.index1, q.colorId, array);
                        colorChange(q.index2, q.colorId, array);
                        break;
                    case 2: // swap the positions of two indices
                        swap(ref array[q.index1], ref array[q.index2]);
                        swaps++;
                        accesses += 2;
                        // Debug.Log("Swapping values at Index "+ q.index1 + " and "+ q.index2);
                        showText.text = q.message;
                        showText.color = colorChangeText(1);
                        break;                        
                    case 3: // change the color of just a single index
                        colorChange(q.index1, q.colorId, array);
                        //showText.text = q.message;
                        //showText.color = colorChangeText(2);
                        break;
                    case 4: // raise two indices up, used to visualize they are being compared
                        array[q.index1].o.transform.position = new Vector3(array[q.index1].o.transform.position.x, array[q.index1].o.transform.position.y + 1, 0);
                        array[q.index2].o.transform.position = new Vector3(array[q.index2].o.transform.position.x, array[q.index2].o.transform.position.y + 1, 0);
                        showText.enabled = true;
                        showText.text = q.message;
                        comparisons++;
                        accesses += 2;
                        // red color
                        var red = new Color(1f, .2f, .361f, 1);
                        showText.color = red;//colorChangeText(1);
                        break;
                    case 5: // raise two indices down, used to visualize they are being uncompared
                        array[q.index1].o.transform.position = new Vector3(array[q.index1].o.transform.position.x, array[q.index1].o.transform.position.y - 1, 0);
                        array[q.index2].o.transform.position = new Vector3(array[q.index2].o.transform.position.x, array[q.index2].o.transform.position.y - 1, 0);
                        break;
                    case 6: // change the color of every index from index1 to index2 inclusive
                        for (int i = q.index1; i <= q.index2; i++){
                            colorChange(i, q.colorId, array);
                        }
                        break;
                    case 7: // update only the text field
                        showText.text = q.message;
                        showText.color = colorChangeText(q.textColorId);
                        break;
                    case 8:
                        array[q.index1].o.transform.GetChild(1).gameObject.SetActive(!array[q.index1].o.transform.GetChild(1).gameObject.activeInHierarchy);
                        array[q.index1].o.transform.GetChild(1).GetChild(0).GetComponentInChildren<TextMeshPro>().text = q.message;
                        break;

                    case 9: // raise up every index from q.index1 to q.index2 inclusively. Used for partitions
                        for(int i = q.index1; i <= q.index2; i++){
                            Color reference = array[i].o.GetComponent<Renderer>().material.color;
                            Debug.Log(reference);
                            array[i].o.transform.position = new Vector3(array[i].o.transform.position.x, array[i].o.transform.position.y + .25f, 0);
                            array[i].o.GetComponent<Renderer>().material.color = new Color(reference.r - .18f,reference.g - .18f,reference.b);
                        }
                        break;
                    case 10: // lower every index from q.index1 to q.index2 inclusively. Used for partitions
                        for(int i = q.index1; i <= q.index2; i++){
                            Color reference = array[i].o.GetComponent<Renderer>().material.color;
                            array[i].o.transform.position = new Vector3(array[i].o.transform.position.x, array[i].o.transform.position.y - .25f, 0);
                            array[i].o.GetComponent<Renderer>().material.color = new Color(reference.r + .18f,reference.g + .18f,reference.b);
                        }
                        break;

                    default:
                        extendCommands(q);
                        break;
                 /*
                    case 0: // set the index of instr[1] from the array indicated by instr[3] to the value in instr[2]
                        writeToIndex(array, instr[1], instr[2]);
                        // Debug.Log("Index "+ instr[1] + " set to "+ instr[2]);
                        yield return new WaitForSeconds(time);
                
                        break;
                    case 1: // swap index instr[1] and instr[2] in array instr[3]
                        swap(ref array[(int)instr[1]], ref array[(int)instr[2]]);
                        // Debug.Log("Swapping values at Index "+ instr[1] + " and "+ instr[2]);

                        yield return new WaitForSeconds(time);
                        break;
                    case 2: // change index [instr[1]] of array instr[3] into the color of instr[2]
                        colorChange(instr[1], instr[2], array);
                        break;
                    case 3: // change array[instr[1]] and array[instr[2]] red
                        colorChange(instr[1], 1, array);
                        colorChange(instr[2], 1, array);
                        array[instr[1]].o.transform.position = new Vector3(array[instr[1]].o.transform.position.x, array[instr[1]].o.transform.position.y + 1, 0);
                        array[instr[2]].o.transform.position = new Vector3(array[instr[2]].o.transform.position.x, array[instr[2]].o.transform.position.y + 1, 0);
                        // Debug.Log("Comparing values at Index "+ instr[1] + " and "+ instr[2]);

                        yield return new WaitForSeconds(time);
                        break;
                    case 4: // change array[instr[1]] and array[instr[2]] white
                        colorChange(instr[1], 0, array);
                        colorChange(instr[2], 0, array);
array[instr[1]].o.transform.position = new Vector3(array[instr[1]].o.transform.position.x, array[instr[1]].o.transform.position.y - 1, 0);
                        array[instr[2]].o.transform.position = new Vector3(array[instr[2]].o.transform.position.x, array[instr[2]].o.transform.position.y - 1, 0);
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
                        // Debug.Log("The array is sorted");
                        for (int i = 0; i < size; i++){
                            colorChange(i, 2, array);
                            yield return new WaitForSeconds(time);
                        }
                        break;
                    
                    default:
                    // Go to the other set of commands
                        yield return extendCommands(instr);
                        break;
                        */
                }
            }
            Debug.Log("Actual runtime: " + currentTime + " milliseconds");
            Debug.Log("Completion percent: " + completionPercent);
            Debug.Log("swaps: " + swaps);
            Debug.Log("Comparisons: " + comparisons);

        }
        showText.text = "The array is sorted";
        showText.color = colorChangeText(2);
    }

    protected void writeToIndex(ArrayIndex[] array, int index, int value){
        array[index].value = value;
        array[index].o.transform.position = new Vector3(array[index].o.transform.position.x, (value+1)*.5f, 0);
        array[index].o.transform.localScale = new Vector3(1, value + 1, 1);
    }
    private Color colorChangeText(int colorCode)
    {
        switch (colorCode)
        {
            case 0:
                return Color.white;
                //text.color = Color.white;
            case 1:
                var red = new Color(1f, .2f, .361f, 1);
                return red;
                //text.color = red;//Color.red;
            case 2:
                green = new Color(0.533f, 0.671f, 0.459f);
                return green;
                //text.color = green;
                // Debug.Log("InAdex "+ element + " is sorted");
            case 3:
                var blue = new Color(0.6f, 0.686f, 0.761f);
                return blue;
                //text.color = blue;
            case 4:
                return Color.black;
                //text.color = Color.black;
            case 5:
                return Color.yellow;
                //text.color = Color.yellow;
            case 6:
                return Color.blue;
                //text.color = Color.blue;
            case 7:
                return Color.green;
                //text.color = Color.green;
            default:
                blue = new Color(0.6f, 0.686f, 0.761f);
                return blue;
        }
    }
    protected void colorChange(int element, int colorCode, ArrayIndex[] array){
        Debug.Log(element);
        switch (colorCode){
            case 0:
                array[element].o.GetComponent<Renderer>().material.color = Color.white;
                break;
            case 1:
                var red = new Color(1f, .2f, .361f, 1);
                array[element].o.GetComponent<Renderer>().material.color = red;//Color.red;
                break;
            case 2:
                green = new Color(0.533f, 0.671f, 0.459f);
                array[element].o.GetComponent<Renderer>().material.color = green;
                // Debug.Log("Index "+ element + " is sorted");
                break;
            case 3:
                var blue = new Color(0.6f, 0.686f, 0.761f);
                array[element].o.GetComponent<Renderer>().material.color = blue;
                break;
            case 4: 
                array[element].o.GetComponent<Renderer>().material.color = Color.black;
                break;
            case 5: 
                array[element].o.GetComponent<Renderer>().material.color = Color.yellow;
                break;
            case 6: 
                array[element].o.GetComponent<Renderer>().material.color = Color.blue;
                break;
            case 7:
                array[element].o.GetComponent<Renderer>().material.color = Color.green;
                break;
            default:
                break;
        }
    }
    
    // This method enqueues an instance where two values were compared
    // arrayId refers to the array that comparisons are being made in (refer to the QueueCommand for details)
    public bool compare(int x, int y, short arrayId)
    {
        Debug.Log(x + " "+ y);
        queue.Enqueue(new QueueCommand(4, x, y, arrayId, "Comparing " + arr[x] + " to " + arr[y]));

        queue.Enqueue(new QueueCommand(1, x, y, arrayId, 1));
        queue.Enqueue(new QueueCommand());


        return true;
    }

    // This method enqueues an instance to undo any changes caused by compare
    // arrayId refers to the array that comparisons are being made in (refer to the QueueCommand for details)
    // colorId refers to th color the indices should be changed to after comparison.
    public void decompare(int x, int y, short arrayId, short colorId){
        queue.Enqueue(new QueueCommand(5, x, y, arrayId, ""));
        queue.Enqueue(new QueueCommand());
        queue.Enqueue(new QueueCommand(1, x, y, arrayId, colorId));

    }
    public void decompare(int x, int y, short arrayId, short colorId1, short colorId2){
        Debug.Log(x + " "+ y);
        queue.Enqueue(new QueueCommand(5, x, y, 0, ""));
        queue.Enqueue(new QueueCommand(3, x, arrayId, colorId1));
        queue.Enqueue(new QueueCommand(3, y, arrayId, colorId2));

    }


    public void setCam()//C.O Change camera set
    {
        float z = (float)((-1 * size) / (2 * Math.Tan(Math.PI / 6)));
        Camera.main.transform.position = new Vector3(array[size / 2].o.transform.position.x, array[size / 2].o.transform.position.y + 2, (float)(z*1.1) );
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
