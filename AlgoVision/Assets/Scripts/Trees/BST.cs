using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System;
using System.Linq;
using System.Threading;
using Random = System.Random;

public class BST : Algorithm
{
    protected int treeDepth; // lowest level of tree
    public int size;
    protected Queue<BSTCommand> q = new Queue<BSTCommand>();
    protected Random r = new Random();
    protected BSTNode[] Nodetree;
    protected int depthLimit = 8;
    protected int[] inttree;
    protected static float[] Xcoords;
    protected static float[] Ycoords;
    [SerializeField] public GameObject canvas;
    [SerializeField] GameObject spherePrefab;
    public BST(int size, GameObject spherePrefab)
    {
        this.size = size;
        this.spherePrefab = spherePrefab;
        inttree = new int[(int)Math.Pow(2, treeDepth) - 1]; // initializes the array where the keys are stored in the BST tree
        Nodetree = null;

        for (int i = 0; i < inttree.Length; i++)
        {
            inttree[i] = -1; // if a node is null, its key is -1
        }
    }

    protected class BSTNode // class used to make node for visualization
    {
        public GameObject o;
        public int value, I;
        public LineRenderer parentEdge;

        public BSTNode(int value, int I)
        {
            this.value = value;
            this.I = I;
        }

        public void updateCoords()
        {
            this.o.transform.position = new Vector3(Xcoords[this.I], Ycoords[this.I], 0);

        }
    }

    protected class BSTCommand // class to hold commands for the visualizer
    {
        public Commands commandId;
        public int arg1, arg2;
        public string message;

        public BSTCommand(Commands commandId, int a1, int a2, string m)
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

    public void insertRandom(int keyAmount)
    {
        size = keyAmount; // number of keys to be inserted
        int[] keys; // where the keys are stored in insertion order
        string order = ""; // for debugging purposes. stores the keys in order inserted
        treeDepth = 2; // the depth of the tree is initialized. can/will be updated by program as the tree is added to as needed.

        inttree = new int[(int)Math.Pow(2, treeDepth) - 1]; // initializes the array where the keys are stored in the BST tree

        for (int i = 0; i < inttree.Length; i++)
        {
            inttree[i] = -1; // if a node is null, its key is -1
        }

        keys = new int[size];

        keys[0] = r.Next(keyAmount, 1000 - keyAmount - 1);

        for (int i = 1; i < size; i++)
        {
            int ins = r.Next(1, 1000);
            keys[i] = ins;
            order = order + ins.ToString() + ", "; // adds the inserted number to the string for printing
        }

        Debug.Log(order); // prints the keys in order of insertion
        q.Enqueue(new BSTCommand(Commands.WAIT,0,0,"Starting BST Insertion."));
        q.Enqueue(new BSTCommand(Commands.WAIT, 0, 0, "Starting BST Insertion."));

        for (int i = 0; i < keys.Length; i++) // insertion of keys
        {
            while(theoreticalDepth(0, 0, keys[i]) > depthLimit)
            {
                keys[i] = r.Next(1, 1000);
            }

            q.Enqueue(new BSTCommand(Commands.UPDATE_BOARD, keys[i], 0, ""));
            q.Enqueue(new BSTCommand(Commands.WAIT,0,0,("Inserting " + keys[i])));
            insert(keys[i], 0);
            q.Enqueue(new BSTCommand(Commands.WAIT,0,0,( keys[i] + " inserted!")));
        }

        printIntTree();
        Nodetree = new BSTNode[inttree.Length * 2 + 1];
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
                q.Enqueue(new BSTCommand(Commands.UPDATE_BOARD, -i, 1, ""));
                q.Enqueue(new BSTCommand(Commands.WAIT, 0, 0, "Deleting " + (i * -1)));
                delete(0, (i * -1));
            }
            else
            {
                if(theoreticalDepth(0,0,i) > depthLimit)
                {
                    q.Enqueue(new BSTCommand(Commands.WAIT, 0, 0, "Inserting " + i + " would result in a tree with a depth over the limit of " + depthLimit+1 + " , and will not be inserted."));
                }
                else
                {
                    q.Enqueue(new BSTCommand(Commands.UPDATE_BOARD, i, 0, ""));
                    q.Enqueue(new BSTCommand(Commands.WAIT, 0, 0, "Inserting " + i));
                    insert(i, 0);
                }
                
            }
        }
        q.Enqueue(new BSTCommand(Commands.WAIT, 0, 0, "Completed BST insertions"));

