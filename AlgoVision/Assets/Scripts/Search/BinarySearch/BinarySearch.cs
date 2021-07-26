using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using System;
using UnityEngine.UI;
public class BinarySearch : Algorithm
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
        public Commands CommandId;
        public int index1;
        public int index2;
        public short additionalInfo;
        public string message;
        public QueueCommand(Commands CommandId, int index1, short additionalInfo){
            this.CommandId = CommandId;
            this.index1 = index1;
            this.additionalInfo = additionalInfo;
        }
        public QueueCommand(Commands CommandId, int index1, int index2, short additionalInfo){
            this.CommandId = CommandId;
            this.index1 = index1;
            this.index2 = index2;
            this.additionalInfo = additionalInfo;
        }
        public QueueCommand(Commands CommandId, string message){
            this.CommandId = CommandId;
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
        queue.Enqueue(new QueueCommand(Commands.WAIT, -1, -1));
        queue.Enqueue(new QueueCommand(Commands.WAIT, -1, -1));

        for(i = 0; i < size; i++){
            array[i] = new ArrayIndex(r.Next(21), i, boxPrefab);
        }
        sort();
        for(i = 0; i < size; i++){
            array[i].Object.transform.GetChild(0).GetComponent<TMP_Text>().text = array[i].value.ToString();
            array[i].Object.transform.GetChild(1).GetComponent<TMP_Text>().text = i.ToString();
        }
        this.searchToken = searchToken;
        setCam();

        queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "Choose a value to search for"));
        queue.Enqueue(new QueueCommand(Commands.WAIT, -1, -1));

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
        int min, max, middle;
        min = 0;
        max = size - 1;
        middle = max / 2;

        searchToken = searchValue;

        queue.Enqueue(new QueueCommand(Commands.COLOR_ALL, min, max, 4));

        queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "Searching for " + searchToken));
        queue.Enqueue(new QueueCommand(Commands.WAIT, -1,-1));
        queue.Enqueue(new QueueCommand(Commands.WAIT, -1, -1));

        while(max - min > 0){
            queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "Calculating midpoint from index " + min + " to " + max));
            queue.Enqueue(new QueueCommand(Commands.WAIT, -1,-1));
            queue.Enqueue(new QueueCommand(Commands.COLOR_ONE, middle, 1));
            queue.Enqueue(new QueueCommand(Commands.WAIT, -1,-1));

            if(searchToken < array[middle].value){
                queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE,"" + searchToken + " is less than "+array[middle].value));
                queue.Enqueue(new QueueCommand(Commands.WAIT, -1,-1));
                queue.Enqueue(new QueueCommand(Commands.WAIT, -1, -1));
                queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE,"" + searchToken + " is not between indices "+middle + " and "+ max));
                queue.Enqueue(new QueueCommand(Commands.WAIT, -1,-1));
                queue.Enqueue(new QueueCommand(Commands.WAIT, -1, -1));
                queue.Enqueue(new QueueCommand(Commands.COLOR_ALL, middle, max, 3));
                queue.Enqueue(new QueueCommand(Commands.WAIT, -1,-1));
                max = middle -1;
                middle = (max+min)/2;
                continue;
            }
            else if(searchToken > array[middle].value){
                queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE,"" + searchToken + " is greater than "+array[middle].value));
                queue.Enqueue(new QueueCommand(Commands.WAIT, -1,-1));
                queue.Enqueue(new QueueCommand(Commands.WAIT, -1, -1));
                queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE,"" + searchToken + " is not between indices "+min + " and "+ middle));
                queue.Enqueue(new QueueCommand(Commands.WAIT, -1,-1));
                queue.Enqueue(new QueueCommand(Commands.WAIT, -1, -1));
                queue.Enqueue(new QueueCommand(Commands.COLOR_ALL, min, middle, 3));
                queue.Enqueue(new QueueCommand(Commands.WAIT, -1,-1));
                min = middle + 1;
                middle = (max+min)/2;
                continue;
            }
            else{
                queue.Enqueue(new QueueCommand(Commands.COLOR_ONE, middle, 2));
                queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE,"" + searchToken + " found at index "+ middle));
                queue.Enqueue(new QueueCommand(Commands.WAIT, -1,-1));
                queue.Enqueue(new QueueCommand(Commands.WAIT, -1, -1));
                return;
            }
        }
        queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE,"One element left"));
        queue.Enqueue(new QueueCommand(Commands.WAIT, -1,-1));
        queue.Enqueue(new QueueCommand(Commands.WAIT, -1, -1));
        if(max == min && array[max].value == searchToken){

            queue.Enqueue(new QueueCommand(Commands.COLOR_ONE, max, 1));
            queue.Enqueue(new QueueCommand(Commands.WAIT, -1,-1));
            queue.Enqueue(new QueueCommand(Commands.COLOR_ONE, max, 2));
            queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE,"" + searchToken + " found at index "+ middle));
            queue.Enqueue(new QueueCommand(Commands.WAIT, -1,-1));
        }
        else if (max < 0){
            queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE,"" + searchToken + " not in array"));
        }
        else {
            queue.Enqueue(new QueueCommand(Commands.COLOR_ONE, max, 1));
            queue.Enqueue(new QueueCommand(Commands.WAIT, -1,-1));
            queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE,"" + searchToken + " not in array"));
            queue.Enqueue(new QueueCommand(Commands.COLOR_ONE, max, 3));

        }
    }
    public IEnumerator readQueue(){ // FIXME NEED TO DEQUE CommandS
        foreach(QueueCommand q in queue){
            switch(q.CommandId){
                case Commands.WAIT:
                    yield return new WaitForSeconds(time);
                    break;
                case Commands.COLOR_ONE: // change color of single item
                    changeColor(q.index1, q.additionalInfo);
                    break;
                case Commands.COLOR_ALL: // change Color color of several items
                    for(int i = q.index1; i<= q.index2; i++ ){
                        changeColor(i, q.additionalInfo);
                    }
                    break;
                case Commands.UPDATE_MESSAGE: // update message
                    showText.text = q.message;
                    break;
            }
        }
        queue.Clear();
    }
    void changeColor(int index, short colorId){
        switch(colorId){
            case 1:
                array[index].Object.GetComponent<Renderer>().material.color = Color.red;
                break;
            case 2:
                array[index].Object.GetComponent<Renderer>().material.color = Color.green;
                break;
            case 3:
                array[index].Object.GetComponent<Renderer>().material.color = Color.black;
                array[index].Object.transform.GetChild(0).GetComponent<TMP_Text>().color = Color.white;
                break;
            case 4:
                if (index % 2 == 0)
                    array[index].Object.GetComponent<Renderer>().material.color = Color.white;
                else
                    array[index].Object.GetComponent<Renderer>().material.color = Color.gray;
                array[index].Object.transform.GetChild(0).GetComponent<TMP_Text>().color = Color.black;
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
