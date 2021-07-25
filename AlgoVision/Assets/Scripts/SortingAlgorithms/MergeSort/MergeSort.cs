using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System;


public class MergeSort : SortingAlgorithmWithAuxArray1
{
    [SerializeField] GameObject boxPrefab;
    [SerializeField] public GameObject canvas;
    int stack;
    private Boolean isPlay;

    void Start()
    {
        canvas = GameObject.Find("Canvas");
    }

    // To reduce runtime, we'll use the same auxArray for everything. 
    // This value tells us which index is the last possible index of the leftAuxArray
    int midSplit;

    public void setup(int size){
        this.size = size;
        arr = new int[size];
        auxArr = new int[size];
        array = new ArrayIndex[size];
        auxArray = new ArrayIndex[size];
        sort();
        setAuxCam();

    }
    override public void sort(){
        buildArray(boxPrefab, canvas);
        buildAuxArray(boxPrefab, canvas);

        midSplit = (size - 2)/ 2 + 1;
        stack = 0;
        timer.Restart();

        queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "Starting Merge Sort", Colors.YELLOW));
        queue.Enqueue(new QueueCommand());

        mergeSort(0, size - 1);
        queue.Enqueue(new QueueCommand(Commands.COLOR_ALL, 0, size - 1, Array.MAIN, Colors.GREEN));
        timer.Stop();
        stopTime = timer.ElapsedMilliseconds;
    }   

    private void merge(int low, int middle, int high)
    {
        int i, j, k;
        int n1 = middle - low + 1;
        int n2 = high - middle;

        queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "Creating the left auxilliary array", Colors.YELLOW));
        queue.Enqueue(new QueueCommand(Commands.SHOW, 0, n1-1, Array.AUX));
        queue.Enqueue(new QueueCommand());
        queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "Copying values into the left auxiliarry array", Colors.YELLOW));

        for (i = 0; i < n1; i++)
        {
            auxArr[i] = arr[low+i];
            queue.Enqueue(new QueueCommand(Commands.COPY_MAIN, i, low+i, Array.AUX));
            queue.Enqueue(new QueueCommand());
        }
        queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "Creating the right auxilliary array", Colors.YELLOW));
        queue.Enqueue(new QueueCommand(Commands.SHOW, midSplit, midSplit + n2 - 1, Array.AUX));
        queue.Enqueue(new QueueCommand());
        queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "Copying values into the right auxiliarry array", Colors.YELLOW));
        for (j = 0; j < n2; j++)
        {
            auxArr[j + midSplit] = arr[middle + 1 + j];
            queue.Enqueue(new QueueCommand(Commands.COPY_MAIN, j + midSplit, middle + 1 + j, Array.AUX));
            queue.Enqueue(new QueueCommand());
        }

        i = 0;
        j = midSplit;
        k = low; 
        queue.Enqueue(new QueueCommand(Commands.TOGGLE_ARROW, i, high, Array.AUX, "Smallest Left"));
        queue.Enqueue(new QueueCommand(Commands.TOGGLE_ARROW, j, high, Array.AUX, "Smallest Right"));
        queue.Enqueue(new QueueCommand(Commands.TOGGLE_ARROW, k, high, Array.MAIN, "Writing to"));

        while (i < n1 && j < midSplit + n2)
        {
            if (compare(i, j, Array.AUX) && auxArr[i] <= auxArr[j])
            {
                queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "" + auxArr[i] + " is smaller. Copying into index " + k, Colors.YELLOW));
                queue.Enqueue(new QueueCommand());

                arr[k] = auxArr[i];
                queue.Enqueue(new QueueCommand(Commands.COPY_AUX, k, i, Array.AUX));
                queue.Enqueue(new QueueCommand());
                decompare(i, j, Array.AUX, Colors.WHITE);
                queue.Enqueue(new QueueCommand(Commands.TOGGLE_ARROW, i, high, Array.AUX, "Smallest Left"));
                i++;
                if (i < n1)
                    queue.Enqueue(new QueueCommand(Commands.TOGGLE_ARROW, i, high, Array.AUX, "Smallest Left"));

            }
            else
            {
                queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "" + auxArr[j] + " is smaller. Copying into index " + k, Colors.YELLOW));
                queue.Enqueue(new QueueCommand());
                arr[k] = auxArr[j];
                queue.Enqueue(new QueueCommand(Commands.COPY_AUX, k, j, Array.AUX));
                queue.Enqueue(new QueueCommand());
                decompare(i, j, Array.AUX, Colors.WHITE);
                queue.Enqueue(new QueueCommand(Commands.TOGGLE_ARROW, j, high, Array.AUX, "Smallest Right"));

                j++;
                if(j < n2 + midSplit)
                    queue.Enqueue(new QueueCommand(Commands.TOGGLE_ARROW, j, high, Array.AUX, "Smallest Right"));

            }
            queue.Enqueue(new QueueCommand(Commands.TOGGLE_ARROW, k, high, Array.MAIN, "Writing to"));
            k++;
            queue.Enqueue(new QueueCommand(Commands.TOGGLE_ARROW, k, high, Array.MAIN, "Writing to"));
            queue.Enqueue(new QueueCommand());

        }

        if(i < n1){
            queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "Copy all remaining left auxillary values into the array", Colors.YELLOW));
            queue.Enqueue(new QueueCommand());
        } 

        while (i < n1)
        {
            arr[k] = auxArr[i];
            queue.Enqueue(new QueueCommand(Commands.COPY_AUX, k, i, Array.AUX));
            queue.Enqueue(new QueueCommand());
            queue.Enqueue(new QueueCommand(Commands.TOGGLE_ARROW, i, high, Array.AUX, "Smallest Left"));
            i++;
            if (i < n1)
                queue.Enqueue(new QueueCommand(Commands.TOGGLE_ARROW, i, high, Array.AUX, "Smallest Left"));
        
            queue.Enqueue(new QueueCommand(Commands.TOGGLE_ARROW, k, high, Array.MAIN, "Writing to"));
            k++;
            if (k <= high)
                queue.Enqueue(new QueueCommand(Commands.TOGGLE_ARROW, k, high, Array.MAIN, "Writing to"));
        }
        if(j < n2+midSplit){
            queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "Copy all remaining right auxillary values into the array", Colors.YELLOW));
            queue.Enqueue(new QueueCommand());
        } 
        while (j < n2+ midSplit)
        {
            arr[k] = auxArr[j];
            queue.Enqueue(new QueueCommand(Commands.COPY_AUX, k, j, Array.AUX));
            queue.Enqueue(new QueueCommand());
            queue.Enqueue(new QueueCommand(Commands.TOGGLE_ARROW, j, high, Array.AUX, "Smallest Right"));
            j++;
            if (j < n2 + midSplit)
                queue.Enqueue(new QueueCommand(Commands.TOGGLE_ARROW, j, high, Array.AUX, "Smallest Right"));

            queue.Enqueue(new QueueCommand(Commands.TOGGLE_ARROW, k, high, Array.MAIN, "Writing to"));
            k++;
            if (k <= high)
                queue.Enqueue(new QueueCommand(Commands.TOGGLE_ARROW, k, high, Array.MAIN, "Writing to"));
        }
        queue.Enqueue(new QueueCommand(Commands.HIDE, Array.AUX));
    }

    private void mergeSort(int low, int high){
        stack++;
        queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "Calling Merge Sort from index " + low + " to index " + high, Colors.YELLOW));
        queue.Enqueue(new QueueCommand());
        
        if (low < high)
        {
            int med = (low + high - 1) / 2;


            queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "Locate the Midpoint of the Array", Colors.YELLOW));
            queue.Enqueue(new QueueCommand());
            queue.Enqueue(new QueueCommand(Commands.TOGGLE_ARROW, med, high, Array.MAIN, "Mid"));
            queue.Enqueue(new QueueCommand());

            queue.Enqueue(new QueueCommand(Commands.TOGGLE_ARROW, med, high, Array.MAIN, "Mid"));
            
            queue.Enqueue(new QueueCommand(Commands.RAISE_ALL, low, med, Array.MAIN));

            
            mergeSort(low, med);
            queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "Returning to Merge Sort from index " + low + " to index " + high, Colors.YELLOW));
            queue.Enqueue(new QueueCommand());

            queue.Enqueue(new QueueCommand(Commands.LOWER_ALL, low, med, Array.MAIN));
            queue.Enqueue(new QueueCommand());

            queue.Enqueue(new QueueCommand(Commands.RAISE_ALL, med+1, high, Array.MAIN));
            mergeSort(med + 1, high);
            queue.Enqueue(new QueueCommand(Commands.LOWER_ALL, med+1, high, Array.MAIN));
            queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "Returning to Merge Sort from index " + low + " to index " + high, Colors.YELLOW));
            queue.Enqueue(new QueueCommand());
            queue.Enqueue(new QueueCommand());

            queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "Merging indices " + low + " to " + high +" together", Colors.YELLOW));
            queue.Enqueue(new QueueCommand());

            merge(low, med, high);
        }
        else{
            queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "Base case reached. Returning", Colors.YELLOW));
            queue.Enqueue(new QueueCommand());
        }
        stack--;
    }
    new public bool compare(int x, int y, Array arrayId)
    {
        Debug.Log(x + " "+ y);
        queue.Enqueue(new QueueCommand(Commands.RAISE, x, y, arrayId, "Comparing " + auxArr[x] + " to " + auxArr[y]));

        queue.Enqueue(new QueueCommand(Commands.COLOR_TWO, x, y, arrayId, Colors.RED));
        queue.Enqueue(new QueueCommand());


        return true;
    }
}

