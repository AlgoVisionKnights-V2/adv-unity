using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System;
public class InsertionSort : SortingAlgorithm1
{
    [SerializeField] GameObject boxPrefab;
    [SerializeField] public GameObject canvas;
    
    private Boolean isPlay;

    void Start()
    {
        canvas = GameObject.Find("Canvas");
    }


    // Start is called before the first frame update
    override public void sort()
    {
        buildArray(boxPrefab, canvas);
        timer.Restart();
        int i,j;

        queue.Enqueue(new QueueCommand());
        queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "Index 0 is a one element array, and is therefore sorted."));
        queue.Enqueue(new QueueCommand(Commands.COLOR_ONE, 0, Array.MAIN, Colors.YELLOW));
        queue.Enqueue(new QueueCommand());
        queue.Enqueue(new QueueCommand(Commands.COLOR_ONE, 0, Array.MAIN, Colors.GREEN));
        queue.Enqueue(new QueueCommand());


        
        
        for(i = 1; i < size; i++)
        {
            queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "Selecting our next insertion index."));
            queue.Enqueue(new QueueCommand(Commands.COLOR_ONE, i, Array.MAIN, Colors.YELLOW));
            queue.Enqueue(new QueueCommand(Commands.TOGGLE_ARROW, i, i, Array.MAIN, "Insert"));
            queue.Enqueue(new QueueCommand());
            queue.Enqueue(new QueueCommand());
            queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "Pull elements out of our " + (i+1) + " index array and sort them, moving from left to right"));
            queue.Enqueue(new QueueCommand());
            queue.Enqueue(new QueueCommand());
            
            for(j = i-1; j >= 0; j--)
            {
                if(compare(j, j+1, Array.MAIN) && arr[j] > arr[j+1])
                {
                    queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "" + arr[j].ToString() + " is greater than our Insert. Scooch " + arr[j].ToString() + " to the right"));
                    queue.Enqueue(new QueueCommand());
                    queue.Enqueue(new QueueCommand());
                    swap(j + 1, j);

                    queue.Enqueue(new QueueCommand(Commands.TOGGLE_ARROW, j + 1, i, Array.MAIN, "Insert"));
                    queue.Enqueue(new QueueCommand(Commands.TOGGLE_ARROW, j, i, Array.MAIN, "Insert"));
                    queue.Enqueue(new QueueCommand(Commands.COLOR_ONE, j, Array.MAIN, Colors.YELLOW));
                    queue.Enqueue(new QueueCommand(Commands.COLOR_ONE, j + 1, Array.MAIN, Colors.GREEN));
                }
                else
                {
                    decompare(j, j+1, Array.MAIN, Colors.GREEN, Colors.YELLOW);
                    queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "" + arr[j].ToString() + " is less than our Insert. Insert is in its sorted spot"));
                    queue.Enqueue(new QueueCommand());
                    queue.Enqueue(new QueueCommand());

                    break;
                }
                decompare(j, j+1, Array.MAIN, Colors.YELLOW, Colors.GREEN);
                queue.Enqueue(new QueueCommand());

            }
            queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "Indices 0 through " + i + " are in sorted order"));
            queue.Enqueue(new QueueCommand());
            queue.Enqueue(new QueueCommand(Commands.TOGGLE_ARROW, j+1, i, Array.MAIN, "Insert"));
            queue.Enqueue(new QueueCommand(Commands.COLOR_ONE, j + 1, Array.MAIN, Colors.GREEN));
            queue.Enqueue(new QueueCommand());

        }
        queue.Enqueue(new QueueCommand(Commands.COLOR_ALL, 0, size - 1, Array.MAIN, Colors.GREEN));

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
        SceneManager.LoadScene("InsertionSortScene");
    }

    override public void extendCommands(QueueCommand q){
        throw new NotImplementedException();
    }
}
