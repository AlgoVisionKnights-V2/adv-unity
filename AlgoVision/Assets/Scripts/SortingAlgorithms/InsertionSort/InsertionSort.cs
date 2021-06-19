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
        queue.Enqueue(new QueueCommand(7, "Index 0 is a one element array, and is therefore sorted."));
        queue.Enqueue(new QueueCommand(3, 0, (short)0, 5));
        queue.Enqueue(new QueueCommand());
        queue.Enqueue(new QueueCommand(3, 0, (short)0, 2));
        queue.Enqueue(new QueueCommand());


        
        
        for(i = 1; i < size; i++)
        {
            queue.Enqueue(new QueueCommand(7, "Selecting our next insertion index."));
            queue.Enqueue(new QueueCommand(3, i, (short)0, 5));
            queue.Enqueue(new QueueCommand((short)8, i, i, 0, "Insert"));
            queue.Enqueue(new QueueCommand());
            queue.Enqueue(new QueueCommand());
            queue.Enqueue(new QueueCommand(7, "Pull elements out of our " + (i+1) + " index array and sort them, moving from left to right"));
            queue.Enqueue(new QueueCommand());
            queue.Enqueue(new QueueCommand());
            
            for(j = i-1; j >= 0; j--)
            {
                if(compare(j, j+1, 0) && arr[j] > arr[j+1])
                {
                    queue.Enqueue(new QueueCommand(7, "" + arr[j].ToString() + " is greater than our Insert. Scooch " + arr[j].ToString() + " to the right"));
                    queue.Enqueue(new QueueCommand());
                    queue.Enqueue(new QueueCommand());
                    swap(j + 1, j);

                    queue.Enqueue(new QueueCommand((short)8, j + 1, i, 0, "Insert"));
                    queue.Enqueue(new QueueCommand((short)8, j, i, 0, "Insert"));
                    queue.Enqueue(new QueueCommand(3, j, (short)0, 5));
                    queue.Enqueue(new QueueCommand(3, j + 1, (short)0, 2));
                }
                else
                {
                    decompare(j, j+1, 0, 2, 5);
                    queue.Enqueue(new QueueCommand(7, "" + arr[j].ToString() + " is less than our Insert. Insert is in its sorted spot"));
                    //queue.Enqueue(new QueueCommand((short)8, i, i, 0, "Insert"));
                    queue.Enqueue(new QueueCommand());
                    queue.Enqueue(new QueueCommand());

                    break;
                }
                decompare(j, j+1, 0, 5, 2);
                //queue.Enqueue(new QueueCommand((short)8, j, i, 0, "Insert"));
                queue.Enqueue(new QueueCommand());

            }
            queue.Enqueue(new QueueCommand(7, "Indices 0 through " + i + " are in sorted order"));
            queue.Enqueue(new QueueCommand());
            queue.Enqueue(new QueueCommand((short)8, j+1, i, 0, "Insert"));
            queue.Enqueue(new QueueCommand(3, j + 1, (short)0, 2));
            queue.Enqueue(new QueueCommand());

        }
        queue.Enqueue(new QueueCommand(6, 0, size - 1, 0, 2));

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
