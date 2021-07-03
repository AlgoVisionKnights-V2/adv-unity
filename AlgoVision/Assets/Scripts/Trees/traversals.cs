using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System;
using System.Linq;
using System.Threading;
using Random = System.Random;

public class traversals : Algorithm
{
    protected int treeDepth; // lowest level of tree
    public int size;
    protected Queue<TravCommand> q = new Queue<TravCommand>();
    protected Random r = new Random();
    protected TravNode[] Nodetree;
    protected int depthLimit = 8;
    protected int[] inttree;
    protected static float[] Xcoords;
    protected static float[] Ycoords;
    [SerializeField] public GameObject canvas;
    [SerializeField] GameObject spherePrefab;
    public traversals(int size, GameObject spherePrefab)
    {
        this.size = size;
        this.spherePrefab = spherePrefab;
        inttree = new int[(int)Math.Pow(2, treeDepth) - 1]; // initializes the array where the keys are stored in the Trav tree
        Nodetree = null;

        for (int i = 0; i < inttree.Length; i++)
        {
            inttree[i] = -1; // if a node is null, it's key is -1
        }
    }

    protected class TravNode // class used to make node for visualization
    {
        public GameObject o;
        public int value, I;
        public LineRenderer parentEdge;

        public TravNode(int value, int I)
        {
            this.value = value;
            this.I = I;
        }

        public void updateCoords()
        {
            this.o.transform.position = new Vector3(Xcoords[this.I], Ycoords[this.I], 0);

        }
    }

    protected class TravCommand // class to hold commands for the visualizer
    {
        public short commandId;
        public int arg1, arg2;
        public string message;

        public TravCommand(short commandId, int a1, int a2, string m)
        {
            this.commandId = commandId;
            this.arg1 = a1;
            this.arg2 = a2;
            this.message = m;
        }
    }

    void Start()
    {
        canvas = GameObject.Find("Canvas");
    }

    public void printOrder(int order)
    {
        insertRandom(15);

        switch(order)
        {
            case 0: //preorder

                q.Enqueue(new TravCommand(-1, 0, 0, "Beginning Preorder Traversal."));
                q.Enqueue(new TravCommand(-1, 0, 0, "Beginning Preorder Traversal."));
                q.Enqueue(new TravCommand(-1, 0, 0, "Starting with root node."));

                preorderPrint(0);

                break;

            case 1: //inorder

                q.Enqueue(new TravCommand(-1, 0, 0, "Beginning Inorder Traversal."));
                q.Enqueue(new TravCommand(-1, 0, 0, "Beginning Inorder Traversal."));
                q.Enqueue(new TravCommand(-1, 0, 0, "Starting with root node."));

                inorderPrint(0);

                break;

            case 2: // postorder

                q.Enqueue(new TravCommand(-1, 0, 0, "Beginning Postorder Traversal."));
                q.Enqueue(new TravCommand(-1, 0, 0, "Beginning Postorder Traversal."));
                q.Enqueue(new TravCommand(-1, 0, 0, "Starting with root node."));

                postorderPrint(0);

                break;

            case 3: // breath-first



                break;
        }
    }

    public void preorderPrint(int I)
    {
        if (I >= inttree.Length || inttree[I] == -1)
        {
            q.Enqueue(new TravCommand(-1, 0, 0, "Node is null, returning to " + inttree[parentI(I)] + "."));
            return;
        }

        q.Enqueue(new TravCommand(2, I, 1, ""));
        q.Enqueue(new TravCommand(-1, 0, 0, "Print the current node: " + inttree[I] + "."));
        q.Enqueue(new TravCommand(12, I, inttree[I], ""));
        q.Enqueue(new TravCommand(-1, 0, 0, "Continue down " + inttree[I] + "'s left subtree."));
        q.Enqueue(new TravCommand(2, I, 3, ""));
        
        preorderPrint(leftCI(I));

        q.Enqueue(new TravCommand(2, I, 1, ""));
        q.Enqueue(new TravCommand(-1, 0, 0, inttree[I] + "'s left subtree is complete, continuing down right subtree."));
        q.Enqueue(new TravCommand(2, I, 3, ""));

        preorderPrint(rightCI(I));

        q.Enqueue(new TravCommand(2, I, 1, ""));

        if (I != 0)
        {
            q.Enqueue(new TravCommand(-1, 0, 0, inttree[I] + "'s right subtree is complete, returning to " +inttree[parentI(I)] + "."));
        }
        else
        {
            q.Enqueue(new TravCommand(-1, 0, 0, inttree[I] + "'s right subtree is complete, preorder print is complete!"));
        }
        q.Enqueue(new TravCommand(2, I, 4, ""));
    }

