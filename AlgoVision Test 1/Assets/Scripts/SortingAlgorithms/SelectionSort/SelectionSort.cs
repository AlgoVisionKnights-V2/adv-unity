using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class SelectionSort : SortingAlgorithm1
{
    [SerializeField] GameObject boxPrefab;
    [SerializeField] public GameObject canvas;

    private Boolean isPlay;

    void Start()
    {
        canvas = GameObject.Find("Canvas");
    }


    public void setup(int size)
    {
        this.size = size;  // 70.2 63.8 -114.5
        arr = new int[size];
        array = new ArrayIndex[size];
        sort();
        setCam();
    }
    // Start is called before the first frame update
    override public void sort()
    {
        int smallest;
        int i, j;
        buildArray(boxPrefab, canvas);
        timer.Restart();

        queue.Enqueue(new QueueCommand(7, "Beginning Selection Sort!", 5));
        queue.Enqueue(new QueueCommand());
        queue.Enqueue(new QueueCommand());

        for(i = 0; i < size-1; i++)
        {
            smallest = i;
            queue.Enqueue(new QueueCommand((short)8, smallest, i, 0, "Index"));
            queue.Enqueue(new QueueCommand(3, smallest, (short)0, 5));
            queue.Enqueue(new QueueCommand());
            queue.Enqueue(new QueueCommand(7, "" + arr[i] + " is the current smallest"));
            queue.Enqueue(new QueueCommand());

            for(j = i+1; j < size; j++)
            {
                queue.Enqueue(new QueueCommand((short)8, j, i, 0, "Search"));
                queue.Enqueue(new QueueCommand(7, "Move Search forward and check the next element"));
                queue.Enqueue(new QueueCommand());
                if(compare(j, smallest, 0) && arr[j] < arr[smallest])
                {
                    decompare(j, smallest, 0, 5, 0);
                    smallest = j;
                    queue.Enqueue(new QueueCommand(7, "" + arr[smallest] + " is the new smallest element"));
                    queue.Enqueue(new QueueCommand());
                }
                else
                {
                    decompare(j, smallest, 0, 0, 5);
                    queue.Enqueue(new QueueCommand(7, "" + arr[j] + " is greater than our current smallest. Keep our current smallest."));
                    queue.Enqueue(new QueueCommand());
                    queue.Enqueue(new QueueCommand());
                }
                queue.Enqueue(new QueueCommand((short)8, j, i, 0, "Search"));
            }

            queue.Enqueue(new QueueCommand(7, "Reached the end of the array. " + arr[smallest] + " is the smallest element."));
            queue.Enqueue(new QueueCommand());
            queue.Enqueue(new QueueCommand());

            queue.Enqueue(new QueueCommand(7, "Swap our smallest element into index " + i));
            queue.Enqueue(new QueueCommand());
            queue.Enqueue(new QueueCommand());

            swap(smallest, i);
            queue.Enqueue(new QueueCommand(3, smallest, (short)0, 0));
            queue.Enqueue(new QueueCommand(3, i, (short)0, 2));
            queue.Enqueue(new QueueCommand());
            queue.Enqueue(new QueueCommand((short)8, i, i, 0, "Search"));

            queue.Enqueue(new QueueCommand(7, "Index " + i + " has been sorted"));
            queue.Enqueue(new QueueCommand());
            //queue.Enqueue(new short[] {1, (short)i, (short)smallest, 0});
            //queue.Enqueue(new short[] { 2, (short)i, 2, 0 });
        }
        queue.Enqueue(new QueueCommand(3, size - 1, (short)0, 2));
        queue.Enqueue(new QueueCommand(7, "There is only one index left so it is sorted"));
        queue.Enqueue(new QueueCommand());

        timer.Stop();
        stopTime = timer.ElapsedMilliseconds;
    }

    override public void extendCommands(QueueCommand q)
    {
        throw new NotImplementedException();
    }
}
