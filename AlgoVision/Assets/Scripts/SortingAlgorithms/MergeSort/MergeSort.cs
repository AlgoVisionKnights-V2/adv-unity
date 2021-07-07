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

        queue.Enqueue(new QueueCommand(7, "Starting Merge Sort", 5));
        queue.Enqueue(new QueueCommand());

        mergeSort(0, size - 1);
        queue.Enqueue(new QueueCommand(6, 0, size - 1, 0, 2));
        timer.Stop();
        stopTime = timer.ElapsedMilliseconds;
    }   

    private void merge(int low, int middle, int high)
    {
        int i, j, k;
        int n1 = middle - low + 1;
        int n2 = high - middle;

        //int[] leftArray = new int[n1];
        //int[] rightArray = new int[n2];
        queue.Enqueue(new QueueCommand(7, "Creating the left auxilliary array", 5));
        queue.Enqueue(new QueueCommand(13, 0, n1-1, 1));
        queue.Enqueue(new QueueCommand());
        queue.Enqueue(new QueueCommand(7, "Copying values into the left auxiliarry array", 5));

        for (i = 0; i < n1; i++)
        {
            auxArr[i] = arr[low+i];
            queue.Enqueue(new QueueCommand(10, i, low+i, 1));
            queue.Enqueue(new QueueCommand());
            //leftArray[i] = array[low + i];
        }
        queue.Enqueue(new QueueCommand(7, "Creating the right auxilliary array", 5));
        queue.Enqueue(new QueueCommand(13, midSplit, midSplit + n2 - 1, 1));
        queue.Enqueue(new QueueCommand());
        queue.Enqueue(new QueueCommand(7, "Copying values into the right auxiliarry array", 5));
        for (j = 0; j < n2; j++)
        {
            auxArr[j + midSplit] = arr[middle + 1 + j];
            queue.Enqueue(new QueueCommand(10, j + midSplit, middle + 1 + j, 1));
            queue.Enqueue(new QueueCommand());
            //rightArray[j] = array[middle + 1 + j];
        }

        i = 0;
        j = midSplit;
        k = low; 
        queue.Enqueue(new QueueCommand((short)8, i, high, 1, "Smallest Left"));
        queue.Enqueue(new QueueCommand((short)8, j, high, 1, "Smallest Right"));
        queue.Enqueue(new QueueCommand((short)8, k, high, 0, "Writing to"));

        while (i < n1 && j < midSplit + n2)
        {
            if (compare(i, j, 1) && auxArr[i] <= auxArr[j])
            //if (leftArray[i] <= rightArray[j])
            {
                queue.Enqueue(new QueueCommand(7, "" + auxArr[i] + " is smaller. Copying into index " + k, 5));
                queue.Enqueue(new QueueCommand());

                arr[k] = auxArr[i];
                queue.Enqueue(new QueueCommand(11, k, i, 1));
                queue.Enqueue(new QueueCommand());
                decompare(i, j, 1, 0);
                queue.Enqueue(new QueueCommand((short)8, i, high, 1, "Smallest Left"));
                i++;
                if (i < n1)
                    queue.Enqueue(new QueueCommand((short)8, i, high, 1, "Smallest Left"));

            }
            else
            {
                queue.Enqueue(new QueueCommand(7, "" + auxArr[j] + " is smaller. Copying into index " + k, 5));
                queue.Enqueue(new QueueCommand());
                arr[k] = auxArr[j];
                queue.Enqueue(new QueueCommand(11, k, j, 1));
                queue.Enqueue(new QueueCommand());
                decompare(i, j, 1, 0);
                queue.Enqueue(new QueueCommand((short)8, j, high, 1, "Smallest Right"));

                j++;
                if(j < n2 + midSplit)
                    queue.Enqueue(new QueueCommand((short)8, j, high, 1, "Smallest Right"));

            }
            queue.Enqueue(new QueueCommand((short)8, k, high, 0, "Writing to"));
            k++;
            queue.Enqueue(new QueueCommand((short)8, k, high, 0, "Writing to"));
            queue.Enqueue(new QueueCommand());

        }

        if(i < n1){
            queue.Enqueue(new QueueCommand(7, "Copy all remaining left auxillary values into the array", 5));
            queue.Enqueue(new QueueCommand());
        } 

        while (i < n1)
        {
            arr[k] = auxArr[i];
            queue.Enqueue(new QueueCommand(11, k, i, 1));
            queue.Enqueue(new QueueCommand());
            //q.Enqueue(new short[] {10, (short)k, (short)i, 0});
//            q.Enqueue(new short[] {2, (short)i, 4, 1});
            queue.Enqueue(new QueueCommand((short)8, i, high, 1, "Smallest Left"));
            i++;
            if (i < n1)
                queue.Enqueue(new QueueCommand((short)8, i, high, 1, "Smallest Left"));
        
            queue.Enqueue(new QueueCommand((short)8, k, high, 0, "Writing to"));
            k++;
            if (k <= high)
                queue.Enqueue(new QueueCommand((short)8, k, high, 0, "Writing to"));
        }
        if(j < n2+midSplit){
            queue.Enqueue(new QueueCommand(7, "Copy all remaining right auxillary values into the array", 5));
            queue.Enqueue(new QueueCommand());
        } 
        while (j < n2+ midSplit)
        {
            arr[k] = auxArr[j];
            queue.Enqueue(new QueueCommand(11, k, j, 1));
            queue.Enqueue(new QueueCommand());
  //          q.Enqueue(new short[] {10, (short)k, (short)j, 0});
    //        q.Enqueue(new short[] {2, (short)j, 4, 1});
            queue.Enqueue(new QueueCommand((short)8, j, high, 1, "Smallest Right"));
            j++;
            if (j < n2 + midSplit)
                queue.Enqueue(new QueueCommand((short)8, j, high, 1, "Smallest Right"));

            queue.Enqueue(new QueueCommand((short)8, k, high, 0, "Writing to"));
            k++;
            if (k <= high)
                queue.Enqueue(new QueueCommand((short)8, k, high, 0, "Writing to"));
        }
        queue.Enqueue(new QueueCommand(12, 1));
    }

    private void mergeSort(int low, int high){
        stack++;
        queue.Enqueue(new QueueCommand(7, "Calling Merge Sort from index " + low + " to index " + high, 5));
        //queue.Enqueue(new QueueCommand(6, low, high, 0, 3));
        queue.Enqueue(new QueueCommand());
        
        if (low < high)
        {
            int med = (low + high - 1) / 2;


            queue.Enqueue(new QueueCommand(7, "Locate the Midpoint of the Array", 5));
            queue.Enqueue(new QueueCommand());
            queue.Enqueue(new QueueCommand((short)8, med, high, 0, "Mid"));
            queue.Enqueue(new QueueCommand());

            queue.Enqueue(new QueueCommand((short)8, med, high, 0, "Mid"));
            
            //queue.Enqueue(new QueueCommand(6, low, high, 0, 0));
            queue.Enqueue(new QueueCommand(9, low, med, 0));

            
            mergeSort(low, med);
            queue.Enqueue(new QueueCommand(7, "Returning to Merge Sort from index " + low + " to index " + high, 5));
            queue.Enqueue(new QueueCommand());
            //queue.Enqueue(new QueueCommand(6, low, high, 0, 3));

            queue.Enqueue(new QueueCommand(10, low, med, 0));
            queue.Enqueue(new QueueCommand());

            //queue.Enqueue(new QueueCommand(6, low, high, 0, 0));
            queue.Enqueue(new QueueCommand(9, med+1, high, 0));
            mergeSort(med + 1, high);
            queue.Enqueue(new QueueCommand(10, med+1, high, 0));
            queue.Enqueue(new QueueCommand(7, "Returning to Merge Sort from index " + low + " to index " + high, 5));
            queue.Enqueue(new QueueCommand());
            //queue.Enqueue(new QueueCommand(6, low, high, 0, 3));
            queue.Enqueue(new QueueCommand());

            queue.Enqueue(new QueueCommand(7, "Merging indices " + low + " to " + high +" together", 5));
            queue.Enqueue(new QueueCommand());

            merge(low, med, high);
        }
        else{
            queue.Enqueue(new QueueCommand(7, "Base case reached. Returning", 5));
            queue.Enqueue(new QueueCommand());
        }
        //queue.Enqueue(new QueueCommand(6, low, high, 0, 0));
        stack--;
    }
    new public bool compare(int x, int y, short arrayId)
    {
        Debug.Log(x + " "+ y);
        queue.Enqueue(new QueueCommand(4, x, y, arrayId, "Comparing " + auxArr[x] + " to " + auxArr[y]));

        queue.Enqueue(new QueueCommand(1, x, y, arrayId, 1));
        queue.Enqueue(new QueueCommand());


        return true;
    }
}

