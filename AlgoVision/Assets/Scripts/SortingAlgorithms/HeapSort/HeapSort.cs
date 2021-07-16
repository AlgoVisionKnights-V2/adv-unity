using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System;
using TMPro;
using Random = System.Random;
public class HeapSort : Algorithm
{
    [SerializeField] GameObject boxPrefab;
    [SerializeField] GameObject SpherePrefab;
    [SerializeField] public GameObject canvas;
    protected int size;
    public Queue<queueCommand> p;
    protected int[] inttree;
    public ArrayNode[] vizArray;
    public HeapNode[] vizHeap;
    protected static float[] Xcoords;
    protected static float[] Ycoords;

    public Random r = new Random();

    public HeapSort(GameObject boxPrefab, GameObject SpherePrefab, int size)
    {
        this.size = size;
        this.boxPrefab = boxPrefab;
        this.SpherePrefab = SpherePrefab;
        this.p = new Queue<queueCommand>();

        inttree = new int[size];
        vizArray = new ArrayNode[size];
        vizHeap = new HeapNode[size];
        Xcoords = new float[size];
        Ycoords = new float[size];

        setCoords();

        for(int i = 0; i < size; i++)
        {
            inttree[i] = i;
        }

        for(int i = 0; i < size; i++)
        {
            int hold  =  r.Next(i,size);
            int temp = inttree[hold];
            inttree[hold] = inttree[i];
            inttree[i] = temp;
        }

        for(int i = 0; i<size; i++)
        {
            vizArray[i] = new ArrayNode(inttree[i], i, boxPrefab, size);
            
            p.Enqueue(new queueCommand(Commands.MAKE_HEAP_NODE, inttree[i], i, ""));
            p.Enqueue(new queueCommand(Commands.WAIT, 0, 0,"Made node " + inttree[i]));
        }
    }

    public class queueCommand
    {
        public Algorithm.Commands commandID;
        public int arg1, arg2;
        public string message;

        public queueCommand(Commands cID, int a1, int a2, string mess)
        {
            this.commandID = cID;
            this.arg1 = a1;
            this.arg2 = a2;
            this.message = mess;
        }
    }
    public class ArrayNode
    {
        public GameObject o;
        public int value;

        public ArrayNode(int value, int index, GameObject boxPrefab, int size)
        {
            this.o = GameObject.Instantiate(boxPrefab);
            
            if(size == 21)
            {
                this.o.transform.position = new Vector3( (-1*((float)(size)-1)/2 + (float)index) *1.5f, -9, 0);
            }
            else
            {
                this.o.transform.position = new Vector3( (-1*((float)(size)-1)/2 + (float)index) *1.5f, -7, 0);
            }
            

            updateText(value);
        }

        public void updateText(int value)
        {
            this.value = value;

            this.o.GetComponentInChildren<TextMeshPro>().text = value.ToString();
        }

    }

    public class HeapNode
    {
        public int value;
        public GameObject o;
        public LineRenderer parentEdge;

        public HeapNode(int value, int index, GameObject SpherePrefab)
        {
            this.o = GameObject.Instantiate(SpherePrefab);

            this.o.transform.position = new Vector3( Xcoords[index], Ycoords[index], 0);

            if(index != 0)
            {
                this.parentEdge = new GameObject("Line").AddComponent(typeof(LineRenderer)) as LineRenderer;
                this.parentEdge.GetComponent<LineRenderer>().material.color = Color.white;
                this.parentEdge.GetComponent<LineRenderer>().startWidth = .1f;
                this.parentEdge.GetComponent<LineRenderer>().endWidth = .1f;
                this.parentEdge.GetComponent<LineRenderer>().positionCount = 2;
                this.parentEdge.GetComponent<LineRenderer>().useWorldSpace = true;
                this.parentEdge.SetPosition(0, new Vector3(Xcoords[index], Ycoords[index], 0)); //x,y and z position of the starting point of the line
                this.parentEdge.SetPosition(1, new Vector3(Xcoords[parentI(index)], Ycoords[parentI(index)], 0));
            }

            updateText(value);
        }
        public void updateText(int value)
        {
            this.value = value;

            this.o.GetComponentInChildren<TextMeshPro>().text = value.ToString();
        }
    }
    int leftCI(int i)
    {
        return 2 * i + 1; 
    }

