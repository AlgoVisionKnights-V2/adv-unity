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

        queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "Beginning Selection Sort!", Colors.YELLOW));
        queue.Enqueue(new QueueCommand());
        queue.Enqueue(new QueueCommand());

        for(i = 0; i < size-1; i++)
        {
            smallest = i;
            queue.Enqueue(new QueueCommand(Commands.TOGGLE_ARROW, smallest, i, Array.MAIN, "Index"));
            queue.Enqueue(new QueueCommand(Commands.COLOR_ONE, smallest, Array.MAIN, Colors.YELLOW));
            queue.Enqueue(new QueueCommand());
            queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "" + arr[i] + " is the current smallest"));
            queue.Enqueue(new QueueCommand());

            for(j = i+1; j < size; j++)
            {
                queue.Enqueue(new QueueCommand(Commands.TOGGLE_ARROW, j, i, Array.MAIN, "Search"));
                queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "Move Search forward and check the next element"));
                queue.Enqueue(new QueueCommand());
                if(compare(j, smallest, Array.MAIN) && arr[j] < arr[smallest])
                {
                    decompare(j, smallest, Array.MAIN, Colors.YELLOW, Colors.WHITE);
                    smallest = j;
                    queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "" + arr[smallest] + " is the new smallest element"));
                    queue.Enqueue(new QueueCommand());
                }
                else
                {
                    decompare(j, smallest, Array.MAIN, Colors.WHITE, Colors.YELLOW);
                    queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "" + arr[j] + " is greater than our current smallest. Keep our current smallest."));
                    queue.Enqueue(new QueueCommand());
                    queue.Enqueue(new QueueCommand());
                }
                queue.Enqueue(new QueueCommand(Commands.TOGGLE_ARROW, j, i, Array.MAIN, "Search"));
            }

            queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "Reached the end of the array. " + arr[smallest] + " is the smallest element."));
            queue.Enqueue(new QueueCommand());
            queue.Enqueue(new QueueCommand());

            queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "Swap our smallest element into index " + i));
            queue.Enqueue(new QueueCommand());
            queue.Enqueue(new QueueCommand());

            swap(smallest, i);
            queue.Enqueue(new QueueCommand(Commands.COLOR_ONE, smallest, Array.MAIN, Colors.WHITE));
            queue.Enqueue(new QueueCommand(Commands.COLOR_ONE, i, Array.MAIN, Colors.GREEN));
            queue.Enqueue(new QueueCommand());
            queue.Enqueue(new QueueCommand(Commands.TOGGLE_ARROW, i, i, Array.MAIN, "Search"));

            queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "Index " + i + " has been sorted"));
            queue.Enqueue(new QueueCommand());
        }
        queue.Enqueue(new QueueCommand(Commands.COLOR_ONE, size - 1, Array.MAIN, Colors.GREEN));
        queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "There is only one index left so it is sorted"));
        queue.Enqueue(new QueueCommand());

        timer.Stop();
        stopTime = timer.ElapsedMilliseconds;
    }

    override public void extendCommands(QueueCommand q)
    {
        throw new NotImplementedException();
    }
}
