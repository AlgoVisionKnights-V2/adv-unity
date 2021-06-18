using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Random = System.Random;
using System;


public class TreeBuilder : Algorithm
{
    protected TreeNode root;
    protected int depth; // lowest level of tree
    protected int size;
    protected Queue q = new Queue();



    // stores the value and references to child nodes
    // stores the lines connecting them for quick access
    protected class TreeNode {
        public GameObject o;
        public TreeNode[] children;
        public int value, depth;
        public int[] childVolumes; // track the number of elements in the left and right subtrees. Used when determining position
        public LineRenderer parentEdge;
        public LineRenderer[] childEdges;

        // The standard constructor for every node
        // Constructor will build the necessary elements so the queue can work
        // Then the queue will build the visible elements
        public TreeNode(int value, int depth, int NoOfChildren)
        {
            children = new TreeNode[NoOfChildren];
            childVolumes = new int[NoOfChildren];
            childEdges = new LineRenderer[NoOfChildren];


            this.value = value;
            this.depth = depth;

        }
    }
    protected class QueueCommand{
        public short commandId;
        public TreeNode node1, node2;
        public short additionalInfo;
        public QueueCommand(short commandId, TreeNode node1, TreeNode node2, short additionalInfo){
            this.commandId = commandId;
            this.node1 = node1;
            this.node2 = node2;
            this.additionalInfo = additionalInfo;
        }
    }
    
    public void setCam()
    {
        float z = -2*(depth+1);
        Camera.main.transform.position = new Vector3(0, 5, (float)(z) );
        Camera.main.farClipPlane = (float)(-1.1*z + 200);
    }

    // Reset the location of the items when a new item is inserted
    void resetPositions(TreeNode root){
        // for each TreeNode in the array, check if it has a left or right child and adjust their locations

        if(root.children[0] != null && root.children[0].o != null){
            root.children[0].o.transform.position = new Vector3(root.o.transform.position.x - root.children[0].childVolumes[1] - 1, root.children[0].o.transform.position.y, 0);
            root.children[0].parentEdge.SetPosition(0, new Vector3(root.o.transform.position.x, root.o.transform.position.y, 0)); //x,y and z position of the starting point of the line
            root.children[0].parentEdge.SetPosition(1, new Vector3(root.children[0].o.transform.position.x, root.children[0].o.transform.position.y, 0)); //x,y and z position of the starting point of the line
            resetPositions(root.children[0]);
        }
        if (root.children[1] != null && root.children[1].o != null){
            root.children[1].o.transform.position = new Vector3(root.o.transform.position.x + root.children[1].childVolumes[0] + 1, root.children[1].o.transform.position.y, 0);
            root.children[1].parentEdge.SetPosition(0, new Vector3(root.o.transform.position.x, root.o.transform.position.y, 0)); //x,y and z position of the starting point of the line
            root.children[1].parentEdge.SetPosition(1, new Vector3(root.children[1].o.transform.position.x, root.children[1].o.transform.position.y, 0)); //x,y and z position of the starting point of the line
            resetPositions(root.children[1]);            
        }
    }
    protected void InOrderSearch(TreeNode root){
        if(root.children[0] != null){
            InOrderSearch(root.children[0]);void resetPositions(TreeNode root){
        // for each TreeNode in the array, check if it has a left or right child and adjust their locations

        if(root.children[0] != null && root.children[0].o != null){
            root.children[0].o.transform.position = new Vector3(root.o.transform.position.x - root.children[0].childVolumes[1] - 1, root.children[0].o.transform.position.y, 0);
            root.children[0].parentEdge.SetPosition(0, new Vector3(root.o.transform.position.x, root.o.transform.position.y, 0)); //x,y and z position of the starting point of the line
            root.children[0].parentEdge.SetPosition(1, new Vector3(root.children[0].o.transform.position.x, root.children[0].o.transform.position.y, 0)); //x,y and z position of the starting point of the line
            resetPositions(root.children[0]);
        }
        if (root.children[1] != null && root.children[1].o != null){
            root.children[1].o.transform.position = new Vector3(root.o.transform.position.x + root.children[1].childVolumes[0] + 1, root.children[1].o.transform.position.y, 0);
            root.children[1].parentEdge.SetPosition(0, new Vector3(root.o.transform.position.x, root.o.transform.position.y, 0)); //x,y and z position of the starting point of the line
            root.children[1].parentEdge.SetPosition(1, new Vector3(root.children[1].o.transform.position.x, root.children[1].o.transform.position.y, 0)); //x,y and z position of the starting point of the line
            resetPositions(root.children[1]);            
        }
    }
        }
        q.Enqueue(new QueueCommand(1, root, null, -1));
        if(root.children[1] != null){
            InOrderSearch(root.children[1]);
        }
    }
    protected void PreOrderSearch(TreeNode root){
        q.Enqueue(new QueueCommand(1, root, null, -1));

        if(root.children[0] != null){
            PreOrderSearch(root.children[0]);
        }
        if(root.children[1] != null){
            PreOrderSearch(root.children[1]);
        }
    }
    protected void PostOrderSearch(TreeNode root){
        if(root.children[0] != null){
            PostOrderSearch(root.children[0]);
        }
        if(root.children[1] != null){
            PostOrderSearch(root.children[1]);
        }
        q.Enqueue(new QueueCommand(1, root, null, -1));

    }
    public void BreadthFirstSearch(){
        Queue<TreeNode> queue = new Queue<TreeNode>();
        int i;
        queue.Enqueue(root);
        // enqueue searching to root
        q.Enqueue(new QueueCommand(1, root, null, -1));
        while(queue.Count > 0){
            TreeNode peek = queue.Peek();
            for(i = 0; i < peek.children.Length;i++){
                if (peek.children[i] != null){
                    q.Enqueue(new QueueCommand(1, peek.children[i], null,-1));
                    queue.Enqueue(peek.children[i]);
                }
            }
            q.Enqueue(new QueueCommand(2, queue.Dequeue(), null,-1));
        }
    }

    // Go through the queue
    public IEnumerator readQueue(float time)
    { 
        foreach (QueueCommand instr in q)
        {
            switch (instr.commandId)
            {
                case 0: // create a node
                    instr.node1.o = GameObject.CreatePrimitive(PrimitiveType.Sphere);
                    instr.node1.o.transform.position = new Vector3(0, 10-2*instr.node1.depth);
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
                case 4: // increment node1.childVolumes[0]
                    instr.node1.childVolumes[instr.additionalInfo]++;
                    break;
                case 5: // increment node1.childVolumes[1]
                    instr.node1.childVolumes[1]++;
                    break;
                case 6: 
                    yield return new WaitForSeconds(time);
                    break;
                case 7: 
                    break;
                case 8: 
                    break;
                default:
                    break;
            }
        }
    }
}
