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
            p.Enqueue(new queueCommand(Commands.COLOR_ONE, i, Colors.BLUE, ""));
            p.Enqueue(new queueCommand(Commands.WAIT, 0, 0,"Made node " + inttree[i]));
        }
    }

    public class queueCommand
    {
        public Algorithm.Commands commandID;
        public int arg1, arg2;
        public Algorithm.Colors colorID;
        public string message;

        public queueCommand(Commands cID, int a1, int a2, string mess)
        {
            this.commandID = cID;
            this.arg1 = a1;
            this.arg2 = a2;
            this.message = mess;
        }

        public queueCommand(Commands cID, int a1, Colors a2, string mess)
        {
            this.commandID = cID;
            this.arg1 = a1;
            this.colorID = a2;
            this.message = mess;
        }
        public queueCommand(Commands cID, int a1, int a2, Colors c)
        {
            this.commandID = cID;
            this.arg1 = a1;
            this.arg2 = a2;
            this.colorID = c;
            this.message = "";
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
                    Ycoords[j] = 1.3f * y - 3.5f;
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
                    Ycoords[j] = 1.3f * y - 3.5f;
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
        p.Enqueue(new queueCommand(Commands.WAIT, 0, 0, "Beginning Heapify Process."));
        heapify();
        p.Enqueue(new queueCommand(Commands.WAIT, 0, 0, "Array has been Heapified!"));

        for (int i = size-1; i > 0; i--)
        {
            p.Enqueue(new queueCommand(Commands.WAIT, 0, 0, "Swapping the top element of the heap with the lowest element,"));
            swap(0, i);
            p.Enqueue(new queueCommand(Commands.WAIT, 0, 0, "Removing the lowest element from the heap."));
            p.Enqueue(new queueCommand(Commands.DELETE_HEAP_NODE, i, 0, ""));
            p.Enqueue(new queueCommand(Commands.COLOR_ONE, i, Colors.GREEN, ""));

            if(i > 1)
            {
                p.Enqueue(new queueCommand(Commands.WAIT, 0, 0, "Array is no longer in a heap. Percolating the top node down."));
                Percolate(i);
                p.Enqueue(new queueCommand(Commands.WAIT, 0, 0, "The Heap has been restored."));
            }
        }
        p.Enqueue(new queueCommand(Commands.WAIT, 0, 0, "Removing the last element from the heap"));

        p.Enqueue(new queueCommand(Commands.DELETE_HEAP_NODE, 0, 0, ""));
        p.Enqueue(new queueCommand(Commands.COLOR_ONE, 0, Colors.GREEN, ""));

        p.Enqueue(new queueCommand(Commands.WAIT, 0, 0, "Heapsort is completed!"));
    }

    private void Percolate(int bound)
    {
        int left, right, parent = 0;

        while(parent < bound)
        {
            left = leftCI(parent);
            right = rightCI(parent);

            if (right < bound)
            {
                if(compare(left, right) && inttree[left] < inttree[right]) // if the right child is greater
                {
                    p.Enqueue(new queueCommand(Commands.WAIT, 0, 0, inttree[right] + " is the biggest child of " + inttree[parent]));
                    uncompare(left, right);

                    if (compare(parent, right) && inttree[right] > inttree[parent])
                    {
                        p.Enqueue(new queueCommand(Commands.WAIT, 0, 0, inttree[right] + " is bigger than " + inttree[parent]));
                        swap(right, parent);
                        uncompare(parent, right);
                        parent = right;
                    }
                    else
                    {
                        p.Enqueue(new queueCommand(Commands.WAIT, 0, 0, inttree[right] + " is less than " + inttree[parent]));
                        uncompare(right, parent);
                        //p.Enqueue(new queueCommand(Commands.WAIT, 0, 0, "The heap has been restored."));
                        return;
                    }
                }
                else // if the left child is greater
                {
                    p.Enqueue(new queueCommand(Commands.WAIT, 0, 0, inttree[left] + " is the biggest child of " + inttree[parent]));
                    uncompare(left, right);

                    if (compare(parent, left) && inttree[left] > inttree[parent])
                    {
                        p.Enqueue(new queueCommand(Commands.WAIT, 0, 0, inttree[left] + " is bigger than " + inttree[parent]));
                        swap(left, parent);
                        uncompare(parent, left);
                        parent = left;
                    }
                    else
                    {
                        p.Enqueue(new queueCommand(Commands.WAIT, 0, 0, inttree[left] + " is less than " + inttree[parent]));
                        uncompare(left, parent);
                        //p.Enqueue(new queueCommand(Commands.WAIT, 0, 0, "The heap has been restored."));
                        return; 
                    }
                }
            }
            else if (left < bound)
            {
                p.Enqueue(new queueCommand(Commands.WAIT, 0, 0, inttree[left] + " is the only child of " + inttree[parent]));
                if (compare(parent, left) && inttree[left] > inttree[parent])
                {
                    p.Enqueue(new queueCommand(Commands.WAIT, 0, 0, inttree[left] + " is bigger than " + inttree[parent]));
                    swap(left, parent);
                    uncompare(parent, left);
                    parent = left;
                }
                else
                {
                    p.Enqueue(new queueCommand(Commands.WAIT, 0, 0, inttree[left] + " is less than " + inttree[parent]));
                    uncompare(left, parent);
                    //p.Enqueue(new queueCommand(Commands.WAIT, 0, 0, "The heap has been restored."));
                    return;
                }
            }
            else return;
        }
    }

    public void heapify()
    {
        for(int i = 1; i < size; i++)
        {
            int child = i;
            int parent = parentI(child);
            p.Enqueue(new queueCommand(Commands.WAIT, 0, 0, " "));

            while (parent >= 0 && inttree[child] > inttree[parent] && compare(child, parent))
            {
                p.Enqueue(new queueCommand(Commands.WAIT, 0, 0, inttree[child] + " is greater than " + inttree[parent]));
                swap(child, parent);
                uncompare(child, parent);

                child = parent;
                parent = parentI(child);
            }

            if (parent >= 0 && child >= 0 && inttree[child] <= inttree[parent] && compare(parent, child))
            {
                p.Enqueue(new queueCommand(Commands.WAIT, 0, 0, inttree[child] + " is less than " + inttree[parent]));
                uncompare(child, parent);
            }
            
        }
    }

    private void swap(int i, int j)
    {
        int temp = inttree[i];
        inttree[i] = inttree[j];
        inttree[j] = temp;

        p.Enqueue(new queueCommand(Commands.SWAP, i, j, ""));
        p.Enqueue(new queueCommand(Commands.WAIT, 0, 0, "Swapping " + inttree[j] + " and " + inttree[i]));
    }

    private bool compare(int i, int j)
    {
        p.Enqueue(new queueCommand(Commands.COLOR_TWO, i, j, Colors.RED));
        p.Enqueue(new queueCommand(Commands.COMPARE, i, j, ""));
        p.Enqueue(new queueCommand(Commands.WAIT, 0, 0, "Comparing " + inttree[i] + " to " + inttree[j]));

        return true;
    }

    private void uncompare(int i, int j)
    {
        p.Enqueue(new queueCommand(Commands.COLOR_TWO, i, j, Colors.BLUE));
    }

    public IEnumerator readQueue()
    {
        int swaps = 0;
        int compares = 0;
        GameObject canvas = GameObject.Find("Canvas");
        while(p.Count != 0)
        {
            queueCommand instr = p.Dequeue();

            if(instr.message != "" && instr.message != null)
            {
                canvas.transform.GetChild(5).GetComponent<TMP_Text>().text = instr.message;
            }

            canvas.transform.GetChild(12).GetChild(0).GetComponent<TMP_Text>().text = ("Compares: " + compares.ToString());
            canvas.transform.GetChild(12).GetChild(1).GetComponent<TMP_Text>().text = ("Swaps: " + swaps.ToString());

            switch (instr.commandID)
            {
                case Commands.WAIT:
                
                    yield return new WaitForSeconds(this.time);
                    break;
                

                case Commands.MAKE_HEAP_NODE: // agr1 value, arg2 index
                
                    vizHeap[instr.arg2] = new HeapNode(instr.arg1, instr.arg2, SpherePrefab);
                    break;
                

                case Commands.SWAP: // arg1 = parent, arg2 = child
                    swaps++;

                    int parentValue = vizArray[instr.arg1].value;
                    int childValue = vizArray[instr.arg2].value;

                    vizHeap[instr.arg1].updateText(childValue);
                    vizHeap[instr.arg2].updateText(parentValue);

                    vizArray[instr.arg1].updateText(childValue);
                    vizArray[instr.arg2].updateText(parentValue);

                    break;
                

                case Commands.DELETE_HEAP_NODE: // arg1 = index, arg2 = null
                
                    Destroy(vizHeap[instr.arg1].o);
                    Destroy(vizHeap[instr.arg1].parentEdge);
                    vizHeap[instr.arg1] = null;
                    break;

                case Commands.COLOR_ONE: // arg1 = index, colorID = color
                    if(vizHeap[instr.arg1] != null)
                    {
                        switch(instr.colorID)
                        {
                            case Colors.WHITE:
                                vizHeap[instr.arg1].o.GetComponent<Renderer>().material.color = Color.white;
                                break;

                            case Colors.RED:
                                var red = new Color(1f, .2f, .361f, 1);
                                vizHeap[instr.arg1].o.GetComponent<Renderer>().material.color = red;
                                break;

                            case Colors.GREEN:
                                var green = new Color(0.533f, 0.671f, 0.459f);
                                vizHeap[instr.arg1].o.GetComponent<Renderer>().material.color = green;
                                break;

                            case Colors.BLUE:
                                float frac = (float)(Math.Ceiling(Math.Log(instr.arg1 + 1.1, 2)) / (Math.Log(size, 2) + 1));
                                vizHeap[instr.arg1].o.GetComponent<Renderer>().material.color = new Color(frac, frac, 1.0f);
                                break;
                        }
                    }

                    switch(instr.colorID)
                    {
                        case Colors.WHITE:
                            vizArray[instr.arg1].o.GetComponent<Renderer>().material.color = Color.white;
                            break;

                        case Colors.RED:
                            var red = new Color(1f, .2f, .361f, 1);
                            vizArray[instr.arg1].o.GetComponent<Renderer>().material.color = red;
                            break;

                        case Colors.GREEN:
                            var green = new Color(0.533f, 0.671f, 0.459f);
                            vizArray[instr.arg1].o.GetComponent<Renderer>().material.color = green;
                            break;
                        case Colors.BLUE:
                            float frac = (float)(Math.Ceiling(Math.Log(instr.arg1 + 1.1, 2)) / (Math.Log(size, 2) + 1));
                            vizArray[instr.arg1].o.GetComponent<Renderer>().material.color = new Color(frac, frac, 1.0f);
                            break;
                    }

                    break;

                case Commands.COLOR_TWO: // arg1 = index1, arg2 = index2, colorID = color
                    if (vizHeap[instr.arg1] != null)
                    {
                        switch (instr.colorID)
                        {
                            case Colors.WHITE:
                                vizHeap[instr.arg1].o.GetComponent<Renderer>().material.color = Color.white;
                                break;

                            case Colors.RED:
                                var red = new Color(1f, .2f, .361f, 1);
                                vizHeap[instr.arg1].o.GetComponent<Renderer>().material.color = red;
                                break;

                            case Colors.GREEN:
                                var green = new Color(0.533f, 0.671f, 0.459f);
                                vizHeap[instr.arg1].o.GetComponent<Renderer>().material.color = green;
                                break;

                            case Colors.BLUE:
                                float frac = (float)(Math.Ceiling(Math.Log(instr.arg1 + 1.1, 2)) / (Math.Log(size, 2) + 1));
                                vizHeap[instr.arg1].o.GetComponent<Renderer>().material.color = new Color(frac, frac, 1.0f);
                                break;
                        }
                    }

                    if (vizHeap[instr.arg2] != null)
                    {
                        switch (instr.colorID)
                        {
                            case Colors.WHITE:
                                vizHeap[instr.arg2].o.GetComponent<Renderer>().material.color = Color.white;
                                break;

                            case Colors.RED:
                                var red = new Color(1f, .2f, .361f, 1);
                                vizHeap[instr.arg2].o.GetComponent<Renderer>().material.color = red;
                                break;

                            case Colors.GREEN:
                                var green = new Color(0.533f, 0.671f, 0.459f);
                                vizHeap[instr.arg2].o.GetComponent<Renderer>().material.color = green;
                                break;

                            case Colors.BLUE:
                                float frac = (float)(Math.Ceiling(Math.Log(instr.arg2 + 1.1, 2)) / (Math.Log(size, 2) + 1));
                                vizHeap[instr.arg2].o.GetComponent<Renderer>().material.color = new Color(frac, frac, 1.0f);
                                break;
                        }
                    }

                    switch (instr.colorID)
                    {
                        case Colors.WHITE:
                            vizArray[instr.arg1].o.GetComponent<Renderer>().material.color = Color.white;
                            vizArray[instr.arg2].o.GetComponent<Renderer>().material.color = Color.white;
                            break;

                        case Colors.RED:
                            var red = new Color(1f, .2f, .361f, 1);
                            vizArray[instr.arg1].o.GetComponent<Renderer>().material.color = red;
                            vizArray[instr.arg2].o.GetComponent<Renderer>().material.color = red;
                            break;

                        case Colors.GREEN:
                            var green = new Color(0.533f, 0.671f, 0.459f);
                            vizArray[instr.arg1].o.GetComponent<Renderer>().material.color = green;
                            vizArray[instr.arg2].o.GetComponent<Renderer>().material.color = green;
                            break;

                        case Colors.BLUE:
                            float frac = (float)(Math.Ceiling(Math.Log(instr.arg1 + 1.1, 2)) / (Math.Log(size, 2) + 1));
                            float frac2 = (float)(Math.Ceiling(Math.Log(instr.arg2 + 1.1, 2)) / (Math.Log(size, 2) + 1));
                            vizArray[instr.arg1].o.GetComponent<Renderer>().material.color = new Color(frac, frac, 1.0f);
                            vizArray[instr.arg2].o.GetComponent<Renderer>().material.color = new Color(frac2, frac2, 1.0f);
                            break;
                    }

                    break;

                case Commands.COMPARE:
                    compares++;
                    break;
               

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