    void inorderPrint(int I)
    {
        if (I >= inttree.Length || inttree[I] == -1)
        {
            q.Enqueue(new TravCommand(-1, 0, 0, "Node is null, returning to " + inttree[parentI(I)] + "."));
            return;
        }

        q.Enqueue(new TravCommand(2, I, 1, ""));
        q.Enqueue(new TravCommand(-1, 0, 0, "Continue down " + inttree[I] + "'s left subtree."));
        q.Enqueue(new TravCommand(2, I, 3, ""));

        inorderPrint(leftCI(I));

        q.Enqueue(new TravCommand(2, I, 1, ""));
        q.Enqueue(new TravCommand(-1, 0, 0, inttree[I] + "'s left subtree is complete."));
        q.Enqueue(new TravCommand(-1, 0, 0, "Print the current node: " + inttree[I] + "."));
        q.Enqueue(new TravCommand(12, I, inttree[I], ""));
        q.Enqueue(new TravCommand(-1, 0, 0, "Continue down " + inttree[I] + "'s right subtree."));
        q.Enqueue(new TravCommand(2, I, 3, ""));

        inorderPrint(rightCI(I));

        q.Enqueue(new TravCommand(2, I, 1, ""));

        if (I != 0)
        {
            q.Enqueue(new TravCommand(-1, 0, 0, inttree[I] + "'s right subtree is complete, returning to " + inttree[parentI(I)] + "."));
        }
        else
        {
            q.Enqueue(new TravCommand(-1, 0, 0, inttree[I] + "'s right subtree is complete, inorder print is complete!"));
        }
        q.Enqueue(new TravCommand(2, I, 4, ""));
    }

    void postorderPrint(int I)
    {
        if (I >= inttree.Length || inttree[I] == -1)
        {
            q.Enqueue(new TravCommand(-1, 0, 0, "Node is null, returning to " + inttree[parentI(I)] + "."));
            return;
        }

        q.Enqueue(new TravCommand(2, I, 1, ""));
        q.Enqueue(new TravCommand(-1, 0, 0, "Continue down " + inttree[I] + "'s left subtree."));
        q.Enqueue(new TravCommand(2, I, 3, ""));

        postorderPrint(leftCI(I));

        q.Enqueue(new TravCommand(2, I, 1, ""));
        q.Enqueue(new TravCommand(-1, 0, 0, inttree[I] + "'s left subtree is complete, continuing down right subtree."));
        q.Enqueue(new TravCommand(2, I, 3, ""));

        postorderPrint(rightCI(I));

        q.Enqueue(new TravCommand(2, I, 1, ""));

        q.Enqueue(new TravCommand(-1, 0, 0, inttree[I] + "'s right subtree is complete, print the current node: " + inttree[I] + "."));
        q.Enqueue(new TravCommand(12, I, inttree[I], ""));

        if (I != 0)
        {
            q.Enqueue(new TravCommand(-1, 0, 0, inttree[I] + " is complete, returning to " + inttree[parentI(I)] + "."));
        }
        else
        {
            q.Enqueue(new TravCommand(-1, 0, 0, inttree[I] + " is complete, postorder print is complete!"));
        }
        q.Enqueue(new TravCommand(2, I, 4, ""));
    }

