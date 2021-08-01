using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System;
using TMPro;

public class QuickSort : SortingAlgorithm1
{
    [SerializeField] GameObject boxPrefab;
    [SerializeField] public GameObject canvas;

    private Boolean isPlay;

    void Start()
    {
        canvas = GameObject.Find("Canvas");
    }

    public void setup(int size){
        this.size = size;
        arr = new int[size];
        array = new ArrayIndex[size];
        sort();
        setCam();
    }
    override public void sort(){
        buildArray(boxPrefab, canvas);
        timer.Restart();

        queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "Beginning Quick Sort!", Colors.YELLOW));
        queue.Enqueue(new QueueCommand());
        queue.Enqueue(new QueueCommand());

        queue.Enqueue(new QueueCommand());
        quickSort(0, size - 1);
        timer.Stop();
        stopTime = timer.ElapsedMilliseconds;
    }   

    void quickSort(int low, int high)
    {

        int split;
        if (low < high)
        {
            queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "Recursively calling QuickSort from index " + low + " through " + high, Colors.YELLOW));

            queue.Enqueue(new QueueCommand(Commands.RAISE_ALL, low, high, Array.MAIN));
            queue.Enqueue(new QueueCommand(Commands.COLOR_ALL, low, high, Array.MAIN, Colors.BLUE));
            queue.Enqueue(new QueueCommand());

            split = partition(low, high);
            queue.Enqueue(new QueueCommand(Commands.LOWER_ALL, low, high, Array.MAIN));
            queue.Enqueue(new QueueCommand(Commands.COLOR_ALL, low, split - 1, Array.MAIN, Colors.WHITE));
            queue.Enqueue(new QueueCommand(Commands.COLOR_ALL, split + 1, high, Array.MAIN, Colors.WHITE));
            queue.Enqueue(new QueueCommand(Commands.COLOR_ONE, split, Array.MAIN, Colors.GREEN));
            
            queue.Enqueue(new QueueCommand());
            quickSort(low, split - 1);
            quickSort(split + 1, high);
        }
        else
        {
            if( low > -1 && low < size)
            {
                if (low > high)
                {
                    return;
                }
                queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "Recursively calling QuickSort on index " + low, Colors.YELLOW));
                queue.Enqueue(new QueueCommand(Commands.RAISE_ALL, low, low, Array.MAIN));
                queue.Enqueue(new QueueCommand(Commands.COLOR_ALL, low, low, Array.MAIN, Colors.BLUE));
                queue.Enqueue(new QueueCommand());
                queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "Index " + low + " is a single element partition. It is already in its sorted position", Colors.YELLOW));
                queue.Enqueue(new QueueCommand());

                queue.Enqueue(new QueueCommand(Commands.LOWER_ALL, low, low, Array.MAIN));

                queue.Enqueue(new QueueCommand(Commands.COLOR_ONE, low, Array.MAIN, Colors.GREEN));
                queue.Enqueue(new QueueCommand(Commands.TOGGLE_ARROW, low, high, Array.MAIN, "Pivot"));
                queue.Enqueue(new QueueCommand());
                queue.Enqueue(new QueueCommand(Commands.TOGGLE_ARROW, low, high, Array.MAIN, "Pivot"));
            }    
            else if (low <= high)
            {
                queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "Recursively calling QuickSort on index " + high, Colors.YELLOW));
                queue.Enqueue(new QueueCommand(Commands.RAISE_ALL, high, high, Array.MAIN));
                queue.Enqueue(new QueueCommand(Commands.COLOR_ALL, high, high, Array.MAIN, Colors.BLUE));
                queue.Enqueue(new QueueCommand());
                
                queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "Index " + high + " is a single element partition. It is already in its sorted position", Colors.YELLOW));
                queue.Enqueue(new QueueCommand());
                queue.Enqueue(new QueueCommand(Commands.LOWER_ALL, high, high, Array.MAIN));

                queue.Enqueue(new QueueCommand(Commands.COLOR_ONE, high, Array.MAIN, Colors.GREEN));
                queue.Enqueue(new QueueCommand(Commands.TOGGLE_ARROW, high, low, Array.MAIN, "Pivot"));
                queue.Enqueue(new QueueCommand());
                queue.Enqueue(new QueueCommand(Commands.TOGGLE_ARROW, high, low, Array.MAIN, "Pivot"));
            }
        }
    }

    int partition(int low, int high)
    {
        

        int pivot = low++; 
        int pHigh = high;

        
        // color the pointers

        queue.Enqueue(new QueueCommand(Commands.COLOR_ONE, low, Array.MAIN, Colors.YELLOW));
        queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "Index " + low + " is lower pointer.", Colors.YELLOW));

        queue.Enqueue(new QueueCommand());

        queue.Enqueue(new QueueCommand(Commands.COLOR_ONE, high, Array.MAIN, Colors.BLUE_OTHER));
        queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "Index " + high + " is higher pointer.", Colors.BLUE_OTHER));
        queue.Enqueue(new QueueCommand());

        queue.Enqueue(new QueueCommand(Commands.COLOR_ONE, pivot, Array.MAIN, Colors.GREEN_OTHER));
        queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "Index " + pivot + " is pivot.", Colors.GREEN_OTHER));
        queue.Enqueue(new QueueCommand());

        //Set Arrow Pointers
        queue.Enqueue(new QueueCommand(Commands.TOGGLE_ARROW, low, high, Array.MAIN, "Low"));//Command to set/deactivate arrows
        queue.Enqueue(new QueueCommand(Commands.TOGGLE_ARROW, high, low, Array.MAIN, "High"));
        queue.Enqueue(new QueueCommand(Commands.TOGGLE_ARROW, pivot, low, Array.MAIN, "Pivot"));

        if (high == low)
        {
            queue.Enqueue(new QueueCommand(Commands.TOGGLE_ARROW, high, low, Array.MAIN, "High/Low"));
        }

        queue.Enqueue(new QueueCommand());



        while (low <= high)
        {
            while (low <= high && compare(low, pivot, Array.MAIN) && arr[low] <= arr[pivot]){
                decompare(low, pivot, Array.MAIN, Colors.YELLOW, Colors.GREEN_OTHER); // lower indices
                
                if (low == size -1)
                {
                    queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "Low is not greater than the Pivot AND has reached the end of the array.", Colors.YELLOW));
                    queue.Enqueue(new QueueCommand());
                    queue.Enqueue(new QueueCommand(Commands.TOGGLE_ARROW, high, low, Array.MAIN, "High"));
                    queue.Enqueue(new QueueCommand(Commands.TOGGLE_ARROW, high, low, Array.MAIN, "High"));
                    queue.Enqueue(new QueueCommand(Commands.COLOR_ONE, high, Array.MAIN, Colors.BLUE_OTHER)); // color new low
                    low++;
                    queue.Enqueue(new QueueCommand());
                    break;

                }
                else
                {
                    queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "Low is not greater than the Pivot, move Low to the right.", Colors.YELLOW));
                }
                queue.Enqueue(new QueueCommand());
            
                queue.Enqueue(new QueueCommand(Commands.COLOR_ONE, low, Array.MAIN, Colors.BLUE)); // uncolor current low
                queue.Enqueue(new QueueCommand(Commands.TOGGLE_ARROW, low, high, Array.MAIN, "Low"));
                if (++low < high){
                    queue.Enqueue(new QueueCommand(Commands.COLOR_ONE, low, Array.MAIN, Colors.YELLOW)); // color new low
                    queue.Enqueue(new QueueCommand(Commands.TOGGLE_ARROW, low, high, Array.MAIN, "Low"));
                    queue.Enqueue(new QueueCommand());               
                }
                else if (low == high)
                {
                    queue.Enqueue(new QueueCommand(Commands.TOGGLE_ARROW, low, high, Array.MAIN, "Low/High"));
                    queue.Enqueue(new QueueCommand(Commands.TOGGLE_ARROW, low, high, Array.MAIN, "Low/High"));
                    queue.Enqueue(new QueueCommand(Commands.COLOR_ONE, low, Array.MAIN, Colors.YELLOW)); // color new low
                    queue.Enqueue(new QueueCommand());
                }
                else if (low > high && low < size)
                {
                    queue.Enqueue(new QueueCommand(Commands.TOGGLE_ARROW, low, high, Array.MAIN, "Low"));
                    queue.Enqueue(new QueueCommand(Commands.TOGGLE_ARROW, high, low, Array.MAIN, "High"));
                    queue.Enqueue(new QueueCommand(Commands.COLOR_ONE, low, Array.MAIN, Colors.YELLOW)); // color new low
                    queue.Enqueue(new QueueCommand(Commands.COLOR_ONE, high, Array.MAIN, Colors.BLUE_OTHER));
                    queue.Enqueue(new QueueCommand());
                }
            }
            if (low <= high && arr[low] > arr[pivot])
            {
                decompare(low, pivot, Array.MAIN, Colors.YELLOW, Colors.GREEN_OTHER);
                queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "Low is greater than the Pivot, switch to High Pointer.", Colors.BLUE));
                queue.Enqueue(new QueueCommand());
            }

            while (high >= low && compare(high, pivot, Array.MAIN)  && arr[high] > arr[pivot]){
                decompare(high, pivot, Array.MAIN, Colors.BLUE_OTHER, Colors.GREEN_OTHER);
                queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "High is not less than the Pivot, move High to the left.", Colors.YELLOW));
                queue.Enqueue(new QueueCommand());
                queue.Enqueue(new QueueCommand(Commands.COLOR_ONE, high, Array.MAIN, Colors.BLUE));
                queue.Enqueue(new QueueCommand(Commands.TOGGLE_ARROW, high, low, Array.MAIN, "High"));
                high--;
                queue.Enqueue(new QueueCommand(Commands.TOGGLE_ARROW, high, low, Array.MAIN, "High"));
                queue.Enqueue(new QueueCommand(Commands.COLOR_ONE, low, Array.MAIN, Colors.YELLOW)); // recolor low in case high was at the same index
                queue.Enqueue(new QueueCommand(Commands.COLOR_ONE, high, Array.MAIN, Colors.BLUE_OTHER));

                if (high == pivot)
                {
                    queue.Enqueue(new QueueCommand(Commands.TOGGLE_ARROW, high, low, Array.MAIN, "Pivot/High"));
                    queue.Enqueue(new QueueCommand(Commands.COLOR_ONE, high, Array.MAIN, Colors.GREEN_OTHER));
                }

                if (low == high)
                {
                    queue.Enqueue(new QueueCommand(Commands.TOGGLE_ARROW, low, high, Array.MAIN, "Low/High"));
                }
                else if (high < low)
                {
                    queue.Enqueue(new QueueCommand(Commands.TOGGLE_ARROW, low, high, Array.MAIN, "Low"));
                }
                queue.Enqueue(new QueueCommand());
            }
            if (high >= low && arr[high] <= arr[pivot])
            {
                decompare(high, pivot, Array.MAIN, Colors.BLUE_OTHER, Colors.GREEN_OTHER);
                queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "High is less than the Pivot, swap Low and High.", Colors.BLUE));
                queue.Enqueue(new QueueCommand());
            }

            if ( low < high)
            {
                swap(low, high);
                
                queue.Enqueue(new QueueCommand());

                queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "After swapping positions, move both pointers.", Colors.YELLOW));
                queue.Enqueue(new QueueCommand());

                queue.Enqueue(new QueueCommand(Commands.COLOR_ONE, low, Array.MAIN, Colors.BLUE));
                queue.Enqueue(new QueueCommand(Commands.TOGGLE_ARROW, low, high, Array.MAIN, "Low"));

                queue.Enqueue(new QueueCommand(Commands.TOGGLE_ARROW, high, low, Array.MAIN, "High"));
                queue.Enqueue(new QueueCommand(Commands.COLOR_ONE, high, Array.MAIN, Colors.BLUE));

                low++;
                high--;

                queue.Enqueue(new QueueCommand(Commands.TOGGLE_ARROW, high, low, Array.MAIN, "High"));
                queue.Enqueue(new QueueCommand(Commands.TOGGLE_ARROW, low, high, Array.MAIN, "Low"));


                queue.Enqueue(new QueueCommand(Commands.COLOR_ONE, low, Array.MAIN, Colors.YELLOW));
                queue.Enqueue(new QueueCommand(Commands.COLOR_ONE, high, Array.MAIN, Colors.BLUE_OTHER));

                if (low == high)
                {
                    queue.Enqueue(new QueueCommand(Commands.TOGGLE_ARROW, low, high, Array.MAIN, "Low/High"));
                }
                queue.Enqueue(new QueueCommand());
            }
        }
        // Finally we swap the pivot with the point high was pointing to
        queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "High and Low pointers have crossed, swap High and Pivot!", Colors.YELLOW));
        queue.Enqueue(new QueueCommand());
        swap(pivot, high);

        queue.Enqueue(new QueueCommand(Commands.COLOR_ONE, pivot, Array.MAIN, Colors.BLUE_OTHER));
        queue.Enqueue(new QueueCommand(Commands.COLOR_ONE, high, Array.MAIN, Colors.GREEN_OTHER));
        queue.Enqueue(new QueueCommand(Commands.TOGGLE_ARROW, high, low, Array.MAIN, "High"));
        queue.Enqueue(new QueueCommand(Commands.TOGGLE_ARROW, high, low, Array.MAIN, "Pivot"));
        queue.Enqueue(new QueueCommand(Commands.TOGGLE_ARROW, pivot, low, Array.MAIN, "High"));
        
        if (pivot == high)
        {
            queue.Enqueue(new QueueCommand(Commands.TOGGLE_ARROW, pivot, low, Array.MAIN, "Pivot/High"));
        }
        else
        {
            queue.Enqueue(new QueueCommand(Commands.TOGGLE_ARROW, pivot, low, Array.MAIN, "High"));
        }

        queue.Enqueue(new QueueCommand());
        queue.Enqueue(new QueueCommand(Commands.COLOR_ONE, pivot, Array.MAIN, Colors.BLUE));
        queue.Enqueue(new QueueCommand(Commands.COLOR_ONE, high, Array.MAIN, Colors.GREEN));
        queue.Enqueue(new QueueCommand(Commands.TOGGLE_ARROW, high, low, Array.MAIN, "High"));
        queue.Enqueue(new QueueCommand(Commands.TOGGLE_ARROW, high, low, Array.MAIN, "Pivot"));

        if (pivot != high)
        {
            queue.Enqueue(new QueueCommand(Commands.TOGGLE_ARROW, pivot, high, Array.MAIN, "Low"));
        }
        if (low < size)
        {
            queue.Enqueue(new QueueCommand(Commands.TOGGLE_ARROW, low, high, Array.MAIN, "Low"));

            if (low <= pHigh)
            {
                queue.Enqueue(new QueueCommand(Commands.COLOR_ONE, low, Array.MAIN, Colors.BLUE));
            }
            else
            {
                queue.Enqueue(new QueueCommand(Commands.COLOR_ONE, low, Array.MAIN, Colors.GREEN));
            }
        }
        
        queue.Enqueue(new QueueCommand());
        queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "Pivot is now in its sorted spot", Colors.YELLOW));
        queue.Enqueue(new QueueCommand());

        queue.Enqueue(new QueueCommand(Commands.TOGGLE_ARROW, high, low, Array.MAIN, "High"));
        queue.Enqueue(new QueueCommand());
        return high;
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
        SceneManager.LoadScene("QuickSortScene");
    }

    override public void extendCommands(QueueCommand q){
        array[q.index1].o.transform.GetChild(1).gameObject.SetActive(!array[q.index1].o.transform.GetChild(1).gameObject.activeInHierarchy);
        array[q.index1].o.transform.GetChild(1).GetChild(0).GetComponentInChildren<TextMeshPro>().text = q.message;
    }
