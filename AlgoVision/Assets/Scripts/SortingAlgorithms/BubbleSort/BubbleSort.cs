using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System;
public class BubbleSort : SortingAlgorithm1
{
    [SerializeField] GameObject boxPrefab;
    [SerializeField] public GameObject canvas;

    private Boolean isPlay;

    void Start()
    {
        canvas = GameObject.Find("Canvas");
    }
    

    override public void sort(){
        buildArray(boxPrefab, canvas);

        timer.Restart();

        queue.Enqueue(new QueueCommand(7, "Beginning Bubble Sort!", 5));
        queue.Enqueue(new QueueCommand());
        queue.Enqueue(new QueueCommand());
        queue.Enqueue(new QueueCommand(7, "Select the leftmost element and attempt to Bubble Up", 5));
        queue.Enqueue(new QueueCommand());
        queue.Enqueue(new QueueCommand());

        int i,j;
        for (i = 0; i < size; i++){
            queue.Enqueue(new QueueCommand((short)8, 0, 0, 0, "Bubble"));
            queue.Enqueue(new QueueCommand());
            for(j = 0; j < size - i - 1; j++){

                
                if (compare(j, j+1, 0) && arr[j] > arr[j+1]){
                    queue.Enqueue(new QueueCommand(7, "" + arr[j] + " is greater than " + arr[j+1] + ". Bubble Up!", 5));
                    queue.Enqueue(new QueueCommand());
                    queue.Enqueue(new QueueCommand());

                    queue.Enqueue(new QueueCommand((short)8, j, j, 0, "Bubble"));
                    swap(j, j+1);
                    queue.Enqueue(new QueueCommand((short)8, j+1, j, 0, "Bubble"));
                    queue.Enqueue(new QueueCommand());
                }
                else{
                    queue.Enqueue(new QueueCommand(7, "" + arr[j] + " is less than " + arr[j + 1] + ". Increment our bubble pointer", 5));
                    queue.Enqueue(new QueueCommand());
                    queue.Enqueue(new QueueCommand());

                    queue.Enqueue(new QueueCommand((short)8, j, j, 0, "Bubble"));
                    queue.Enqueue(new QueueCommand((short)8, j+1, j, 0, "Bubble"));

                    queue.Enqueue(new QueueCommand(7, arr[j] + " and " + arr[j+1] + " unchanged"));
                    queue.Enqueue(new QueueCommand());
                }
                Debug.Log("Elapsed time: "+ timer.ElapsedMilliseconds);
                decompare(j, j+1, 0, 0);
            }
            queue.Enqueue(new QueueCommand(3, j, (short)0, 2,  arr[j] + " sorted"));
            queue.Enqueue(new QueueCommand());

            queue.Enqueue(new QueueCommand(7, "" + arr[j] + " is now it its sorted position. Reset our Bubble Pointer", 5));
            queue.Enqueue(new QueueCommand());
            queue.Enqueue(new QueueCommand((short)8, j, j, 0, "Bubble"));
            queue.Enqueue(new QueueCommand());
        }
        timer.Stop();
        stopTime = timer.ElapsedMilliseconds;
    }

    public void pauseAndPlay()
    {
        if (isPlay)
        {
            Time.timeScale = 1;
            isPlay = false;
            canvas.transform.GetChild(2).GetComponent<Image>().color = new Color(1f, 1f, 1f, 1);
        }
        else
        {
            Time.timeScale = 0;
            isPlay = true;
            canvas.transform.GetChild(2).GetComponent<Image>().color = new Color(0.573f, 1f, 0f, 1);
        }
    }

    public void restartScene()
    {
        SceneManager.LoadScene("CodyTest1");
    }

    override public void extendCommands(QueueCommand q){
        throw new NotImplementedException();
    }
    /*
    int i, j = 0;
    public BubbleSort2(): base(20)
    {

    }

    // Start is called before the first frame update
    void Start()
    {
        // build the GameObject shape, size, and positions
        for (i = 0; i < 20; i++)
        {
            array[i] = GameObject.CreatePrimitive(PrimitiveType.Cube);
            array[i].transform.position = new Vector3((float)i, .5f * i, 0);
            array[i].transform.localScale = new Vector3(1, i + 1, 1);
        }
        i = 0;
    }

    // Update is called once per frame
    void Update()
    {
        // First, have the SortingAlgorithm shuffle the array
        if (!unsorted)
        {
            shuffle();
        }
        // THen sort it
        else
        {
            // Represents the outer for-loop in bubble sort
            if (i< 20)
            {
                // represents the inner for-loop in bubble sort
                if (j < 19- i)
                {
                    array[j].GetComponent<Renderer>().material.color = Color.red;
                    array[j+1].GetComponent<Renderer>().material.color = Color.red;

                    // use the height of each GameObject to determine their value
                    if (array[j].transform.position.y > array[j + 1].transform.position.y)
                    {
                        sort();
                    }
                    // Only increment j (and move to next "loop") when the objects have been swapped
                    if (!isMoving)
                    {
                        array[j].GetComponent<Renderer>().material.color = Color.white;
                        array[j + 1].GetComponent<Renderer>().material.color = Color.white;
                        j++;
                    }
                }
                // j has reach the end of its loop so now we go to the next iteration in the outer "loop"
                else
                {
                    // show this index is sorted
                    array[j].GetComponent<Renderer>().material.color = Color.green;
                    i++;
                    j = 0;
                }
            }

        }
    }

    // set up the variables in SortingAlgorithm that handle moving objects then call movePieces
    public void sort()
    {
        if (!isMoving)
        {
            left = j;
            right = j + 1;
            isMoving = true;
            leftOriginal = array[left].transform.position.x;
            rightOriginal = array[right].transform.position.x;

        }
        movePieces();
    }*/
}