        printIntTree();

        if (Nodetree == null)
        {
            Nodetree = new BSTNode[inttree.Length * 2 + 1];
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
            BSTNode[] tempTree = new BSTNode[inttree.Length * 2 + 1];
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

            q.Enqueue(new BSTCommand(Commands.CREATE_NODE, I, key, ("Null node found, creating a new node with the value " + key))); // make new node
            
            if (I != 0) // if the new node isn't at index 0 (the root of the tree) draw a line to the parent node 
            {
                q.Enqueue(new BSTCommand(Commands.WAIT, 0, 0, ""));
                q.Enqueue(new BSTCommand(Commands.LINK_NODE, I, parentI(I), "Linking node to its new parent."));
            }
            q.Enqueue(new BSTCommand(Commands.WAIT, 0, 0, ""));
            return;
        }

        q.Enqueue(new BSTCommand(Commands.COLOR_NODE, I, 1, "Current node is not null, beginning comparison")); // null node not found, highlight current node to show insertion path
        q.Enqueue(new BSTCommand(Commands.WAIT, 0, 0, ""));
        if (inttree[I] == key)
        {
            q.Enqueue(new BSTCommand(Commands.WAIT, 0, 0, key + " is already in the array. exiting insertion."));
            q.Enqueue(new BSTCommand(Commands.COLOR_NODE, I, 0, ""));
            return;
        }

        if (inttree[I] > key) // go left
        {
            q.Enqueue(new BSTCommand(Commands.WAIT, 0, 0, ("Current Node: " + inttree[I] + " > Inserted Node: " + key)));
            
            q.Enqueue(new BSTCommand(Commands.WAIT, 0, 0, "Continue down left subtree."));
            q.Enqueue(new BSTCommand(Commands.COLOR_NODE, I, 10, ""));
            if(leftCI(I) < inttree.Length && inttree[leftCI(I)] != -1 )
            {
                q.Enqueue(new BSTCommand(Commands.COLOR_BRANCH, leftCI(I), 1, ""));
            }
            insert(key, leftCI(I));
        }
        else // go right
        {
            q.Enqueue(new BSTCommand(Commands.WAIT, 0, 0, ("Current Node: " + inttree[I] + " < Inserted Node: " + key)));
            
            q.Enqueue(new BSTCommand(Commands.WAIT, 0, 0, "Continue down right subtree."));
            q.Enqueue(new BSTCommand(Commands.COLOR_NODE, I, 10, ""));
            if (rightCI(I) < inttree.Length && inttree[rightCI(I)] != -1)
            {
                q.Enqueue(new BSTCommand(Commands.COLOR_BRANCH, rightCI(I), 1, ""));
            }

            insert(key, rightCI(I));
        }
        if (inttree[leftCI(I)] != -1)
        {
            q.Enqueue(new BSTCommand(Commands.COLOR_BRANCH, leftCI(I), 0, ""));
        }
        if (inttree[rightCI(I)] != -1)
        {
            q.Enqueue(new BSTCommand(Commands.COLOR_BRANCH, rightCI(I), 0, ""));
        }
        
        
        q.Enqueue(new BSTCommand(Commands.COLOR_NODE, I, 0, ""));

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
            q.Enqueue(new BSTCommand(Commands.MOVE_NODE, dudes[0], dudes[1], ""));

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

        

        q.Enqueue(new BSTCommand(Commands.MOVE_NODE, i, d, ""));

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