    int rightCI(int i)
    {
        return 2 * i + 2; 
    }
    static int parentI(int i)
    {
        if(i % 2 == 0)
        {
            return (i - 2) / 2;
        }
        return (i - 1) / 2;
    }
    public void setCoords()
    {
        int treeDepth = (int)Math.Floor((float)(Math.Log(size, 2))+1);

        if (treeDepth % 2 == 0) // if the tree depth is even
        {
            for (int i = 0; i < treeDepth; i++)
            {
                float y = (float)(treeDepth - 1) / (float)2 - (float)i;
                int n = -1 * (int)(Math.Pow(2, i) - 1);
                int d = (int)(Math.Pow(2, i + 1));

                for (int j = (int)Math.Pow(2, i) - 1; j < size; j++)
                {
                    float x = (float)n / 3.1f * (float)Xcoords.Length / (float)d;
                    n = n + 2;
                    
                    Xcoords[j] = 3.1f * x;
                    Ycoords[j] = 3 * y;
                }
            }
        }
        else // if the tree depth is odd
        {
            for (int i = 0; i < treeDepth; i++)
            {
                float y = (float)(treeDepth - 1) / (float)2 - (float)i;
                int n = -1 * (int)(Math.Pow(2, i) - 1);
                int d = (int)(Math.Pow(2, i + 1));

                for (int j = (int)Math.Pow(2, i) - 1; j < size; j++)
                {
                    float x = (float)n / 3.1f * (float)Xcoords.Length / (float)d;
                    n = n + 2;

                    Xcoords[j] = 3.1f*x;
                    Ycoords[j] = 3 * y;
                }
            }
        }
    }

    void Start()
    {
        canvas = GameObject.Find("Canvas");
    }

    public void sort()
    {
        heapify();

    }

    public void heapify()
    {
        for(int i = 1; i < size; i++)
        {
            int child = i;
            int parent = parentI(child);
            while(parent >= 0 && inttree[child] > inttree[parent])
            {
                int temp = inttree[parent];
                inttree[parent] = inttree[child];
                inttree[child] = temp;

                p.Enqueue(new queueCommand (Commands.SWAP, parent, child, ""));
                p.Enqueue(new queueCommand(Commands.WAIT,0,0,"SWAPPED"));

                child = parent;
                parent = parentI(child);
            }
        }
    }

    public IEnumerator readQueue()
    {
        GameObject canvas = GameObject.Find("Canvas");
        while(p.Count != 0)
        {
            queueCommand instr = p.Dequeue();

            if(instr.message != "" && instr.message != null)
            {
                canvas.transform.GetChild(5).GetComponent<TMP_Text>().text = instr.message;
            }

            switch(instr.commandID)
            {
                case Commands.WAIT:
                {
                    yield return new WaitForSeconds(this.time);
                    break;
                }

                case Commands.MAKE_HEAP_NODE: // agr1 value, arg2 index
                {
                    vizHeap[instr.arg2] = new HeapNode(instr.arg1, instr.arg2, SpherePrefab);
                    break;
                }

                case Commands.SWAP: // arg1 = parent, arg2 = child
                {
                    int parentValue = vizArray[instr.arg1].value;
                    int childValue = vizArray[instr.arg2].value;

                    vizHeap[instr.arg1].updateText(childValue);
                    vizHeap[instr.arg2].updateText(parentValue);

                    vizArray[instr.arg1].updateText(childValue);
                    vizArray[instr.arg2].updateText(parentValue);

                    break;
                }

            }
        }
    }
    
    // protected void buildArray(GameObject boxPrefab, GameObject SpherePrefab){
    //     int i;
    //     this.canvas = canvas;
    //     showText = canvas.transform.GetChild(5).GetComponent<TMP_Text>();

    //     for(i = 0; i < size; i++){
    //         arr[i] = i;
    //     }
    //     shuffle();
    //     for(i = 0; i < size; i ++){
    //         array[i] = new ArrayIndex(arr[i], i, boxPrefab);
    //     }

    // }
}
