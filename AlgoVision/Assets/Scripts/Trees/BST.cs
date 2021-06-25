using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System;
using Random = System.Random;

public class BST : Algorithm
{
    protected int treeDepth; // lowest level of tree
    public int size;
    protected Queue<BSTCommand> q = new Queue<BSTCommand>();
    protected Random r = new Random();
    protected BSTNode[] Nodetree;
    protected int[] inttree;
    protected int[] heights;
    protected static float[] Xcoords;
    protected static float[] Ycoords;
    [SerializeField] public GameObject canvas;
    [SerializeField] GameObject spherePrefab;
    public BST(int size, GameObject spherePrefab)
    {
        this.size = size;
        this.spherePrefab = spherePrefab;
        inttree = new int[(int)Math.Pow(2, treeDepth) - 1]; // initializes the array where the keys are stored in the BST tree
        heights = new int[(int)Math.Pow(2, treeDepth) - 1]; // initialized the array where node heights are stored
        Nodetree = null;

        for (int i = 0; i < inttree.Length; i++)
        {
            inttree[i] = -1; // if a node is null, it's key is -1
            heights[i] = 0; // default height is zero
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
        public short commandId;
        public int arg1, arg2;
        public string message;

        public BSTCommand(short commandId, int a1, int a2, string m)
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
        heights = new int[(int)Math.Pow(2, treeDepth) - 1]; // initialized the array where node heights are stored

        for (int i = 0; i < inttree.Length; i++)
        {
            inttree[i] = -1; // if a node is null, it's key is -1
            heights[i] = 0; // default height is zero
        }

        keys = new int[size];
        for (int i = 0; i < size; i++)
        {
            int ins = r.Next(1, 1000);
            keys[i] = ins;
            order = order + ins.ToString() + ", "; // adds the inserted number to the string for printing
        }

        Debug.Log(order); // prints the keys in order of insertion
        q.Enqueue(new BSTCommand(-1,0,0,"Starting BST Insertion."));
        q.Enqueue(new BSTCommand(-1, 0, 0, "Starting BST Insertion."));

        for (int i = 0; i < keys.Length; i++) // insertion of keys
        {
            q.Enqueue(new BSTCommand(10, keys[i], 0, ""));
            q.Enqueue(new BSTCommand(-1,0,0,("Inserting " + keys[i])));
            insert(keys[i], 0);
            q.Enqueue(new BSTCommand(-1,0,0,( keys[i] + " inserted!")));
        }

        printIntTree();
        printHeights();
        Nodetree = new BSTNode[inttree.Length * 2 + 1];
        Xcoords = new float[Nodetree.Length];
        Ycoords = new float[Nodetree.Length];
        setCoords();


        //StartCoroutine(readQueue(0.0f));
    }

    public void customInserts(int[] keys)
    {
        
        foreach(int i in keys)
        {
            if(i < 0)
            {
                q.Enqueue(new BSTCommand(10, -i, 1, ""));
                q.Enqueue(new BSTCommand(-1, 0, 0, "Deleting " + (i * -1)));
                delete(0, (i * -1));
            }
            else
            {
                q.Enqueue(new BSTCommand(10, i, 0, ""));
                q.Enqueue(new BSTCommand(-1, 0, 0, "Inserting " + i));
                insert(i, 0);
            }
        }
        q.Enqueue(new BSTCommand(-1, 0, 0, "Completed BST insertions"));

        printIntTree();
        printHeights();

        if (Nodetree == null)
        {
            Nodetree = new BSTNode[inttree.Length * 2 + 1];
            for(int n = 0; n < Nodetree.Length; n++)
            {
                Nodetree[n] = null;
            }
            Xcoords = new float[Nodetree.Length];
            Ycoords = new float[Nodetree.Length];
            setCoords();
        }
        else
        {
            BSTNode[] tempTree = new BSTNode[inttree.Length * 2 + 1];
            for(int i = 0; i < Nodetree.Length; i++)
            {
                tempTree[i] = Nodetree[i];
            }
            for(int i = Nodetree.Length; i < tempTree.Length; i++)
            {
                tempTree[i] = null;
            }
            Nodetree = tempTree;

            Xcoords = new float[Nodetree.Length];
            Ycoords = new float[Nodetree.Length];
            setCoords();

            foreach(BSTNode n in Nodetree)
            {
                if(n != null)
                {
                    n.updateCoords();
                    if(n.I != 0)
                    {
                        n.parentEdge.SetPosition(0, new Vector3(Xcoords[n.I], Ycoords[n.I], 0));
                        n.parentEdge.SetPosition(1, new Vector3(Xcoords[parentI(n.I)], Ycoords[parentI(n.I)], 0));
                    }
                }
            }
        }
    }

    public void testInserts() // starts here
    {
        string text = "1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,62,63";

        size = 31; // number of keys to be inserted
        int[] keys; // where the keys are stored in insertion order
        string order = ""; // for debugging purposes. stores the keys in order inserted
        treeDepth = 2; // the depth of the tree is initialized. can/will be updated by program as the tree is added to as needed.

        inttree = new int[(int)Math.Pow(2, treeDepth) - 1]; // initializes the array where the keys are stored in the BST tree
        heights = new int[(int)Math.Pow(2, treeDepth) - 1]; // initialized the array where node heights are stored

        for (int i = 0; i < inttree.Length; i++)
        {
            inttree[i] = -1; // if a node is null, it's key is -1
            heights[i] = 0; // default height is zero
        }

        if (text != null && text != "") // if the user wants to insert their own values.
        {
            string[] textInserts = text.Split(',');
            keys = new int[textInserts.Length];

            for (int i = 0; i < keys.Length; i++)
            {
                keys[i] = -1;
            }

            int p = 0;
            foreach (string token in textInserts)
            {
                try
                {
                    int h = Int32.Parse(token);
                    Debug.Log(">" + h);

                    if (h < 0)
                    {
                        Debug.Log(h + " is less than 0, please use values of 0 and greater.");
                    }
                    else
                    {
                        keys[p] = h;
                        p++;
                        order = order + h.ToString() + ", "; // adds the inserted number to the string for printing
                    }

                }
                catch (FormatException)
                {
                    Debug.Log("Cant convert " + token + " to int");
                }

            }

            if (p == 0)
            {
                Debug.Log("No valid keys found.");
            }
            else
            {
                int[] tempKeys = new int[p];
                for (int i = 0; i < p; i++)
                {
                    tempKeys[i] = keys[i];
                }
                keys = tempKeys;
            }

        }
        else
        {
            Debug.Log("No inputs given, generating random list of keys.");
            keys = new int[size];
            for(int i = 0; i < size; i++)
            {
                int ins = r.Next(1, 1000);
                keys[i] = ins;
                order = order + ins.ToString() + ", "; // adds the inserted number to the string for printing
            }
        }

        Debug.Log(order); // prints the keys in order of insertion

        for (int i = 0; i < keys.Length; i++) // insertion of keys
        {
            insert(keys[i], 0);
        }
        delete(0, 28);
        delete(0, 8);
        delete(0, 9);

        printIntTree();
        printHeights();
        Nodetree = new BSTNode[inttree.Length * 2 + 1];
        Xcoords = new float[Nodetree.Length];
        Ycoords = new float[Nodetree.Length];
        setCoords();

        
        
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
            heights[I] = 1;

            q.Enqueue(new BSTCommand(0, I, key, ("Null node found, creating a new node with the value " + key))); // make new node
            
            if (I != 0) // if the new node isn't at index 0 (the root of the tree) draw a line to the parent node 
            {
                q.Enqueue(new BSTCommand(-1, 0, 0, ""));
                q.Enqueue(new BSTCommand(1, I, parentI(I), "Linking node to it's new parent."));
            }
            q.Enqueue(new BSTCommand(-1, 0, 0, ""));
            return;
        }

        q.Enqueue(new BSTCommand(2, I, 1, "Current node is not null, beginning comparison")); // null node not found, highlight current node to show insertion path
        if (inttree[I] > key) // go left
        {
            q.Enqueue(new BSTCommand(-1, 0, 0, ("Current Node: " + inttree[I] + " > Inserted Node: " + key)));
            
            q.Enqueue(new BSTCommand(-1, 0, 0, "Continue down left subtree."));
            q.Enqueue(new BSTCommand(2, I, 10, ""));
            if(leftCI(I) < inttree.Length && inttree[leftCI(I)] != -1 )
            {
                q.Enqueue(new BSTCommand(5, leftCI(I), 1, ""));
            }
            insert(key, leftCI(I));
        }
        else // go right
        {
            q.Enqueue(new BSTCommand(-1, 0, 0, ("Current Node: " + inttree[I] + " <= Inserted Node: " + key)));
            
            q.Enqueue(new BSTCommand(-1, 0, 0, "Continue down right subtree."));
            q.Enqueue(new BSTCommand(2, I, 10, ""));
            if (rightCI(I) < inttree.Length && inttree[rightCI(I)] != -1)
            {
                q.Enqueue(new BSTCommand(5, rightCI(I), 1, ""));
            }

            insert(key, rightCI(I));
        }
        if (inttree[leftCI(I)] != -1)
        {
            q.Enqueue(new BSTCommand(5, leftCI(I), 0, ""));
        }
        if (inttree[rightCI(I)] != -1)
        {
            q.Enqueue(new BSTCommand(5, rightCI(I), 0, ""));
        }
        /*q.Enqueue(new BSTCommand(2, I, 1, "Return to parent."));
        q.Enqueue(new BSTCommand(-1, 0, 0, ""));*/
        
        q.Enqueue(new BSTCommand(8, I, 0, ""));
        q.Enqueue(new BSTCommand(2, I, 0, ""));

        return;
    }