/* static int size = 100;
    int leftPointer, rightPointer, split;
    QuickSortPartition head;
    bool partitioning = false;

    public QuickSort() : base(size)
    {
        head = new QuickSortPartition(0, size - 1);
    }

    private class QuickSortPartition

    {
        public int low, high;
        public QuickSortPartition next, prev;
        public QuickSortPartition(int low, int high)
        {
            this.low = low;
            this.high = high;
            next = prev = null;
        }

    }


    // Start is called before the first frame update
    void Start()
    {
        // build the GameObject shape, size, and positions
        for (int i = 0; i < size; i++)
        {
            array[i] = GameObject.CreatePrimitive(PrimitiveType.Cube);
            array[i].transform.position = new Vector3((float)i, .5f * i, 0);
            array[i].transform.localScale = new Vector3(1, i + 1, 1);
        }
    }

    // Update is called once per frame
    void Update()
    {

        if (head == null)
        {
            return;
        }
        // First, have the SortingAlgorithm shuffle the array
        if (!unsorted)
        {
            shuffle();
        }
        else
        {
            // Check if we're in the process of partitioning
            // This triggers if we are not
            if (!partitioning)
            {
                // Check if the partition is only one element
                // If yes, set the left, right, and splitting values
                if (head.low < head.high)
                {
                    partitioning = true;
                    leftPointer = head.low + 1;
                    rightPointer = head.high;
                    split = head.low;
                    array[leftPointer].GetComponent<Renderer>().material.color = Color.red;
                    array[rightPointer].GetComponent<Renderer>().material.color = Color.red;
                    array[split].GetComponent<Renderer>().material.color = Color.red;


                }
                // A catcher line. head.low could potentially be out of bounds so if this happens, just discard the partition
                else if (head.low >= size)
                {
                    head = head.next;
                }
                // If partition is only one item, jump to next partition
                else
                {
                    array[head.low].GetComponent<Renderer>().material.color = Color.green;
                    head = head.next;
                }
            }
            // Enter if we are partitioning
            else
            {
                // Check if the left and right pointers have crossed
                // If we're here, we haven't swapped everything yet
                if (leftPointer <= rightPointer)
                {
                    // check if the number at left is less than split
                    // move up if it is
                    if (array[leftPointer].transform.position.y <= array[split].transform.position.y)
                    {
                        array[leftPointer++].GetComponent<Renderer>().material.color = Color.white;
                        array[leftPointer].GetComponent<Renderer>().material.color = Color.red;
                    }
                    // check if the number at right is greater than split
                    // move down if it is
                    else if (array[rightPointer].transform.position.y >= array[split].transform.position.y)
                    {
                        array[rightPointer--].GetComponent<Renderer>().material.color = Color.white;
                        array[rightPointer].GetComponent<Renderer>().material.color = Color.red;

                    }
                    // if we hit this, that means left and right both found something to swap
                    else
                    {
                        swapPointers();
                    }
                }
                // left and right have crossed meaning all elements have been moved
                // swap split and high, turn off partition, and add to the partition list
                else
                {
                    swapSplitter();
                    if (!isMoving)
                    {
                        array[rightPointer].GetComponent<Renderer>().material.color = Color.green;

                        partitioning = false;

                        QuickSortPartition a, b, temp;
                        a = new QuickSortPartition(head.low, rightPointer - 1);
                        // THis line could potentially cause an OutOfBounds Exception if the split happened at the very last value
                        b = new QuickSortPartition(rightPointer + 1, head.high);
                        temp = head.next;
                        b.next = temp;

                        a.next = b;
                        head = a;
                    }

                }
            }
        }
    }
    // set up the variables in SortingAlgorithm that handle moving objects then call movePieces
    public void swapPointers()
    {
        if (!isMoving)
        {
            left = leftPointer;
            right = rightPointer;
            isMoving = true;
            leftOriginal = array[left].transform.position.x;
            rightOriginal = array[right].transform.position.x;
        }
        movePieces();
    }
    public void swapSplitter()
    {
        if (!isMoving)
        {
            left = split;
            right = rightPointer;
            isMoving = true;
            leftOriginal = array[left].transform.position.x;
            rightOriginal = array[right].transform.position.x;
        }
        movePieces();
    }*/
}