        q.Enqueue(new BSTCommand(Commands.MOVE_NODE, i, d, ""));

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
            q.Enqueue(new BSTCommand(Commands.WAIT,0,0,key + " was not found, exiting the tree."));
            return;
        }
        if (inttree[I] == key)
        {
            q.Enqueue(new BSTCommand(Commands.COLOR_NODE, I, 10, ""));
            q.Enqueue(new BSTCommand(Commands.WAIT, 0, 0, key + " has been found."));
            q.Enqueue(new BSTCommand(Commands.WAIT, 0, 0, "Finding leftmost node of right sub-tree"));
            int tempI = findLeftmostNode(rightCI(I));

            if(tempI == -1) // right subtree not found
            {
                
                if(leftCI(I) >= inttree.Length || inttree[leftCI(I)] == -1) // if not left subtree found
                {
                    q.Enqueue(new BSTCommand(Commands.WAIT, 0, 0, inttree[I] + " is a leaf node, removing without replacement."));
                    q.Enqueue(new BSTCommand(Commands.DELETE_NODE, I, 0, ""));
                    inttree[I] = -1;
                    return;
                }
                
                q.Enqueue(new BSTCommand(Commands.WAIT, 0, 0, "No right subtree found, moving left subtree instead."));
                q.Enqueue(new BSTCommand(Commands.DELETE_NODE, I, 0, ""));
                inttree[I] = 0;
                movetree(leftCI(I), I);
                q.Enqueue(new BSTCommand(Commands.UPDATE_COORDS, 0, 0, ""));
                return;
            }
            
            q.Enqueue(new BSTCommand(Commands.WAIT, 0, 0, "Found " + inttree[tempI] + ", moving to " + inttree[I]));
            q.Enqueue(new BSTCommand(Commands.DELETE_NODE, I, 0, ""));
            q.Enqueue(new BSTCommand(Commands.MOVE_NODE, tempI, I, ""));
            inttree[I] = inttree[tempI];


            if(rightCI(tempI) >= inttree.Length || inttree[rightCI(tempI)] == -1)
            {
                inttree[tempI] = -1;
            }
            else
            {
                movetree(rightCI(tempI), tempI);
            }

            q.Enqueue(new BSTCommand(Commands.UPDATE_COORDS, 0, 0, ""));
            tempI = parentI(tempI);

            while(tempI >= I)
            {
                
                q.Enqueue(new BSTCommand(Commands.COLOR_NODE, tempI, 0, ""));
                tempI = parentI(tempI);
            }
            return;
        }
        else
        {
            if (key < inttree[I])
            {
                q.Enqueue(new BSTCommand(Commands.WAIT, 0, 0, ("Current Node: " + inttree[I] + " > Deleting Node: " + key)));

                q.Enqueue(new BSTCommand(Commands.WAIT, 0, 0, "Continue down left subtree."));
                q.Enqueue(new BSTCommand(Commands.COLOR_NODE, I, 10, ""));
                if (leftCI(I) < inttree.Length && inttree[leftCI(I)] != -1)
                {
                    q.Enqueue(new BSTCommand(Commands.COLOR_BRANCH, leftCI(I), 1, ""));
                }
                delete(leftCI(I), key);
            }
            else
            {
                q.Enqueue(new BSTCommand(Commands.WAIT, 0, 0, ("Current Node: " + inttree[I] + " < Deleting Node: " + key)));

                q.Enqueue(new BSTCommand(Commands.WAIT, 0, 0, "Continue down right subtree."));
                q.Enqueue(new BSTCommand(Commands.COLOR_NODE, I, 10, ""));
                if (rightCI(I) < inttree.Length && inttree[rightCI(I)] != -1)
                {
                    q.Enqueue(new BSTCommand(Commands.COLOR_BRANCH, rightCI(I), 1, ""));
                }

                delete(rightCI(I), key);
            }
        }

        if (inttree[leftCI(I)] != -1)
        {
            q.Enqueue(new BSTCommand(Commands.COLOR_BRANCH, leftCI(I), 0, ""));
        }
        if (inttree[rightCI(I)] != -1)
        {
            q.Enqueue(new BSTCommand(Commands.COLOR_BRANCH, rightCI(I), 0, ""));
        }
        
        q.Enqueue(new BSTCommand(Commands.COLOR_NODE, I, 0, ""));

        return;
    }

    int findLeftmostNode(int I)
    {
        if(I >= inttree.Length || inttree[I] == -1) // subtree not found
        {
            q.Enqueue(new BSTCommand(Commands.WAIT, 0, 0, "No right subtree found."));
            return -1;
        }
        if(leftCI(I) >= inttree.Length || inttree[leftCI(I)] == -1) // leftmost node found
        {
            q.Enqueue(new BSTCommand(Commands.COLOR_NODE, I, 1, ""));
            q.Enqueue(new BSTCommand(Commands.WAIT, 0, 0, "Left most node found!"));
            return I;
        }
        q.Enqueue(new BSTCommand(Commands.COLOR_NODE, I, 10, "")); // color node black
        q.Enqueue(new BSTCommand(Commands.WAIT, 0, 0, ""));
        q.Enqueue(new BSTCommand(Commands.COLOR_BRANCH, leftCI(I), 1, "")); // color branch red

        int p = findLeftmostNode(leftCI(I)); // search deeper

        q.Enqueue(new BSTCommand(Commands.COLOR_BRANCH, leftCI(I), 0, "")); // make node and branch white again.
        q.Enqueue(new BSTCommand(Commands.COLOR_NODE, I, 0, ""));

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

    int getMaxDepth(int index) 
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
            BSTCommand instr = q.Dequeue();
            //Debug.Log(instr.commandId + "\t" + instr.arg1 + "\t" + instr.arg2 + "\t" + instr.message);
            if (instr.message != "" && instr.message != null)
            {
                canvas.transform.GetChild(5).GetComponent<TMP_Text>().text = instr.message;
                //Debug.Log(instr.message);
            }

            
            switch (instr.commandId)
            {
                case Commands.WAIT:
                    yield return new WaitForSeconds(this.time);
                    break;

                case Commands.CREATE_NODE: // create a node, (0, index, value)
                    Nodetree[instr.arg1] = new BSTNode(instr.arg2, instr.arg1);
                    Nodetree[instr.arg1].o = GameObject.Instantiate(spherePrefab);
                    var t = Nodetree[instr.arg1].o.GetComponentInChildren<TextMeshPro>();
                    t.text = Nodetree[instr.arg1].value.ToString();
                    Nodetree[instr.arg1].o.transform.GetChild(1).GetComponent<TMP_Text>().text = "";
                    Nodetree[instr.arg1].o.transform.GetChild(2).GetComponent<TMP_Text>().text = "";
                    Nodetree[instr.arg1].parentEdge = null;

                    fixCoords();

                    //Nodetree[instr.arg1].updateCoords();
                    break;

                case Commands.LINK_NODE: // link two nodes, (1, child, parent)
                    Nodetree[instr.arg1].parentEdge = new GameObject("Line").AddComponent(typeof(LineRenderer)) as LineRenderer;
                    Nodetree[instr.arg1].parentEdge.GetComponent<LineRenderer>().material.color = Color.white;
                    Nodetree[instr.arg1].parentEdge.GetComponent<LineRenderer>().startWidth = .1f;
                    Nodetree[instr.arg1].parentEdge.GetComponent<LineRenderer>().endWidth = .1f;
                    Nodetree[instr.arg1].parentEdge.GetComponent<LineRenderer>().positionCount = 2;
                    Nodetree[instr.arg1].parentEdge.GetComponent<LineRenderer>().useWorldSpace = true;
                    Nodetree[instr.arg1].parentEdge.SetPosition(0, new Vector3(Xcoords[instr.arg1], Ycoords[instr.arg1], 0)); //x,y and z position of the starting point of the line
                    Nodetree[instr.arg1].parentEdge.SetPosition(1, new Vector3(Xcoords[instr.arg2], Ycoords[instr.arg2], 0));
                    break;

                case Commands.COLOR_NODE: // color node (2, node, color), 0 = white, 1 = red, 2 = orange, 3 = yellow, 4 = green, 5 = blue, 6 = purble
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
                    

                case Commands.MOVE_NODE: // move node (3, node, destination)
                    Nodetree[instr.arg2] = new BSTNode(Nodetree[instr.arg1].value, instr.arg2);
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

                case Commands.COLOR_BRANCH: // color branch(5, index, color)
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

                case Commands.DELETE_NODE: // delete node (9, index, null, "")

                    Destroy(Nodetree[instr.arg1].o);
                    Destroy(Nodetree[instr.arg1].parentEdge);
                    Nodetree[instr.arg1] = null;

                    //fixCoords();

                    break;
                case Commands.UPDATE_BOARD: // update board (10, key, insert/delete, "")

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
                case Commands.UPDATE_COORDS: // update coords after delete (11, null, null, "")
                    fixCoords();
                    break;

                default:
                    yield return new WaitForSeconds(this.time);
                    break;

                    
            }
        }
    }
}