    public void insertRandom(int keyAmount)
    {
        size = keyAmount; // number of keys to be inserted
        int[] keys; // where the keys are stored in insertion order
        string order = ""; // for debugging purposes. stores the keys in order inserted
        treeDepth = 2; // the depth of the tree is initialized. can/will be updated by program as the tree is added to as needed.

        inttree = new int[(int)Math.Pow(2, treeDepth) - 1]; // initializes the array where the keys are stored in the Trav tree

        for (int i = 0; i < inttree.Length; i++)
        {
            inttree[i] = -1; // if a node is null, it's key is -1
        }

        keys = new int[size];
        for (int i = 0; i < size; i++)
        {
            int ins = r.Next(1, 1000);
            keys[i] = ins;
            order = order + ins.ToString() + ", "; // adds the inserted number to the string for printing
        }

        Debug.Log(order); // prints the keys in order of insertion
        

        for (int i = 0; i < keys.Length; i++) // insertion of keys
        {
            while(theoreticalDepth(0, 0, keys[i]) > depthLimit)
            {
                keys[i] = r.Next(1, 1000);
            }

            q.Enqueue(new TravCommand(10, keys[i], 0, ""));
            insert(keys[i], 0);
        }

        printIntTree();
        Nodetree = new TravNode[inttree.Length * 2 + 1];
        Xcoords = new float[Nodetree.Length];
        Ycoords = new float[Nodetree.Length];


        //StartCoroutine(readQueue(0.0f));
    }

    public void customInserts(int[] keys)
    {
        
        foreach(int i in keys)
        {
            if(i < 0)
            {
                q.Enqueue(new TravCommand(10, -i, 1, ""));
                delete(0, (i * -1));
            }
            else
            {
                if(theoreticalDepth(0,0,i) > depthLimit)
                {
                    
                }
                else
                {
                    q.Enqueue(new TravCommand(10, i, 0, ""));
                    insert(i, 0);
                }
                
            }
        }

        printIntTree();

        if (Nodetree == null)
        {
            Nodetree = new TravNode[inttree.Length * 2 + 1];
            for(int n = 0; n < Nodetree.Length; n++)
            {
                Nodetree[n] = null;
            }
            Xcoords = new float[Nodetree.Length];
            Ycoords = new float[Nodetree.Length];
            //setCoords();
        }
        else
        {
            TravNode[] tempTree = new TravNode[inttree.Length * 2 + 1];
            float[] tempX = new float[tempTree.Length];
            
            for(int i = 0; i < Nodetree.Length; i++)
            {
                tempTree[i] = Nodetree[i];
                tempX[i] = Xcoords[i];
                
            }
            for(int i = Nodetree.Length; i < tempTree.Length; i++)
            {
                tempTree[i] = null;
                tempX[i] = 0;
            }
            Nodetree = tempTree;
            Xcoords = tempX;
            //Xcoords = new float[Nodetree.Length];



            Ycoords = new float[Nodetree.Length];
            
        }
    }

    public int theoreticalDepth(int i, int depth, int key)
    {
        if(i >= inttree.Length || inttree[i] == -1)
        {
            return depth;
        }

        if(inttree[i] == key)
        {
            return 100;
        }

        if(inttree[i] > key)
        {
            return theoreticalDepth(leftCI(i), depth + 1, key);
        }

        return theoreticalDepth(rightCI(i), depth + 1, key);
    }

    void insert(int key, int I)
    {
        if (I >= inttree.Length) // if the Index needed is outside the array, increase the depth
        {
            updateDepth();
        }
        if (inttree[I] == -1) // if the Index is null (-1)
        {
            inttree[I] = key; 

            q.Enqueue(new TravCommand(0, I, key, "")); // make new node
            
            if (I != 0) // if the new node isn't at index 0 (the root of the tree) draw a line to the parent node 
            {
                q.Enqueue(new TravCommand(1, I, parentI(I), ""));
            }
            return;
        }

        q.Enqueue(new TravCommand(2, I, 1, "")); // null node not found, highlight current node to show insertion path
        if (inttree[I] == key)
        {
            q.Enqueue(new TravCommand(2, I, 0, ""));
            return;
        }

        if (inttree[I] > key) // go left
        {
            q.Enqueue(new TravCommand(2, I, 10, ""));
            if(leftCI(I) < inttree.Length && inttree[leftCI(I)] != -1 )
            {
                q.Enqueue(new TravCommand(5, leftCI(I), 1, ""));
            }
            insert(key, leftCI(I));
        }
        else // go right
        {
            q.Enqueue(new TravCommand(2, I, 10, ""));
            if (rightCI(I) < inttree.Length && inttree[rightCI(I)] != -1)
            {
                q.Enqueue(new TravCommand(5, rightCI(I), 1, ""));
            }

            insert(key, rightCI(I));
        }
        if (inttree[leftCI(I)] != -1)
        {
            q.Enqueue(new TravCommand(5, leftCI(I), 0, ""));
        }
        if (inttree[rightCI(I)] != -1)
        {
            q.Enqueue(new TravCommand(5, rightCI(I), 0, ""));
        }
        
        q.Enqueue(new TravCommand(8, I, 0, ""));
        q.Enqueue(new TravCommand(2, I, 0, ""));

        return;
    }

