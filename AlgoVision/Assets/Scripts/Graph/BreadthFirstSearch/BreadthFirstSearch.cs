using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using System;

public class BreadthFirstSearch : SearchGraph
{
    [SerializeField] GameObject spherePrefab;
    [SerializeField] GameObject listRectangle;
    [SerializeField] GameObject canvas;
    int main;
    List list;
    protected class BFSVertex : Vertex{
        public bool enqueued;
        public BFSVertex(int value, GameObject spherePrefab) : base(value, spherePrefab)
        {
            enqueued = false;
        }
    }    
    // A linked list of DijsktraVertex. Insertion is in order of vertex weight
    protected class List{
        public ListNode head, tail;
        public int count;
        public string queueString;

        public class ListNode{
            public BFSVertex vertex;
            public ListNode next;
            public ListNode(BFSVertex v){
                vertex = v;
                next = null;
            }
        }
        // Constructing the List requires the main vertex to be passed in initially
        public List(BFSVertex vertex){
            queueString = "";
            count = 1;
            head = new ListNode(vertex);
            tail = head;
            vertex.enqueued = true;
        }
        // Insert at the tail
        public void insert(BFSVertex v){
            Debug.Log(v.enqueued);
            if (v.enqueued){
                return;
            }
            ListNode newNode = new ListNode(v);
            tail.next = newNode;
            tail = newNode;
            v.enqueued = true;
            count++;
            createQueueString();
        }
        // Jump to next item in list;
        public void next(){
            if(count != 0){
                count--;
                head = head.next;
            }
            return;
        }
        protected void createQueueString(){
            queueString = "";
            ListNode temp = head;
            while(temp != null){
                queueString += temp.vertex.value.ToString() + "│";
                temp = temp.next;
            }
        }
    }

    public void Setup(int main)
    {
        vertices = new BFSVertex[vertex];
        canvas = GameObject.Find("Canvas");
        for (int i = 0; i < vertex; i++){
            vertices[i] = new BFSVertex(i, spherePrefab);
        }
        for(int i = 0; i < edge; i++){
            edges[i] = new Edge(i);
        }
        listRectangle = GameObject.Instantiate(listRectangle);
        listText = listRectangle.transform.GetChild(1).GetComponent<TextMeshPro>();
        
        showText = canvas.transform.GetChild(3).GetComponent<TMP_Text>();
        //setCam();
        this.main = main;
        BFS(main);
        //StartCoroutine(readQueue());        
    }
    protected void BFS(int main){
        list = new List((BFSVertex)vertices[main]);
        int i, currentVertex;
        BFSVertex v;
        queue.Enqueue(new QueueCommand(0, -1, -1));
        queue.Enqueue(new QueueCommand(5, "Beginning search at vertex " + main, -1));
        queue.Enqueue(new QueueCommand(6, list.queueString, -1));

        queue.Enqueue(new QueueCommand(1, main, -1, 1));
        queue.Enqueue(new QueueCommand(0, -1, -1));
        while(list.count > 0){
            for(i = 0; i < list.head.vertex.neighbors.Count; i++){
                v = (BFSVertex)(list.head.vertex.neighbors[i]);
                queue.Enqueue(new QueueCommand(5, "Checking neighbor " + v.value, -1));
                queue.Enqueue(new QueueCommand(3, list.head.vertex.neighborEdges[i].id, 3));
                queue.Enqueue(new QueueCommand(0, -1, -1));
                if(!v.enqueued)
                {
                    list.insert(v);
                    queue.Enqueue(new QueueCommand(5, "" + v.value + " not previously enqueued, Adding to queue", -1));
                    queue.Enqueue(new QueueCommand(1, v.value, -1, 1));
                    queue.Enqueue(new QueueCommand(6, list.queueString, -1));

                    queue.Enqueue(new QueueCommand(0, -1, -1));
                }
                else{
                    queue.Enqueue(new QueueCommand(5, "" + v.value + " was previously enqueued", -1));
                    queue.Enqueue(new QueueCommand(0, -1, -1));
                }
                queue.Enqueue(new QueueCommand(3, list.head.vertex.neighborEdges[i].id, 2));

            }
            queue.Enqueue(new QueueCommand(1, list.head.vertex.value, -1, 3));
            queue.Enqueue(new QueueCommand(0, -1, -1));
            list.next();
        }
    }
    protected override void extendCommands(QueueCommand command)
    {
        throw new System.NotImplementedException();
    }
    protected override void extendVertexColors(int vertex, short colorId)
    {
        throw new System.NotImplementedException();
    }
}
