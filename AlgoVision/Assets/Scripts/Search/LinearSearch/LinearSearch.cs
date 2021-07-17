using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using System;
public class LinearSearch : Algorithm
{
    int size;
    int searchToken;
    ArrayIndex[] array;
    [SerializeField] GameObject boxPrefab;
    [SerializeField] public GameObject canvas;
    Queue<QueueCommand> queue = new Queue<QueueCommand>();
    protected TMP_Text showText;

    void Start()
    {
        canvas = GameObject.Find("Canvas");
    }
    
    class ArrayIndex{
        public int value;
        public GameObject Object;
        public ArrayIndex(int value, int index, GameObject boxPrefab){
            this.value = value;
            Object = GameObject.Instantiate(boxPrefab);
            Object.transform.position = new Vector3(index*1.28f, 0, 0);
            if (index % 2 == 1){
                Object.GetComponent<Renderer>().material.color = Color.gray;
            }
        }

    }

    class QueueCommand{
        public Commands commandId;
        public int index1;
        public int index2;
        public Colors additionalInfo;
        public string message;
        public QueueCommand(){
            this.commandId = Commands.WAIT;
        }
        public QueueCommand(Commands commandId, int index1, Colors additionalInfo){
            this.commandId = commandId;
            this.index1 = index1;
            this.additionalInfo = additionalInfo;
        }
        public QueueCommand(Commands commandId, int index1, int index2, Colors additionalInfo){
            this.commandId = commandId;
            this.index1 = index1;
            this.index2 = index2;
            this.additionalInfo = additionalInfo;
        }
        public QueueCommand(Commands commandId, string message){
            this.commandId = commandId;
            this.message = message;
        }
    }
    
    // Start is called before the first frame update
    public void setup(int n, int searchToken)
    {
        int i;
        size = n;
        array = new ArrayIndex[size];
        showText = canvas.transform.GetChild(5).GetComponent<TMP_Text>();

        queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "Generating random sorted array array..."));
        queue.Enqueue(new QueueCommand());
        queue.Enqueue(new QueueCommand());

        for(i = 0; i < size; i++){
            array[i] = new ArrayIndex(r.Next(21), i, boxPrefab);
        }
        for(i = 0; i < size; i++){
            array[i].Object.transform.GetChild(0).GetComponent<TMP_Text>().text = array[i].value.ToString();
            array[i].Object.transform.GetChild(1).GetComponent<TMP_Text>().text = i.ToString();
        }
        this.searchToken = searchToken;
        setCam();

        queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "Choose a value to search for"));
        queue.Enqueue(new QueueCommand());

        StartCoroutine(readQueue());

        //search();
    }
    void sort(){
        int i,j;
        for(i = 1; i < size; i++){
            for(j = i; j > 0; j--){
                if(array[j].value < array[j-1].value){
                    swap(j, j-1);
                }
            }
        }
    }
    void swap(int a, int b){
        int temp;
        temp = array[a].value;
        array[a].value = array[b].value;
        array[b].value = temp;
    }
    public void search(int searchValue){


        searchToken = searchValue;

        int temp;
        bool found = false;

        for(temp = 0; temp < size; temp++){
            queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "Checking index " + temp));
            queue.Enqueue(new QueueCommand());
            queue.Enqueue(new QueueCommand());

            if (searchToken == array[temp].value){
                queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "" + searchValue + " found at index " + temp));
                queue.Enqueue(new QueueCommand(Commands.COLOR_ONE, temp, Colors.GREEN));
                queue.Enqueue(new QueueCommand());
                found = true;
                break;
            }
            else{
                queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "" + searchValue + " not found at index " + temp));
                queue.Enqueue(new QueueCommand(Commands.COLOR_ONE, temp, Colors.BLACK));
                queue.Enqueue(new QueueCommand());
            }
        }
        if(!found){
            queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "" + searchValue + " is not in the array"));
            queue.Enqueue(new QueueCommand());
        }
    }
    public IEnumerator readQueue(){ // FIXME NEED TO DEQUE COMMANDS
        foreach(QueueCommand q in queue){
            switch(q.commandId){
                case Commands.WAIT:
                    yield return new WaitForSeconds(time);
                    break;
                case Commands.COLOR_ONE: // change color of single item
                    changeColor(q.index1, q.additionalInfo);
                    break;
                case Commands.UPDATE_MESSAGE: // update message
                    showText.text = q.message;
                    break;
            }
        }
        queue.Clear();
    }
    void changeColor(int index, Colors colorId){
        switch(colorId){
            case Colors.RED:
                array[index].Object.GetComponent<Renderer>().material.color = Color.red;
                break;
            case Colors.GREEN:
                array[index].Object.GetComponent<Renderer>().material.color = Color.green;
                break;
            case Colors.BLACK:
                array[index].Object.GetComponent<Renderer>().material.color = Color.black;
                break;
        }
    }
    public void setCam()//C.O Change camera set
    {
        float z = (float)((-1 * size) / (2 * Math.Tan(Math.PI / 6)));
        Camera.main.transform.position = new Vector3(array[size / 2].Object.transform.position.x, array[size / 2].Object.transform.position.y + 2, (float)(z*1.1) );
        Camera.main.farClipPlane = (float)(-1.1*z + 200);
    }
}