    void updateDepth()
    {
        treeDepth++;
        int[] newtree = new int[inttree.Length * 2 + 1];

        for (int i = 0; i < inttree.Length; i++)
        {
            newtree[i] = inttree[i];
        }

        for (int i = inttree.Length; i < newtree.Length; i++)
        {
            newtree[i] = -1;
        }

        inttree = newtree;
    }

    void setCoords(int d)
    {
        for (int i = 0; i < d; i++)
        {
            float y = (float)(d - 1) / (float)2 - (float)i;

            for (int j = (int)Math.Pow(2, i) - 1; j < (int)Math.Pow(2, i + 1) - 1; j++)
            {
                Ycoords[j] = 2 * y;
            }
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

    void swap(int i, int d)
    {
        inttree[d] = inttree[i];
        inttree[i] = -1;
        //Debug.Log("Moved " + inttree[d] + " from " + i + " to " + d);
    }

    void shiftUp(int i, int d)
    {
        if(!(i < inttree.Length) || inttree[i] == -1)
        {
            return;
        }

        Queue<int[]> shifts = new Queue<int[]>();

        shifts.Enqueue(new int[] {i, d});

        while(shifts.Count != 0)
        {
            int[] dudes = shifts.Dequeue();

            swap(dudes[0], dudes[1]);
            q.Enqueue(new TravCommand(3, dudes[0], dudes[1], ""));

            if (leftCI(dudes[0]) < inttree.Length && inttree[leftCI(dudes[0])] != -1)
            {
                shifts.Enqueue(new int[] {leftCI(dudes[0]), leftCI(dudes[1]) });
            }
            if (rightCI(dudes[0]) < inttree.Length && inttree[rightCI(dudes[0])] != -1)
            {
                shifts.Enqueue(new int[] { rightCI(dudes[0]), rightCI(dudes[1]) });
            }
        }

        
    }

    void shiftDownLeft(int i, int d)
    {
        if (!(i < inttree.Length) || inttree[i] == -1)
        {
            return;
        }

        while(d >= inttree.Length)
        {
            updateDepth();
        }


        shiftDownLeft(leftCI(i), leftCI(d));
        shiftDownLeft(rightCI(i), rightCI(d));

        swap(i, d);

        

        q.Enqueue(new TravCommand(3, i, d, ""));

    }

    void shiftDownRight(int i, int d)
    {
        if (!(i < inttree.Length) || inttree[i] == -1)
        {
            return;
        }

        while (d >= inttree.Length)
        {
            updateDepth();
        }

        shiftDownRight(rightCI(i), rightCI(d));
        shiftDownRight(leftCI(i), leftCI(d));

        swap(i, d);



        q.Enqueue(new TravCommand(3, i, d, ""));

    }

    void movetree(int i, int d)
    {
        if(d > i)
        {
            if(d % 2 == 0)
            {
                shiftDownRight(i, d);
            }
            else { shiftDownLeft(i, d); }
            
        }
        else
        {
            shiftUp(i, d);
        }
    }

    private int max(int a, int b) => a > b ? a : b;

    void delete(int I, int key)
    {
        if(inttree[I] == -1) // key was not found
        {
            return;
        }
        if (inttree[I] == key)
        {
            q.Enqueue(new TravCommand(2, I, 10, ""));
            int tempI = findLeftmostNode(rightCI(I));

            if(tempI == -1) // right subtree not found
            {
                
                if(leftCI(I) >= inttree.Length || inttree[leftCI(I)] == -1) // if not left subtree found
                {
                    q.Enqueue(new TravCommand(9, I, 0, ""));
                    inttree[I] = -1;
                    return;
                }
                
                q.Enqueue(new TravCommand(9, I, 0, ""));
                inttree[I] = 0;
                movetree(leftCI(I), I);
                q.Enqueue(new TravCommand(11, 0, 0, ""));
                return;
            }
            q.Enqueue(new TravCommand(9, I, 0, ""));
            q.Enqueue(new TravCommand(3, tempI, I, ""));
            inttree[I] = inttree[tempI];


            if(rightCI(tempI) >= inttree.Length || inttree[rightCI(tempI)] == -1)
            {
                inttree[tempI] = -1;
            }
            else
            {
                movetree(rightCI(tempI), tempI);
            }

            q.Enqueue(new TravCommand(11, 0, 0, ""));
            tempI = parentI(tempI);

            while(tempI >= I)
            {
                
                q.Enqueue(new TravCommand(2, tempI, 0, ""));
                q.Enqueue(new TravCommand(8, tempI, 0, ""));
                tempI = parentI(tempI);
            }
            return;
        }
        else
        {
            if (key < inttree[I])
            {
                q.Enqueue(new TravCommand(2, I, 10, ""));
                if (leftCI(I) < inttree.Length && inttree[leftCI(I)] != -1)
                {
                    q.Enqueue(new TravCommand(5, leftCI(I), 1, ""));
                }
                delete(leftCI(I), key);
            }
            else
            {
                q.Enqueue(new TravCommand(2, I, 10, ""));
                if (rightCI(I) < inttree.Length && inttree[rightCI(I)] != -1)
                {
                    q.Enqueue(new TravCommand(5, rightCI(I), 1, ""));
                }

                delete(rightCI(I), key);
            }
        }

        if (inttree[leftCI(I)] != -1)
        {
            q.Enqueue(new TravCommand(5, leftCI(I), 0, ""));
        }
        if (inttree[rightCI(I)] != -1)
        {
            q.Enqueue(new TravCommand(5, rightCI(I), 0, ""));
        }
        
        q.Enqueue(new TravCommand(8, I, 0, ""));
        q.Enqueue(new TravCommand(2, I, 0, ""));

        return;
    }

    int findLeftmostNode(int I)
    {
        if(I >= inttree.Length || inttree[I] == -1) // subtree not found
        {
            return -1;
        }
        if(leftCI(I) >= inttree.Length || inttree[leftCI(I)] == -1) // leftmost node found
        {
            q.Enqueue(new TravCommand(2, I, 1, ""));
            return I;
        }
        q.Enqueue(new TravCommand(2, I, 10, "")); // color node black
        q.Enqueue(new TravCommand(5, leftCI(I), 1, "")); // color branch red

        int p = findLeftmostNode(leftCI(I)); // search deeper

        q.Enqueue(new TravCommand(5, leftCI(I), 0, "")); // make node and branch white again.
        q.Enqueue(new TravCommand(2, I, 0, ""));

        return p;
    }

    void printIntTree()
    {
        for (int i = 0; i < treeDepth; i++)
        {
            String output = "";

            for (int j = (int)Math.Pow(2, i) - 1; j < (int)Math.Pow(2, i + 1) - 1; j++)
            {
                if(inttree[j] == -1)
                {
                    output = output + "n, ";
                }
                else
                {
                    output = output + inttree[j].ToString() + ", ";
                }
                
            }

            Debug.Log("Depth " + i + "\t" + output);
        }

    }

    void colorTree(int i, int c)
    {
        if( !(i < inttree.Length)  || Nodetree[i] == null)
        {
            return;
        }
        switch (c)
        {
            case 0:
                Nodetree[i].o.GetComponent<Renderer>().material.color = Color.white;
                break;

            case 1:
                Nodetree[i].o.GetComponent<Renderer>().material.color = Color.red;
                break;

            case 2:
                Nodetree[i].o.GetComponent<Renderer>().material.color = new Color(0.945f, 0.518f, 0.031f, 1.0f);
                break;

            case 3:
                Nodetree[i].o.GetComponent<Renderer>().material.color = Color.yellow;
                break;

            case 4:
                Nodetree[i].o.GetComponent<Renderer>().material.color = Color.green;
                break;

            case 5:
                Nodetree[i].o.GetComponent<Renderer>().material.color = Color.blue;
                break;

            case 6:
                Nodetree[i].o.GetComponent<Renderer>().material.color = Color.magenta;
                    break;

            default:
                Nodetree[i].o.GetComponent<Renderer>().material.color = Color.black;
                    break;

        }

        colorTree(leftCI(i), c);
        colorTree(rightCI(i), c);
    }

    void fixCoords()
    {
        int nodes = 0;
        int[] nodeArray;
        List<int> nodeList = new List<int>();

        for (int i = 0; i < Nodetree.Length; i++)
        {
            if (Nodetree[i] != null)
            {
                nodeList.Add(Nodetree[i].value);
                nodes++;
            }
        }

        nodeArray = nodeList.ToArray();
        nodeArray = insertionSort(nodeArray);
        float coeff = 1f;
        float middle;
        if (nodes % 2 == 0) // even nodes
        {
            middle = (float)nodes / 2f + 0.5f;
        }
        else // odd nodes
        {
            middle = ((float)nodes - 1f) / 2f;
        }

        for (int i = 0; i < nodes; i++)
        {
            Xcoords[grabNodetreeIndex(nodeArray[i])] = coeff * ((float)i - middle);
        }

        setCoords(getMaxDepth(0));

        for (int i = 0; i < Nodetree.Length; i++)
        {
            if (Nodetree[i] != null)
            {
                Nodetree[i].updateCoords();
                if (Nodetree[i].parentEdge != null)
                {
                    Nodetree[i].parentEdge.SetPosition(0, new Vector3(Xcoords[i], Ycoords[i], 0));
                    Nodetree[i].parentEdge.SetPosition(1, new Vector3(Xcoords[parentI(i)], Ycoords[parentI(i)], 0));
                }
            }
        }

    }

    int getMaxDepth(int index) // this is a product of drunk Mick, if this comment is not gone, it has not been cleaned up by sober Mick
    {
        if(Nodetree[index] == null)
        {
            return 0;
        }
        return max(getMaxDepth(leftCI(index)), getMaxDepth(rightCI(index))) + 1;
    }

    int grabNodetreeIndex(int k)
    {
        int i = 0;
        while(Nodetree[i] != null)
        {
            if(Nodetree[i].value == k)
            {
                return i;
            }
            if(Nodetree[i].value > k)
            {
                i = leftCI(i);
            }
            else
            {
                i = rightCI(i);
            }
        }
        return -1;
    }

    int[] insertionSort(int[] Array)
    {
        int i, j, k;

        for (i = 1; i < Array.Length; i++)
        {
            k = Array[i];

            for (j = i - 1; j >= 0; j--)
            {
                if (k < Array[j])
                {
                    Array[j + 1] = Array[j];
                }
                else
                    break;
            }
            Array[j + 1] = k;
        }

        return Array;
    }

    public IEnumerator readQueue()
    {
        GameObject canvas = GameObject.Find("Canvas");

        while(q.Count != 0)
        {
            TravCommand instr = q.Dequeue();
            //Debug.Log(instr.commandId + "\t" + instr.arg1 + "\t" + instr.arg2 + "\t" + instr.message);
            if (instr.message != "" && instr.message != null)
            {
                canvas.transform.GetChild(5).GetComponent<TMP_Text>().text = instr.message;
                //Debug.Log(instr.message);
            }

            
            switch (instr.commandId)
            {
                case -1:
                    yield return new WaitForSeconds(this.time);
                    break;

                case 0: // create a node, (0, index, value)
                    Nodetree[instr.arg1] = new TravNode(instr.arg2, instr.arg1);
                    Nodetree[instr.arg1].o = GameObject.Instantiate(spherePrefab);
                    var t = Nodetree[instr.arg1].o.GetComponentInChildren<TextMeshPro>();
                    t.text = Nodetree[instr.arg1].value.ToString();
                    Nodetree[instr.arg1].o.transform.GetChild(1).GetComponent<TMP_Text>().text = "";
                    Nodetree[instr.arg1].o.transform.GetChild(2).GetComponent<TMP_Text>().text = "";
                    Nodetree[instr.arg1].parentEdge = null;

                    fixCoords();

                    //Nodetree[instr.arg1].updateCoords();
                    break;

                case 1: // link two nodes, (1, child, parent)
                    Nodetree[instr.arg1].parentEdge = new GameObject("Line").AddComponent(typeof(LineRenderer)) as LineRenderer;
                    Nodetree[instr.arg1].parentEdge.GetComponent<LineRenderer>().material.color = Color.white;
                    Nodetree[instr.arg1].parentEdge.GetComponent<LineRenderer>().startWidth = .1f;
                    Nodetree[instr.arg1].parentEdge.GetComponent<LineRenderer>().endWidth = .1f;
                    Nodetree[instr.arg1].parentEdge.GetComponent<LineRenderer>().positionCount = 2;
                    Nodetree[instr.arg1].parentEdge.GetComponent<LineRenderer>().useWorldSpace = true;
                    Nodetree[instr.arg1].parentEdge.SetPosition(0, new Vector3(Xcoords[instr.arg1], Ycoords[instr.arg1], 0)); //x,y and z position of the starting point of the line
                    Nodetree[instr.arg1].parentEdge.SetPosition(1, new Vector3(Xcoords[instr.arg2], Ycoords[instr.arg2], 0));
                    break;

                case 2: // color node (2, node, color), 0 = white, 1 = red, 2 = orange, 3 = yellow, 4 = green, 5 = blue, 6 = purble
                    if(Nodetree[instr.arg1] != null)
                    {
                        switch (instr.arg2)
                        {
                            case 0:
                                Nodetree[instr.arg1].o.GetComponent<Renderer>().material.color = Color.white;
                                break;

                            case 1:
                                Nodetree[instr.arg1].o.GetComponent<Renderer>().material.color = Color.red;
                                break;

                            case 2:
                                Nodetree[instr.arg1].o.GetComponent<Renderer>().material.color = new Color(0.945f, 0.518f, 0.031f, 1.0f);
                                break;

                            case 3:
                                Nodetree[instr.arg1].o.GetComponent<Renderer>().material.color = Color.yellow;
                                break;

                            case 4:
                                Nodetree[instr.arg1].o.GetComponent<Renderer>().material.color = Color.green;
                                break;

                            case 5:
                                Nodetree[instr.arg1].o.GetComponent<Renderer>().material.color = Color.blue;
                                break;

                            case 6:
                                Nodetree[instr.arg1].o.GetComponent<Renderer>().material.color = Color.magenta;
                                break;

                            default:
                                Nodetree[instr.arg1].o.GetComponent<Renderer>().material.color = Color.black;
                                break;

                        }
                    }
                    

                    break;
                    

                case 3: // move node (3, node, destination)
                    Nodetree[instr.arg2] = new TravNode(Nodetree[instr.arg1].value, instr.arg2);
                    Nodetree[instr.arg2].o = GameObject.Instantiate(spherePrefab);
                    var T = Nodetree[instr.arg2].o.GetComponentInChildren<TextMeshPro>();
                    T.text = Nodetree[instr.arg2].value.ToString();
                    Nodetree[instr.arg2].o.GetComponent<Renderer>().material.color = Nodetree[instr.arg1].o.GetComponent<Renderer>().material.color;
                    Nodetree[instr.arg2].updateCoords();
                    Nodetree[instr.arg2].o.transform.GetChild(1).GetComponent<TMP_Text>().text = "";
                    Nodetree[instr.arg2].o.transform.GetChild(2).GetComponent<TMP_Text>().text = "";
                    Destroy(Nodetree[instr.arg1].o);
                    Destroy(Nodetree[instr.arg1].parentEdge);
                    Nodetree[instr.arg1] = null;

                    if (instr.arg2 != 0)
                    {
                        Nodetree[instr.arg2].parentEdge = new GameObject("Line").AddComponent(typeof(LineRenderer)) as LineRenderer;
                        Nodetree[instr.arg2].parentEdge.GetComponent<LineRenderer>().material.color = Color.white;
                        Nodetree[instr.arg2].parentEdge.GetComponent<LineRenderer>().startWidth = .1f;
                        Nodetree[instr.arg2].parentEdge.GetComponent<LineRenderer>().endWidth = .1f;
                        Nodetree[instr.arg2].parentEdge.GetComponent<LineRenderer>().positionCount = 2;
                        Nodetree[instr.arg2].parentEdge.GetComponent<LineRenderer>().useWorldSpace = true;
                        Nodetree[instr.arg2].parentEdge.SetPosition(0, new Vector3(Xcoords[instr.arg2], Ycoords[instr.arg2], 0)); 
                        Nodetree[instr.arg2].parentEdge.SetPosition(1, new Vector3(Xcoords[parentI(instr.arg2)], Ycoords[parentI(instr.arg2)], 0));
                    }

                    //yield return new WaitForSeconds(time);
                    break;

                case 4: // color tree(4, index, color)
                    colorTree(instr.arg1, instr.arg2);
                    break;

                case 5: // color branch(5, index, color)
                     if(Nodetree[instr.arg1] != null)
                    {
                        switch (instr.arg2)
                        {
                            case 0:
                                Nodetree[instr.arg1].parentEdge.GetComponent<LineRenderer>().material.color = Color.white;
                                break;

                            case 1:
                                Nodetree[instr.arg1].parentEdge.GetComponent<LineRenderer>().material.color= Color.red;
                                break;

                            case 2:
                                Nodetree[instr.arg1].parentEdge.GetComponent<LineRenderer>().material.color = new Color(0.945f, 0.518f, 0.031f, 1.0f);
                                break;

                            case 3:
                                Nodetree[instr.arg1].parentEdge.GetComponent<LineRenderer>().material.color = Color.yellow;
                                break;

                            case 4:
                                Nodetree[instr.arg1].parentEdge.GetComponent<LineRenderer>().material.color= Color.green;
                                break;

                            case 5:
                                Nodetree[instr.arg1].parentEdge.GetComponent<LineRenderer>().material.color = Color.blue;
                                break;

                            case 6:
                                Nodetree[instr.arg1].parentEdge.GetComponent<LineRenderer>().material.color = Color.magenta;
                                break;

                            default:
                                Nodetree[instr.arg1].parentEdge.GetComponent<LineRenderer>().material.color = Color.black;
                                break;

                        }
                    }
                    break;
                case 6: // update balance on the left nodes. (6, index, value, "")
                
                    Nodetree[instr.arg1].o.transform.GetChild(1).GetComponent<TMP_Text>().text = "Left Depth: " + instr.arg2;
                    break;
                
                case 7: // update balance on the right nodes. (7, index, value, "")
                
                    Nodetree[instr.arg1].o.transform.GetChild(2).GetComponent<TMP_Text>().text = "Right Depth: " + instr.arg2;
                    break;
                
                case 8:// make balance invisable (8, index, null, "")
                
                    Nodetree[instr.arg1].o.transform.GetChild(1).GetComponent<TMP_Text>().text = "";
                    Nodetree[instr.arg1].o.transform.GetChild(2).GetComponent<TMP_Text>().text = "";
                    break;
                case 9: // delete node (9, index, null, "")

                    Destroy(Nodetree[instr.arg1].o);
                    Destroy(Nodetree[instr.arg1].parentEdge);
                    Nodetree[instr.arg1] = null;

                    //fixCoords();

                    break;
                case 10: // update board (10, key, insert/delete, "")

                    if (instr.arg2 == 0)
                    {
                        canvas.transform.GetChild(14).GetChild(1).GetComponent<TMP_Text>().text = "" + instr.arg1;
                        canvas.transform.GetChild(14).GetChild(0).GetComponent<TMP_Text>().text = "Inserting:";
                    }
                    else
                    {
                        canvas.transform.GetChild(14).GetChild(1).GetComponent<TMP_Text>().text = "" + instr.arg1;
                        canvas.transform.GetChild(14).GetChild(0).GetComponent<TMP_Text>().text = "Deleting:";
                    }
                    break;
                case 11: // update coords after delete (11, null, null, "")
                    fixCoords();
                    break;
                case 12: // add number to printField (12, index, value to add, "")
                    canvas.transform.GetChild(15).GetComponent<TMP_Text>().text += " " + instr.arg2.ToString();
                    break;

                default:
                    yield return new WaitForSeconds(this.time);
                    break;

                    
            }
        }
    }
}