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
        public Commands commandId;
        public int arg1, arg2;
        public string message;

        public TravCommand(Commands commandId, int a1, int a2, string m)
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

                q.Enqueue(new TravCommand(Commands.WAIT, 0, 0, "Beginning Preorder Traversal."));
                q.Enqueue(new TravCommand(Commands.WAIT, 0, 0, "Beginning Preorder Traversal."));
                q.Enqueue(new TravCommand(Commands.WAIT, 0, 0, "Starting with root node."));

                preorderPrint(0);

                q.Enqueue(new TravCommand(Commands.WAIT, 0, 0, "Preorder Traversal Complete."));

                break;

            case 1: //inorder

                q.Enqueue(new TravCommand(Commands.WAIT, 0, 0, "Beginning Inorder Traversal."));
                q.Enqueue(new TravCommand(Commands.WAIT, 0, 0, "Beginning Inorder Traversal."));
                q.Enqueue(new TravCommand(Commands.WAIT, 0, 0, "Starting with root node."));

                inorderPrint(0);

                q.Enqueue(new TravCommand(Commands.WAIT, 0, 0, "Inorder Traversal Complete."));

                break;

            case 2: // postorder

                q.Enqueue(new TravCommand(Commands.WAIT, 0, 0, "Beginning Postorder Traversal."));
                q.Enqueue(new TravCommand(Commands.WAIT, 0, 0, "Beginning Postorder Traversal."));
                q.Enqueue(new TravCommand(Commands.WAIT, 0, 0, "Starting with root node."));

                postorderPrint(0);

                q.Enqueue(new TravCommand(Commands.WAIT, 0, 0, "Postorder Traversal Complete."));

                break;

            case 3: // breath-first

                q.Enqueue(new TravCommand(Commands.WAIT, 0, 0, "Beginning Breadth-First Traversal."));
                q.Enqueue(new TravCommand(Commands.WAIT, 0, 0, "Beginning Breadth-First Traversal."));
                q.Enqueue(new TravCommand(Commands.UPDATE_QUEUE_MESSAGE, inttree[0], 0, ""));
                q.Enqueue(new TravCommand(Commands.WAIT, 0, 0, "Starting with root node."));

                for(int i = 0; i < inttree.Length; i++)
                {
                    if(!isNull(i))
                    {
                        q.Enqueue(new TravCommand(Commands.COLOR_NODE, i, 1, ""));
                        q.Enqueue(new TravCommand(Commands.WAIT, 0, 0, "Print " + inttree[i] + "."));
                        q.Enqueue(new TravCommand(Commands.UPDATE_MESSAGE, i, inttree[i], ""));
                        q.Enqueue(new TravCommand(Commands.UPDATE_QUEUE_MESSAGE, inttree[i], 1, ""));

                        if (!isNull(leftCI(i)) || !isNull(rightCI(i)))
                        {
                            q.Enqueue(new TravCommand(Commands.WAIT, 0, 0, "Queue up " + inttree[i] + "'s children."));

                            if (!isNull(leftCI(i)))
                            {
                                q.Enqueue(new TravCommand(Commands.COLOR_NODE, leftCI(i), 3, ""));
                                q.Enqueue(new TravCommand(Commands.UPDATE_QUEUE_MESSAGE, inttree[leftCI(i)], 0, ""));
                            }
                            if (!isNull(rightCI(i)))
                            {
                                q.Enqueue(new TravCommand(Commands.COLOR_NODE, rightCI(i), 3, ""));
                                q.Enqueue(new TravCommand(Commands.UPDATE_QUEUE_MESSAGE, inttree[rightCI(i)], 0, ""));
                            }
                        }

                        q.Enqueue(new TravCommand(Commands.WAIT, 0, 0, "Finished with " + inttree[i] + "."));
                        q.Enqueue(new TravCommand(Commands.COLOR_NODE, i, 4, ""));
                    }
                }

                break;
        }

        q.Enqueue(new TravCommand(Commands.WAIT, 0, 0, "Traversal complete!"));
    }

    bool isNull(int i)
    {
        if(i >= inttree.Length || inttree[i] == -1)
        {
            return true;
        }

        return false;

    }

    void preorderPrint(int I)
    {
        if (I >= inttree.Length || inttree[I] == -1) // node is null
        {
            q.Enqueue(new TravCommand(Commands.WAIT, 0, 0, "Node is null, returning to " + inttree[parentI(I)] + "."));
            return;
        }

        q.Enqueue(new TravCommand(Commands.COLOR_NODE, I, 1, "")); // turn node red
        q.Enqueue(new TravCommand(Commands.WAIT, 0, 0, "Print the current node: " + inttree[I] + ".")); // pause
        q.Enqueue(new TravCommand(Commands.UPDATE_MESSAGE, I, inttree[I], "")); // print node key to print order
        q.Enqueue(new TravCommand(Commands.COLOR_NODE, I, 4, "")); // Color node green

        if(isNull(leftCI(I)) && isNull(rightCI(I)) ) // node has no subtrees
        {
            q.Enqueue(new TravCommand(Commands.WAIT, 0, 0, inttree[I] + " is a leaf node, returning to " + inttree[parentI(I)] + "."));
            return;
        }

        if(!isNull(leftCI(I))) // node has left subtree
        {
            q.Enqueue(new TravCommand(Commands.WAIT, 0, 0, "Continue down " + inttree[I] + "'s left subtree."));
            q.Enqueue(new TravCommand(Commands.COLOR_BRANCH, leftCI(I), 1, ""));
            preorderPrint(leftCI(I));
            q.Enqueue(new TravCommand(Commands.COLOR_BRANCH, leftCI(I), 0, ""));
            q.Enqueue(new TravCommand(Commands.WAIT, 0, 0, inttree[I] + "'s left subtree is complete."));
        }


        if (!isNull(rightCI(I))) // node has right subtree
        {
            q.Enqueue(new TravCommand(Commands.WAIT, 0, 0, "Continue down " + inttree[I] + "'s right subtree."));
            q.Enqueue(new TravCommand(Commands.COLOR_BRANCH, rightCI(I), 1, ""));
            preorderPrint(rightCI(I));
            q.Enqueue(new TravCommand(Commands.COLOR_BRANCH, rightCI(I), 0, ""));
            q.Enqueue(new TravCommand(Commands.WAIT, 0, 0, inttree[I] + "'s right subtree is complete."));
        }
        if (I != 0)
        {
            q.Enqueue(new TravCommand(Commands.WAIT, 0, 0, inttree[I] + " is complete, returning to " + inttree[parentI(I)] + "."));
        }
    }

    void inorderPrint(int I)
    {
        if (I >= inttree.Length || inttree[I] == -1) // node is null
        {
            q.Enqueue(new TravCommand(Commands.WAIT, 0, 0, "Node is null, returning to " + inttree[parentI(I)] + "."));
            return;
        }

        q.Enqueue(new TravCommand(Commands.COLOR_NODE, I, 1, "")); // turn node red
        

        if (isNull(leftCI(I)) && isNull(rightCI(I))) // node has no subtrees
        {
            q.Enqueue(new TravCommand(Commands.WAIT, 0, 0, "Print the current node: " + inttree[I] + ".")); // pause
            q.Enqueue(new TravCommand(Commands.UPDATE_MESSAGE, I, inttree[I], "")); // print node key to print order
            q.Enqueue(new TravCommand(Commands.COLOR_NODE, I, 4, "")); // Color node green
            q.Enqueue(new TravCommand(Commands.WAIT, 0, 0, inttree[I] + " is a leaf node, returning to " + inttree[parentI(I)] + "."));
            return;
        }

        if (!isNull(leftCI(I))) // node has left subtree
        {
            q.Enqueue(new TravCommand(Commands.WAIT, 0, 0, "Continue down " + inttree[I] + "'s left subtree."));
            q.Enqueue(new TravCommand(Commands.COLOR_NODE, I, 3, "")); // Color node yellow
            q.Enqueue(new TravCommand(Commands.COLOR_BRANCH, leftCI(I), 1, ""));
            inorderPrint(leftCI(I));
            q.Enqueue(new TravCommand(Commands.COLOR_BRANCH, leftCI(I), 0, ""));
            q.Enqueue(new TravCommand(Commands.COLOR_NODE, I, 1, "")); // Color node red
            q.Enqueue(new TravCommand(Commands.WAIT, 0, 0, inttree[I] + "'s left subtree is complete."));
        }

        q.Enqueue(new TravCommand(Commands.WAIT, 0, 0, "Print the current node: " + inttree[I] + ".")); // pause
        q.Enqueue(new TravCommand(Commands.UPDATE_MESSAGE, I, inttree[I], "")); // print node key to print order
        q.Enqueue(new TravCommand(Commands.COLOR_NODE, I, 4, "")); // Color node green

        if (!isNull(rightCI(I))) // node has right subtree
        {
            q.Enqueue(new TravCommand(Commands.WAIT, 0, 0, "Continue down " + inttree[I] + "'s right subtree."));
            q.Enqueue(new TravCommand(Commands.COLOR_BRANCH, rightCI(I), 1, ""));
            inorderPrint(rightCI(I));
            q.Enqueue(new TravCommand(Commands.COLOR_BRANCH, rightCI(I), 0, ""));
            q.Enqueue(new TravCommand(Commands.WAIT, 0, 0, inttree[I] + "'s right subtree is complete."));
        }
        if (I != 0)
        {
            q.Enqueue(new TravCommand(Commands.WAIT, 0, 0, inttree[I] + " is complete, returning to " + inttree[parentI(I)] + "."));
        }
    }

    void postorderPrint(int I)
    {
        if (I >= inttree.Length || inttree[I] == -1)
        {
            q.Enqueue(new TravCommand(Commands.WAIT, 0, 0, "Node is null, returning to " + inttree[parentI(I)] + "."));
            return;
        }

        q.Enqueue(new TravCommand(Commands.COLOR_NODE, I, 1, ""));

        if (isNull(leftCI(I)) && isNull(rightCI(I))) // node has no subtrees
        {
            q.Enqueue(new TravCommand(Commands.WAIT, 0, 0, "Print the current node: " + inttree[I] + ".")); // pause
            q.Enqueue(new TravCommand(Commands.UPDATE_MESSAGE, I, inttree[I], "")); // print node key to print order
            q.Enqueue(new TravCommand(Commands.COLOR_NODE, I, 4, "")); // Color node green
            q.Enqueue(new TravCommand(Commands.WAIT, 0, 0, inttree[I] + " is a leaf node, returning to " + inttree[parentI(I)] + "."));
            return;
        }

        if (!isNull(leftCI(I))) // node has left subtree
        {
            q.Enqueue(new TravCommand(Commands.WAIT, 0, 0, "Continue down " + inttree[I] + "'s left subtree."));
            q.Enqueue(new TravCommand(Commands.COLOR_NODE, I, 3, ""));
            q.Enqueue(new TravCommand(Commands.COLOR_BRANCH, leftCI(I), 1, ""));
            postorderPrint(leftCI(I));
            q.Enqueue(new TravCommand(Commands.COLOR_BRANCH, leftCI(I), 0, ""));
            q.Enqueue(new TravCommand(Commands.COLOR_NODE, I, 1, ""));
            q.Enqueue(new TravCommand(Commands.WAIT, 0, 0, inttree[I] + "'s left subtree is complete."));
        }

        if (!isNull(rightCI(I))) // node has right subtree
        {
            q.Enqueue(new TravCommand(Commands.WAIT, 0, 0, "Continue down " + inttree[I] + "'s right subtree."));
            q.Enqueue(new TravCommand(Commands.COLOR_NODE, I, 3, ""));
            q.Enqueue(new TravCommand(Commands.COLOR_BRANCH, rightCI(I), 1, ""));
            postorderPrint(rightCI(I));
            q.Enqueue(new TravCommand(Commands.COLOR_BRANCH, rightCI(I), 0, ""));
            q.Enqueue(new TravCommand(Commands.COLOR_NODE, I, 1, ""));
            q.Enqueue(new TravCommand(Commands.WAIT, 0, 0, inttree[I] + "'s right subtree is complete."));
        }

        q.Enqueue(new TravCommand(Commands.WAIT, 0, 0, "Print the current node: " + inttree[I] + "."));
        q.Enqueue(new TravCommand(Commands.UPDATE_MESSAGE, I, inttree[I], ""));
        q.Enqueue(new TravCommand(Commands.COLOR_NODE, I, 4, ""));

        if(I != 0)
        {
            q.Enqueue(new TravCommand(Commands.WAIT, 0, 0, inttree[I] + " is complete, returning to " + inttree[parentI(I)] + "."));
        }
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

        keys[0] = r.Next(keyAmount, 1000 - keyAmount - 1);

        for (int i = 1; i < size; i++)
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
            insert(keys[i], 0);
        }

        printIntTree();
        Nodetree = new TravNode[inttree.Length * 2 + 1];
        Xcoords = new float[Nodetree.Length];
        Ycoords = new float[Nodetree.Length];


        //StartCoroutine(readQueue(0.0f));
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

            q.Enqueue(new TravCommand(Commands.CREATE_NODE, I, key, "")); // make new node
            
            if (I != 0) // if the new node isn't at index 0 (the root of the tree) draw a line to the parent node 
            {
                q.Enqueue(new TravCommand(Commands.LINK_NODE, I, parentI(I), ""));
            }
            return;
        }

        q.Enqueue(new TravCommand(Commands.COLOR_NODE, I, 1, "")); // null node not found, highlight current node to show insertion path
        if (inttree[I] == key)
        {
            q.Enqueue(new TravCommand(Commands.COLOR_NODE, I, 0, ""));
            return;
        }

        if (inttree[I] > key) // go left
        {
            q.Enqueue(new TravCommand(Commands.COLOR_NODE, I, 10, ""));
            if(leftCI(I) < inttree.Length && inttree[leftCI(I)] != -1 )
            {
                q.Enqueue(new TravCommand(Commands.COLOR_BRANCH, leftCI(I), 1, ""));
            }
            insert(key, leftCI(I));
        }
        else // go right
        {
            q.Enqueue(new TravCommand(Commands.COLOR_NODE, I, 10, ""));
            if (rightCI(I) < inttree.Length && inttree[rightCI(I)] != -1)
            {
                q.Enqueue(new TravCommand(Commands.COLOR_BRANCH, rightCI(I), 1, ""));
            }

            insert(key, rightCI(I));
        }
        if (inttree[leftCI(I)] != -1)
        {
            q.Enqueue(new TravCommand(Commands.COLOR_BRANCH, leftCI(I), 0, ""));
        }
        if (inttree[rightCI(I)] != -1)
        {
            q.Enqueue(new TravCommand(Commands.COLOR_BRANCH, rightCI(I), 0, ""));
        }
        
        q.Enqueue(new TravCommand(Commands.COLOR_NODE, I, 0, ""));

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

    private int max(int a, int b) => a > b ? a : b;

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
                case Commands.WAIT:
                    yield return new WaitForSeconds(this.time);
                    break;

                case Commands.CREATE_NODE: // create a node, (0, index, value)
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
               
               
                case Commands.UPDATE_MESSAGE: // add number to printField (12, index, value to add, "")
                    canvas.transform.GetChild(15).GetComponent<TMP_Text>().text += " " + instr.arg2.ToString();
                    break;

                case Commands.UPDATE_QUEUE_MESSAGE: // add/remove number to queueField (13, value to add, add/remove, "")
                    switch(instr.arg2)
                    {
                        case 0:
                            canvas.transform.GetChild(16).GetComponent<TMP_Text>().text += "\n" + instr.arg1;
                            break;

                        case 1:
                            string remo = instr.arg1.ToString();
                            int pos = canvas.transform.GetChild(16).GetComponent<TMP_Text>().text.IndexOf(remo);

                            canvas.transform.GetChild(16).GetComponent<TMP_Text>().text = canvas.transform.GetChild(16).GetComponent<TMP_Text>().text.Remove(pos - 1, remo.Length + 1);

                            break;

                        default:
                            break;
                    }
                    break;

                default:
                    yield return new WaitForSeconds(this.time);
                    break;

                    
            }
        }
    }
}