    void updateDepth()
    {
        treeDepth++;
        int[] newtree = new int[inttree.Length * 2 + 1];
        int[] newHeights = new int[newtree.Length];

        for (int i = 0; i < inttree.Length; i++)
        {
            newtree[i] = inttree[i];
            newHeights[i] = heights[i];
        }

        for (int i = inttree.Length; i < newtree.Length; i++)
        {
            newtree[i] = -1;
            newHeights[i] = 0;
        }

        inttree = newtree;
        heights = newHeights;
    }

    void setCoords()
    {
        if (treeDepth % 2 == 0) // if the tree depth is even
        {
            for (int i = 0; i < treeDepth; i++)
            {
                float y = (float)(treeDepth - 1) / (float)2 - (float)i;
                int n = -1 * (int)(Math.Pow(2, i) - 1);
                int d = (int)(Math.Pow(2, i + 1));

                for (int j = (int)Math.Pow(2, i) - 1; j < (int)Math.Pow(2, i + 1) - 1; j++)
                {
                    float x = (float)n / 10f * (float)Xcoords.Length / (float)d;
                    n = n + 2;

                    Xcoords[j] = x;
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

                for (int j = (int)Math.Pow(2, i) - 1; j < (int)Math.Pow(2, i + 1) - 1; j++)
                {
                    float x = (float)n / 10f * (float)Xcoords.Length / (float)d;
                    n = n + 2;

                    Xcoords[j] = x;
                    Ycoords[j] = 3 * y;
                }
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
        heights[d] = heights[i];
        heights[i] = 0;
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
            q.Enqueue(new BSTCommand(3, dudes[0], dudes[1], ""));

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

        

        q.Enqueue(new BSTCommand(3, i, d, ""));

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



        q.Enqueue(new BSTCommand(3, i, d, ""));

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

    int updateHeights(int i)
    {
        if(!(i < inttree.Length))
        {
            return 0;
        }
        if(inttree[i] == -1)
        {
            heights[i] = 0;
            return 0;
        }

        heights[i] = max(updateHeights(leftCI(i)), updateHeights(rightCI(i))) + 1;
        return heights[i];
    }

    /*
    
        y                           x
       / \                         / \
      x   3     ===> right        1   y
     / \        <=== left            / \  
    1   2                           2   3

    */

    void lRotate(int I)
    {
        int x = I;
        int t1 = leftCI(x);
        int y = rightCI(x);
        int t2 = leftCI(y);
        int t3 = rightCI(y);
        int c = 6;

        if(t1 < inttree.Length && inttree[t1] != -1)
        {
            q.Enqueue(new BSTCommand(4, t1, c--, ""));
        }

        q.Enqueue(new BSTCommand(2, x, c--, ""));

        if (t2 < inttree.Length && inttree[t2] != -1)
        {
            q.Enqueue(new BSTCommand(4, t2, c--, ""));
        }

        q.Enqueue(new BSTCommand(2, y, c--, ""));

        if (t3 < inttree.Length && inttree[t3] != -1)
        {
            q.Enqueue(new BSTCommand(4, t3, c--, ""));
        }
        
        q.Enqueue(new BSTCommand(-1, 0, 0, ""));


        // move tree1 downleft
        if (t1 < inttree.Length && inttree[t1] != -1)
        {
            q.Enqueue(new BSTCommand(-1, 0, 0, "Moving " + inttree[x] +"'s left subtree down left."));
            movetree(t1, leftCI(t1));
            q.Enqueue(new BSTCommand(-1, 0, 0, ""));
        }
        

        // move x downleft
        q.Enqueue(new BSTCommand(-1, 0, 0, "Moving " +inttree[x] + " down left."));
        swap(x, leftCI(x));
        q.Enqueue(new BSTCommand(3, x, leftCI(x), ""));
        q.Enqueue(new BSTCommand(-1, 0, 0, ""));


        // move tree2 left 1
        if (t2 < inttree.Length && inttree[t2] != -1)
        {
            q.Enqueue(new BSTCommand(-1, 0, 0, "Moving " + inttree[y] + "'s left subtree to be " + inttree[x] + "'s right subtree."));
            movetree(t2, rightCI(t1));
            q.Enqueue(new BSTCommand(-1, 0, 0, ""));
        }



        // move move y up
        q.Enqueue(new BSTCommand(-1, 0, 0, "Moving " + inttree[y] + " up."));
        inttree[parentI(y)] = inttree[y];
        inttree[y] = -1;
        q.Enqueue(new BSTCommand(3, y, parentI(y), ""));
        q.Enqueue(new BSTCommand(-1, 0, 0, ""));


        // move tree 3 up
        if (t3 < inttree.Length && inttree[t3] != -1)
        {
            q.Enqueue(new BSTCommand(-1, 0, 0, "Moving " + inttree[y] + "'s right subtree up."));
            movetree(t3, parentI(t3));
            q.Enqueue(new BSTCommand(-1, 0, 0, ""));
        }
        

        q.Enqueue(new BSTCommand(4, I, 0, ""));
        q.Enqueue(new BSTCommand(-1, 0, 0, ""));
        heights[I] = updateHeights(I);

    }

    void rRotate(int I)
    {
        int y = I;
        int x = leftCI(y);
        int t3 = rightCI(y);
        int t1 = leftCI(x);
        int t2 = rightCI(x);
        int c = 6;

        if (t3 < inttree.Length && inttree[t3] != -1)
        {
            q.Enqueue(new BSTCommand(4, t3, c--, ""));
        }

        q.Enqueue(new BSTCommand(2, y, c--, ""));

        if (t2 < inttree.Length && inttree[t2] != -1)
        {
            q.Enqueue(new BSTCommand(4, t2, c--, ""));
        }

        q.Enqueue(new BSTCommand(2, x, c--, ""));

        if (t1 < inttree.Length && inttree[t1] != -1)
        {
            q.Enqueue(new BSTCommand(4, t1, c--, ""));
        }

        q.Enqueue(new BSTCommand(-1, 0, 0, ""));


        // move tree3 downright
        if (t3 < inttree.Length && inttree[t3] != -1)
        {
            q.Enqueue(new BSTCommand(-1, 0, 0, "Moving " + inttree[y] + "'s right subtree down-right."));
            movetree(t3, rightCI(t3));
            q.Enqueue(new BSTCommand(-1, 0, 0, ""));
        }


        // move y downright
        q.Enqueue(new BSTCommand(-1, 0, 0, "Moving " + inttree[y] + " down-right."));
        inttree[rightCI(y)] = inttree[y];
        inttree[y] = -1;
        q.Enqueue(new BSTCommand(3, y, rightCI(y), ""));
        q.Enqueue(new BSTCommand(-1, 0, 0, ""));


        // movetree2 right 1
        if (t2 < inttree.Length && inttree[t2] != -1)
        {
            q.Enqueue(new BSTCommand(-1, 0, 0, "Moving " + inttree[x] + "'s left subtree to " + inttree[x] + "'s right subtree."));
            movetree(t2, leftCI(t3));
            q.Enqueue(new BSTCommand(-1, 0, 0, ""));
        }


        // move x up
        q.Enqueue(new BSTCommand(-1, 0, 0, "Moving " + inttree[x] + " up."));
        inttree[parentI(x)] = inttree[x];
        inttree[x] = -1;
        q.Enqueue(new BSTCommand(3, x, parentI(x), ""));
        q.Enqueue(new BSTCommand(-1, 0, 0, ""));


        // move tree1 up
        if (t1 < inttree.Length && inttree[t1] != -1)
        {
            q.Enqueue(new BSTCommand(-1, 0, 0, "Moving " + inttree[x] + "'s left subtree up."));
            movetree(t1, parentI(t1));
            q.Enqueue(new BSTCommand(-1, 0, 0, ""));
        }
        


        q.Enqueue(new BSTCommand(4, I, 0, ""));
        q.Enqueue(new BSTCommand(-1, 0, 0, ""));
        heights[I] = updateHeights(I);

    }

    private int max(int a, int b) => a > b ? a : b;

    void delete(int I, int key)
    {
        if(inttree[I] == -1) // key was not found
        {
            q.Enqueue(new BSTCommand(-1,0,0,key + " was not found, exiting the tree."));
            return;
        }
        if (inttree[I] == key)
        {
            q.Enqueue(new BSTCommand(2, I, 10, ""));
            q.Enqueue(new BSTCommand(-1, 0, 0, key + " has been found."));
            q.Enqueue(new BSTCommand(-1, 0, 0, "Finding leftmost node of right sub-tree"));
            int tempI = findLeftmostNode(rightCI(I));

            if(tempI == -1) // right subtree not found
            {
                
                if(inttree[leftCI(I)] == -1) // if not left subtree found
                {
                    q.Enqueue(new BSTCommand(-1, 0, 0, inttree[I] + " is a leaf node, removing without replacement."));
                    q.Enqueue(new BSTCommand(9, I, 0, ""));
                    inttree[I] = -1;
                    heights[I] = 0;
                    return;
                }
                else
                {
                    q.Enqueue(new BSTCommand(-1, 0, 0, "No right subtree found, moving left subtree instead."));
                }
                q.Enqueue(new BSTCommand(9, I, 0, ""));
                inttree[I] = -1;
                heights[I] = 0;
                movetree(leftCI(I), I);
                return;
            }

            q.Enqueue(new BSTCommand(-1, 0, 0, "Found " + inttree[tempI] + ", moving to " + inttree[I]));
            q.Enqueue(new BSTCommand(9, I, 0, ""));
            q.Enqueue(new BSTCommand(3, tempI, I, ""));
            inttree[I] = inttree[tempI];

            if(rightCI(tempI) >= inttree.Length || inttree[rightCI(tempI)] == -1)
            {
                inttree[tempI] = -1;
                heights[tempI] = 0;
            }
            else
            {
                q.Enqueue(new BSTCommand(3, rightCI(tempI), tempI, ""));
                inttree[tempI] = inttree[rightCI(tempI)];
                inttree[rightCI(tempI)] = -1;
                heights[rightCI(tempI)] = 0;
            }

            updateHeights(I);
            tempI = parentI(tempI);

            while(tempI >= I)
            {
                if (inttree[leftCI(tempI)] != -1)
                {
                    q.Enqueue(new BSTCommand(5, leftCI(tempI), 0, ""));
                }
                
                q.Enqueue(new BSTCommand(2, tempI, 1, "Return to parent."));
                q.Enqueue(new BSTCommand(-1, 0, 0, ""));
                q.Enqueue(new BSTCommand(-1, 0, 0, ("Check balance of " + inttree[tempI])));


                heights[tempI] = max(heights[leftCI(tempI)], heights[rightCI(tempI)]) + 1;

                q.Enqueue(new BSTCommand(6, tempI, heights[leftCI(tempI)], ""));
                q.Enqueue(new BSTCommand(7, tempI, heights[rightCI(tempI)], ""));
                q.Enqueue(new BSTCommand(-1, 0, 0, ""));

                int b = heights[leftCI(tempI)] - heights[rightCI(tempI)];

                if (b > 1)
                {
                    int sb = heights[leftCI(leftCI(tempI))] - heights[leftCI(rightCI(tempI))];
                    if (sb < 0) // if left-right
                    {
                        q.Enqueue(new BSTCommand(-1, 0, 0, "Node is left heavy and left subtree is right heavy."));
                        q.Enqueue(new BSTCommand(-1, 0, 0, "Beggining Left-Right case"));
                        q.Enqueue(new BSTCommand(-1, 0, 0, "Performing left rotate on " + inttree[leftCI(tempI)]));
                        lRotate(leftCI(tempI));
                        q.Enqueue(new BSTCommand(-1, 0, 0, "Performing right rotate on " + inttree[tempI]));
                        rRotate(tempI);
                    }
                    else // if left-left
                    {
                        q.Enqueue(new BSTCommand(-1, 0, 0, "Node is left heavy and left subtree is left heavy."));
                        q.Enqueue(new BSTCommand(-1, 0, 0, "Beggining Left-Left case"));
                        q.Enqueue(new BSTCommand(-1, 0, 0, "Performing right rotate on " + inttree[tempI]));
                        rRotate(tempI);
                    }
                    q.Enqueue(new BSTCommand(-1, 0, 0, (inttree[I] + " is now balanced")));
                }
                else if (b < -1)
                {
                    int sb = heights[rightCI(leftCI(tempI))] - heights[rightCI(rightCI(tempI))];
                    if (sb > 0) // right -left
                    {
                        q.Enqueue(new BSTCommand(-1, 0, 0, "Node is right heavy and right subtree is left heavy."));
                        q.Enqueue(new BSTCommand(-1, 0, 0, "Beggining Right-Left case"));
                        q.Enqueue(new BSTCommand(-1, 0, 0, "Performing right rotate on " + inttree[rightCI(tempI)]));
                        rRotate(rightCI(tempI));
                        q.Enqueue(new BSTCommand(-1, 0, 0, "Performing left rotate on " + inttree[tempI]));
                        lRotate(tempI);
                    }
                    else // right-right
                    {
                        q.Enqueue(new BSTCommand(-1, 0, 0, "Node is right heavy and right subtree is right heavy."));
                        q.Enqueue(new BSTCommand(-1, 0, 0, "Beggining Right-Right case"));
                        q.Enqueue(new BSTCommand(-1, 0, 0, "Performing left rotate on " + inttree[tempI]));
                        lRotate(tempI);
                    }
                    q.Enqueue(new BSTCommand(-1, 0, 0, (inttree[tempI] + " is now balanced")));
                }
                else
                {
                    q.Enqueue(new BSTCommand(-1, 0, 0, ("|Left - Right| < 2. " + inttree[tempI] + " is already balanced!")));
                    q.Enqueue(new BSTCommand(2, tempI, 0, ""));
                    q.Enqueue(new BSTCommand(8, tempI, 0, ""));
                }

                tempI = parentI(tempI);
            }
            return;
        }
        else
        {
            if (key < inttree[I])
            {
                q.Enqueue(new BSTCommand(-1, 0, 0, ("Current Node: " + inttree[I] + " > Deleting Node: " + key)));

                q.Enqueue(new BSTCommand(-1, 0, 0, "Continue down left subtree."));
                q.Enqueue(new BSTCommand(2, I, 10, ""));
                if (leftCI(I) < inttree.Length && inttree[leftCI(I)] != -1)
                {
                    q.Enqueue(new BSTCommand(5, leftCI(I), 1, ""));
                }
                delete(leftCI(I), key);
            }
            else
            {
                q.Enqueue(new BSTCommand(-1, 0, 0, ("Current Node: " + inttree[I] + " <= Deleting Node: " + key)));

                q.Enqueue(new BSTCommand(-1, 0, 0, "Continue down right subtree."));
                q.Enqueue(new BSTCommand(2, I, 10, ""));
                if (rightCI(I) < inttree.Length && inttree[rightCI(I)] != -1)
                {
                    q.Enqueue(new BSTCommand(5, rightCI(I), 1, ""));
                }

                delete(rightCI(I), key);
            }
        }

        if (inttree[leftCI(I)] != -1)
        {
            q.Enqueue(new BSTCommand(5, leftCI(I), 0, ""));
        }
        if (inttree[rightCI(I)] != -1)
        {
            q.Enqueue(new BSTCommand(5, rightCI(I), 0, ""));
        }
        q.Enqueue(new BSTCommand(2, I, 1, "Return to parent."));
        q.Enqueue(new BSTCommand(-1, 0, 0, ""));
        q.Enqueue(new BSTCommand(-1, 0, 0, ("Check balance of " + inttree[I])));

        heights[I] = max(heights[leftCI(I)], heights[rightCI(I)]) + 1;

        q.Enqueue(new BSTCommand(6, I, heights[leftCI(I)], ""));
        q.Enqueue(new BSTCommand(7, I, heights[rightCI(I)], ""));

        int balance = heights[leftCI(I)] - heights[rightCI(I)];

        if (balance > 1)
        {
            int sb = heights[leftCI(leftCI(I))] - heights[leftCI(rightCI(I))];
            if (sb < 0) // if left-right
            {
                q.Enqueue(new BSTCommand(-1, 0, 0, "Node is left heavy and left subtree is right heavy."));
                q.Enqueue(new BSTCommand(-1, 0, 0, "Beggining Left-Right case"));
                q.Enqueue(new BSTCommand(-1, 0, 0, "Performing left rotate on " + inttree[leftCI(I)]));
                lRotate(leftCI(I));
                q.Enqueue(new BSTCommand(-1, 0, 0, "Performing right rotate on " + inttree[I]));
                rRotate(I);
            }
            else // if left-left
            {
                q.Enqueue(new BSTCommand(-1, 0, 0, "Node is left heavy and left subtree is left heavy."));
                q.Enqueue(new BSTCommand(-1, 0, 0, "Beggining Left-Left case"));
                q.Enqueue(new BSTCommand(-1, 0, 0, "Performing right rotate on " + inttree[I]));
                rRotate(I);
            }
            q.Enqueue(new BSTCommand(-1, 0, 0, (inttree[I] + " is now balanced")));
        }
        else if (balance < -1)
        {
            int sb = heights[rightCI(leftCI(I))] - heights[rightCI(rightCI(I))];
            if (sb > 0) // right -left
            {
                q.Enqueue(new BSTCommand(-1, 0, 0, "Node is right heavy and right subtree is left heavy."));
                q.Enqueue(new BSTCommand(-1, 0, 0, "Beggining Right-Left case"));
                q.Enqueue(new BSTCommand(-1, 0, 0, "Performing right rotate on " + inttree[rightCI(I)]));
                rRotate(rightCI(I));
                q.Enqueue(new BSTCommand(-1, 0, 0, "Performing left rotate on " + inttree[I]));
                lRotate(I);
            }
            else // right-right
            {
                q.Enqueue(new BSTCommand(-1, 0, 0, "Node is right heavy and right subtree is right heavy."));
                q.Enqueue(new BSTCommand(-1, 0, 0, "Beggining Right-Right case"));
                q.Enqueue(new BSTCommand(-1, 0, 0, "Performing left rotate on " + inttree[I]));
                lRotate(I);
            }

            q.Enqueue(new BSTCommand(-1, 0, 0, (inttree[I] + " is now balanced")));
        }
        else
        {
            q.Enqueue(new BSTCommand(-1, 0, 0, ("|Left - Right| < 2. " + inttree[I] + " is already balanced!")));
        }
        q.Enqueue(new BSTCommand(8, I, 0, ""));
        q.Enqueue(new BSTCommand(2, I, 0, ""));

        return;
    }

    int findLeftmostNode(int I)
    {
        if(I >= inttree.Length || inttree[I] == -1) // subtree not found
        {
            q.Enqueue(new BSTCommand(-1, 0, 0, "No right subtree found."));
            return -1;
        }
        if(leftCI(I) >= inttree.Length || inttree[leftCI(I)] == -1) // leftmost node found
        {
            q.Enqueue(new BSTCommand(2, I, 1, ""));
            q.Enqueue(new BSTCommand(-1, 0, 0, "Left most node found!"));
            return I;
        }
        q.Enqueue(new BSTCommand(2, I, 10, "")); // color node black
        q.Enqueue(new BSTCommand(-1, 0, 0, ""));
        q.Enqueue(new BSTCommand(5, leftCI(I), 1, "")); // color branch red

        int p = findLeftmostNode(leftCI(I)); // search deeper

        q.Enqueue(new BSTCommand(5, leftCI(I), 0, "")); // make node and branch white again.
        q.Enqueue(new BSTCommand(2, I, 0, ""));

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

    void printHeights()
    {
        for (int i = 0; i < treeDepth; i++)
        {
            String output = "";

            for (int j = (int)Math.Pow(2, i) - 1; j < (int)Math.Pow(2, i + 1) - 1; j++)
            {
                if (heights[j] < 1)
                {
                    output = output + "n, ";
                }
                else
                {
                    output = output + heights[j].ToString() + ", ";
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

    public IEnumerator readQueue()
    {
        GameObject canvas = GameObject.Find("Canvas");
        while(q.Count != 0)
        {
            BSTCommand instr = q.Dequeue();

            if(instr.message != "" && instr.message != null)
            {
                canvas.transform.GetChild(5).GetComponent<TMP_Text>().text = instr.message;
                //Debug.Log(instr.message);
            }
            
            //Debug.Log(instr.commandId + "\t" + instr.arg1 + "\t" + instr.arg2);
            switch (instr.commandId)
            {
                case -1:
                    yield return new WaitForSeconds(this.time);
                    break;

                case 0: // create a node, (0, index, value)
                    Nodetree[instr.arg1] = new BSTNode(instr.arg2, instr.arg1);
                    Nodetree[instr.arg1].o = GameObject.Instantiate(spherePrefab);
                    var t = Nodetree[instr.arg1].o.GetComponentInChildren<TextMeshPro>();
                    t.text = Nodetree[instr.arg1].value.ToString();

                    Nodetree[instr.arg1].o.transform.GetChild(1).GetComponent<TMP_Text>().text = "";
                    Nodetree[instr.arg1].o.transform.GetChild(2).GetComponent<TMP_Text>().text = "";

                    Nodetree[instr.arg1].updateCoords();
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
                    break;
                case 10: // delete node (9, index, null, "")

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
                case 11: // toggle node's arrow visibility (11, index, visibility, "")
                    switch(instr.arg2)
                    {
                        case 0:
                            
                            break;
                        case 1:

                            break;
                        case 2:

                            break;
                        case 3:

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




// the wall of shame. for comedic purposes

/*
    public void setCam()
    {
        float z = -1*(float)Math.Ceiling(size * Math.Tan(112*Math.PI/360)/2);
        Camera.main.transform.position = new Vector3(0, 5, (float)(z));
        Camera.main.farClipPlane = (float)(-1.1 * z + 200);
    }

    void resetPositions(BSTNode root)
    {
        // for each TreeNode in the array, check if it has a left or right child and adjust their locations

        if (root.children[0] != null && root.children[0].o != null && root.children[0].parentEdge != null)
        {
            root.children[0].o.transform.position = new Vector3(root.o.transform.position.x - root.children[0].childVolumes[1] - 1, root.children[0].o.transform.position.y, 0);
            root.children[0].parentEdge.SetPosition(0, new Vector3(root.o.transform.position.x, root.o.transform.position.y, 0)); //x,y and z position of the starting point of the line
            root.children[0].parentEdge.SetPosition(1, new Vector3(root.children[0].o.transform.position.x, root.children[0].o.transform.position.y, 0)); //x,y and z position of the starting point of the line
            resetPositions(root.children[0]);
        }
        if (root.children[1] != null && root.children[1].o != null && root.children[1].parentEdge != null)
        {
            root.children[1].o.transform.position = new Vector3(root.o.transform.position.x + root.children[1].childVolumes[0] + 1, root.children[1].o.transform.position.y, 0);
            root.children[1].parentEdge.SetPosition(0, new Vector3(root.o.transform.position.x, root.o.transform.position.y, 0)); //x,y and z position of the starting point of the line
            root.children[1].parentEdge.SetPosition(1, new Vector3(root.children[1].o.transform.position.x, root.children[1].o.transform.position.y, 0)); //x,y and z position of the starting point of the line
            resetPositions(root.children[1]);
        }
    }

    public IEnumerator readQueue(float time)
    {
        foreach (BSTCommand instr in q)
        {
            switch (instr.commandId)
            {
                case 0: // create a node
                    instr.node1.o = GameObject.CreatePrimitive(PrimitiveType.Sphere);
                    instr.node1.o.transform.position = new Vector3(0, 10 - 2 * instr.node1.depth);
                    break;
                case 1: // color a node red
                    instr.node1.o.GetComponent<Renderer>().material.color = Color.red;
                    yield return new WaitForSeconds(time);

                    break;
                case 2: // color a node white
                    instr.node1.o.GetComponent<Renderer>().material.color = Color.white;
                    break;
                case 3: // link node1 and node2
                    instr.node1.parentEdge = new GameObject("Line").AddComponent(typeof(LineRenderer)) as LineRenderer;
                    instr.node1.parentEdge.GetComponent<LineRenderer>().startColor = Color.black;
                    instr.node1.parentEdge.GetComponent<LineRenderer>().endColor = Color.black;
                    instr.node1.parentEdge.GetComponent<LineRenderer>().startWidth = .05f;
                    instr.node1.parentEdge.GetComponent<LineRenderer>().endWidth = .05f;
                    instr.node1.parentEdge.GetComponent<LineRenderer>().positionCount = 2;
                    instr.node1.parentEdge.GetComponent<LineRenderer>().useWorldSpace = true;
                    resetPositions(root);
                    yield return new WaitForSeconds(time);
                    break;
                case 4: // increment node1.childVolumes[insrt.additionalInfo]
                    instr.node1.childVolumes[instr.additionalInfo]++;
                    break;
                case 5: // set node1.childVolumes[x] to additional info
                    instr.node1.childVolumes[1]++;
                    break;
                case 6:
                    yield return new WaitForSeconds(time);
                    break;
                case 7: // left rotate
                    break;
                case 8: // right rotate
                    break;
                default:
                    break;
            }
        }
    }

    void Start()
    {
        treeDepth = 0;
        size = 8;
        root = null;
        Random r = new Random();
        int[] a = new int[size];

        for(int i = 0; i < size; i++)
        {
            a[i] = i + 1;
        }
        for(int i = 0; i < size; i++)
        {
            int temp1 = r.Next(i, size);
            int temp2 = a[i];
            a[i] = a[temp1];
            a[temp1] = temp2; 
        }

        Debug.Log(a);
        foreach (int i in a)
        {
            root = insertNode(root, null, i, 0);
        }
        //q.Enqueue(new BSTCommand(0, root, null, 0));
        preOrderPrint(root);
        setCam();
        StartCoroutine(readQueue(.1f));
    }

    private int getBalance(BSTNode node) => node == null ? 0 : height(node.children[0]) - height(node.children[1]);

    private int max(int a, int b) => a > b ? a : b;

    private int height(BSTNode node) => node == null ? 0 : node.height;

    private BSTNode updateDepth(BSTNode root, int depth)
    {
        if(root == null)
        {
            return root;
        }
        root.depth = depth;
        root.children[0] = updateDepth(root.children[0], depth + 1);
        root.children[1] = updateDepth(root.children[1], depth + 1);
        return root;
    }
    
    private int fetchChildren(BSTNode root) => root == null ? 0 : fetchChildren(root.children[0]) + fetchChildren(root.children[1]) + 1;

    private BSTNode updateChildren(BSTNode root)
    {
        if(root == null)
        {
            return root;
        }

        root.children[0] = updateChildren(root.children[0]);
        root.children[1] = updateChildren(root.children[1]);

        if(root.children[0] != null)
        {
            root.childVolumes[0] = root.children[0].childVolumes[0] + root.children[0].childVolumes[1] + 1;
        }

        if (root.children[1] != null)
        {
            root.childVolumes[1] = root.children[1].childVolumes[0] + root.children[1].childVolumes[1] + 1;
        }

        return root;
    }

    private void preOrderPrint(BSTNode root)
    {
        if(root == null)
        {
            return;
        }
        Debug.Log("Key: " + root.value + "  \theight: " + root.height + "  \tDepth: " + root.depth);

        if (root.children[0] != null)
        {
            int leftC = fetchChildren(root.children[0]);
            
            for(int i = 0; i < leftC; i++)
            {
                //q.Enqueue(new BSTCommand(4, root, null, 0));
            }

            //q.Enqueue(new BSTCommand(0, root.children[0], null, 0));
            //q.Enqueue(new BSTCommand(3, root.children[0], root, 0));
            preOrderPrint(root.children[0]);
        }

        if (root.children[1] != null)
        {
            int rightC = fetchChildren(root.children[1]);

            for (int i = 0; i < rightC; i++)
            {
                //q.Enqueue(new BSTCommand(4, root, null, 1));
            }

            //q.Enqueue(new BSTCommand(0, root.children[1], null, 0));
            //q.Enqueue(new BSTCommand(3, root.children[1], root, 0));
            preOrderPrint(root.children[1]);
        }
    }
    

    protected BSTNode rRotate(BSTNode root)
    {
        int rootDepth = root.depth;
        BSTNode newRoot = root.children[0];
        BSTNode newRightLeft = newRoot.children[1];

        newRoot.children[1] = root;
        root.children[0] = newRightLeft;

        root.height = max(height(root.children[0]), height(root.children[1])) + 1;
        newRoot.height = max(height(newRoot.children[0]), height(newRoot.children[1])) + 1;

        newRoot = updateDepth(newRoot, rootDepth);

        return newRoot;
    }

    protected BSTNode lRotate(BSTNode root)
    {
        int rootDepth = root.depth;
        BSTNode newRoot = root.children[1];
        BSTNode newLeftRight = newRoot.children[0];

        newRoot.children[0] = root;
        root.children[1] = newLeftRight;

        root.height = max(height(root.children[0]), height(root.children[1])) + 1;
        newRoot.height = max(height(newRoot.children[0]), height(newRoot.children[1])) + 1;

        newRoot = updateDepth(newRoot, rootDepth);

        return newRoot;
    }

    private BSTNode insertNode(BSTNode root, BSTNode parent, int key, int depth)
    {
        if(root == null) // no node found with key, make new node
        {
            if(depth > treeDepth)
            {
                treeDepth = depth;
                setCam();
            }
            BSTNode newNode = new BSTNode(key, depth, 1, 2);

            q.Enqueue(new BSTCommand(0, newNode, null, 0));
            if(parent != null)
            {
                q.Enqueue(new BSTCommand(3, newNode, parent, 0));
            }

            return newNode;
        }

        q.Enqueue(new BSTCommand(1, root, null, 0));

        if (key < root.value) // inserted key is less than node's key, go left
        {
            q.Enqueue(new BSTCommand(4, root, null, 0));
            root.children[0] = insertNode(root.children[0], root, key, depth+1);
        }
        else if(key > root.value) // inserted key is more than node's key, go right
        {
            q.Enqueue(new BSTCommand(4, root, null, 1));
            root.children[1] = insertNode(root.children[1], root, key, depth + 1);
        }

        q.Enqueue(new BSTCommand(2, root, null, 0));

        root.height = max(height(root.children[0]), height(root.children[1])) + 1; // update height

        int balance = getBalance(root); // get the balance of the node;

        // rotations

        if(balance > 1)
        {
            if(key > root.children[0].value)
            {
                root.children[0] = lRotate(root.children[0]);
            }

            return rRotate(root);
        }
        else if(balance < -1)
        {
            if (key < root.children[1].value)
            {
                root.children[1] = rRotate(root.children[1]);
            }

            return lRotate(root);
        }

        return root;
    }
    */

/*
 // extends the TreeNode class by adding BST elements
    // NOTES: BSTNode.children is inherited but 
    protected class BSTNode : TreeNode{
        public short balanceFactor;
        public int height;
        public override BSTNode[] children;
        public BSTNode(int value, int depth, int NoOfChildren) : base(value, depth, NoOfChildren)
        {
            balanceFactor = 0;
            height = 1;
        }
    }
    
    /* stuff to keep track of for BSTNodes:
     * GameObject o: the sphere in the visualizer
     * BSTNode children[]: 0 is the node to the left, 1 to the right
     * int value: the key
     * int depth: 
     //

// Start is called before the first frame update
void Start()
{
    depth = 0; // unecessary
    size = 20; // # of nodes in BST tree
               // set the root node
    root = new BSTNode(r.Next(100), 0, 2); // making root of the tree
    Debug.Log(root.GetType());
    q.Enqueue(new QueueCommand(0, root, null, 0)); // queues visualization of root
                                                   // set all the other nodes
    for (int i = 0; i < size; i++)
    {
        root = addNode((BSTNode)root, null, r.Next(100), 0); //inserts new node
        q.Enqueue(new QueueCommand(6, null, null, 0)); // wait
    }
    StartCoroutine(readQueue(.5f));  // starts visualization queue      
}
// add a node to the tree
// recursively call the function until we hit the point it gets added
protected BSTNode addNode(BSTNode root, BSTNode parent, int x, int depth)
{
    // build the node and its line renderer
    if (root == null)
    {
        // increment deepest depth
        if (depth > this.depth)
        { // if the depth of the new node is deeper than the depth of the tree
            this.depth = depth; // update tree's depth
            setCam(); // update camera
        }
        BSTNode node = new BSTNode(x, depth, 2); // make and insert new node
        q.Enqueue(new QueueCommand(0, node, null, 0)); // queue creation of new node
        q.Enqueue(new QueueCommand(3, node, parent, 0)); // link new node to tree

        return node; // return the new node
    }
    else
    {
        q.Enqueue(new QueueCommand(1, root, null, 0)); // queue highlight of new node
        if (x < root.value) // if the new key is less than the key of the node
        {
            q.Enqueue(new QueueCommand(4, root, null, 0)); // increases the stored number of left children

            root.children[0] = addNode((BSTNode)(root.children[0]), root, x, depth + 1); // continues insertion down left child
            if (root.children[1] == null) // if the node has no right children
            {
                root.balanceFactor = -1; // set the node's balance to -1
            }
            else // else set the node's balance to the
            {
                root.balanceFactor = (short)((BSTNode)(root.children[1]).height - (BSTNode)(root.children[0]).height); // 
            }
            root.childEdges[0] = root.children[0].parentEdge;

        }
        else
        {
            q.Enqueue(new QueueCommand(4, root, null, 1));

            if (root.children[0] == null)
            {
                root.balanceFactor = 1;
            }
            else
            {
                root.balanceFactor = (short)(root.children[0].height - root.children[1].height);
            }
            root.childEdges[1] = root.children[1].parentEdge;
        }
        q.Enqueue(new QueueCommand(2, root, null, 0));
        if (Math.Abs(root.balanceFactor) > 1)
        {

        }
        return root;
    }
}

// Update is called once per frame
void Update()
{

}
*/
