/*
    Prim's algorithm creates a minimum spanning tree.
    One vertex is randomly selected and each of its edges are placed in a priority queue
    For each edge in the queue, the two vertices it connects are checked.
    If a vertex is unvisited, add all its edges into the priority queue, 
        add the edge to the MST, and set the vertex as visited
    Otherwise, discard the edge

    End result is a minimum spanning tree with the smallest total edge value possible
*/

using System.Collections;
using System.Collections.Generic;
using System;
using Random = System.Random;
using UnityEngine; // needed for Unity stuff
using TMPro;
public class Prim : GraphPrim
{
    [SerializeField] GameObject spherePrefab;
    [SerializeField] GameObject edgeValue;
    [SerializeField] GameObject vertexInfo;
    [SerializeField] GameObject listRectangle;
    [SerializeField] GameObject activeEdge;
    [SerializeField] GameObject canvas;
    int main;
    protected static List head;
    //protected static TextMeshPro listText;

    public static string queueMessage;
    // This extends the Graph.Vertex class by adding a visited bool
    // visited tracks if a vertex has been added to the minimum spanning tree

    protected class PrimVertex : Vertex{
        public bool visited;
        public PrimVertex(int value, GameObject spherePrefab, GameObject vertexInfo, string defaultMessage) : base(value, spherePrefab, vertexInfo, defaultMessage)
        {
            visited = false;
        }
    }    

    // The priority queue is a linked list
    // The list is sorted based on the edge weight
    protected class List{
        public Edge edge;
        public List next;

        public List(Edge edge){
            this.edge = edge;
            next = null;
        }
        public void insert(Edge e){
            List temp1, temp2;
            temp1 = head;
            if (temp1 == null){
                temp1 = new List(e);
                return;
            }
            while (temp1.next != null && temp1.next.edge.weight < e.weight){
                temp1 = temp1.next;
            }
            temp2 = temp1.next;
            temp1.next = new List(e);
            temp1.next.next = temp2;
        }

    }

    private void queueStringBuilder()
    {
        List reader = head.next;
        queueMessage = "";
  
        while (reader != null)
        {
            queueMessage += (queueMessage == "") ? reader.edge.name + ":" + reader.edge.weight : "│" + reader.edge.name + ":" + reader.edge.weight;
            reader = reader.next;
        }
        
        Debug.Log(queueMessage);
        queue.Enqueue(new QueueCommand(6, queueMessage, 1));
    }
    public void Setup(int main)
    {
        vertices = new PrimVertex[vertex];
        canvas = GameObject.Find("Canvas");
        for (int i = 0; i < vertex; i++){
            vertices[i] = new PrimVertex(i, spherePrefab, vertexInfo, "");
        }
        for(int i = 0; i < edge; i++){
            edges[i] = new Edge(i, r.Next(1,21), edgeValue);
        }
        listRectangle = GameObject.Instantiate(listRectangle);
        listText = listRectangle.transform.GetChild(1).GetComponent<TextMeshPro>();
        
        activeEdge = GameObject.Instantiate(activeEdge);
        activeEdgeText = activeEdge.transform.GetChild(1).GetComponent<TextMeshPro>();
        activeEdgeText.text = "";
        showText = canvas.transform.GetChild(3).GetComponent<TMP_Text>();
        //setCam();
        this.main = main;
        PrimAlgorithm();
        //BreadthFirstSearch(main);
        //StartCoroutine(readQueue());        
    }
    void PrimAlgorithm(){
        head = new List(vertices[main].neighborEdges[0]); // junk data to initialize
        queue.Enqueue(new QueueCommand(0, -1, -1));
        Debug.Log("Starting at node " + main + " Enqueuing its edges");
        queue.Enqueue(new QueueCommand(1,main,-1, 2));

        queue.Enqueue(new QueueCommand(5, "Starting at node " + main + " Enqueuing its edges", 0));
        // We can guarantee no vertices have been visited yet so don't check for that
        for (int i = 0; i < vertices[main].neighborEdges.Count; i++) 
        {
            head.insert(vertices[main].neighborEdges[i]);
            Debug.Log("Enqueuing edge " + vertices[main].neighborEdges[i].name);
            queue.Enqueue(new QueueCommand(5, "Enqueuing edge " + vertices[main].neighborEdges[i].name, 0));
            queue.Enqueue(new QueueCommand(3, vertices[main].neighborEdges[i].id, 5));

            queueStringBuilder();

            queue.Enqueue(new QueueCommand(0, -1, -1));
            queue.Enqueue(new QueueCommand(3, vertices[main].neighborEdges[i].id, 2));
            queue.Enqueue(new QueueCommand(0, -1, -1));


        }
        // Lock the main and remove the junk data
        ((PrimVertex)vertices[main]).visited = true;
        head = head.next;
        queueStringBuilder();
        queue.Enqueue(new QueueCommand(1,main,-1, 3));
        // Make writing easier by setting references to precast values
        PrimVertex a,b,c,d;
        while (head != null){
            queue.Enqueue(new QueueCommand(5, "Dequeuing " + head.edge.name, 0));
            queue.Enqueue(new QueueCommand(8, head.edge.name.ToString(), 0));
            queueStringBuilder();

            queue.Enqueue(new QueueCommand(0, -1, -1));


            queue.Enqueue(new QueueCommand(3, head.edge.id, 3));
            queue.Enqueue(new QueueCommand(0,-1,-1));

            a = (PrimVertex)vertices[head.edge.i];
            b = (PrimVertex)vertices[head.edge.j];

            if (a.visited && b.visited){
                queue.Enqueue(new QueueCommand(5, "Both nodes have been visited. Discarding edge " + head.edge.name, 0));
                queue.Enqueue(new QueueCommand(0, -1, -1));
                queue.Enqueue(new QueueCommand(7, head.edge.id, 0));
                queueStringBuilder();
                head = head.next;
                queue.Enqueue(new QueueCommand(0,-1,-1));

                continue;
            }

            if (!a.visited){
                queue.Enqueue(new QueueCommand(5, " Node " + a.value + " is not part of the tree. Enqueuing its edges", 0));
                queue.Enqueue(new QueueCommand(1,a.value,-1,2));
                queue.Enqueue(new QueueCommand(0, -1, -1));
                a.visited = true;
                foreach(Edge e in a.neighborEdges){
                    c = (PrimVertex)vertices[e.i];
                    d = (PrimVertex)vertices[e.j];
                    if (!c.visited || !d.visited)
                    {
                        head.insert(e);
                        Debug.Log("Enqueuing edge " + e.name);
                        queue.Enqueue(new QueueCommand(5, "Enqueuing edge " + e.name, 0));
                        queue.Enqueue(new QueueCommand(3, e.id, 5));

                        queueStringBuilder();
                        queue.Enqueue(new QueueCommand(0, -1, -1));
                        queue.Enqueue(new QueueCommand(3, e.id, 2));
                        queue.Enqueue(new QueueCommand(0, -1, -1));


                    }
                    else
                    {
                        if(!(e.id == head.edge.id)){
                            queue.Enqueue(new QueueCommand(5, "Edge " + e.name + " already enqueued", 0));
                            queue.Enqueue(new QueueCommand(3, e.id, 5));
                            queueStringBuilder();
                            queue.Enqueue(new QueueCommand(0, -1, -1));
                            queue.Enqueue(new QueueCommand(3, e.id, 2));
                            queue.Enqueue(new QueueCommand(0, -1, -1));                            
                        }
                    }


                }
            }
            if (!b.visited){
                queue.Enqueue(new QueueCommand(5, " Node " + b.value + " is not part of the tree. Enqueuing its edges", 0));
                queue.Enqueue(new QueueCommand(1,b.value,-1,2));
                queue.Enqueue(new QueueCommand(0, -1, -1));
                b.visited = true;
                foreach(Edge e in b.neighborEdges){
                    c = (PrimVertex)vertices[e.i];
                    d = (PrimVertex)vertices[e.j];
                    if (!c.visited || !d.visited)
                    {
                        head.insert(e);
                        queue.Enqueue(new QueueCommand(5, "Enqueuing edge " + e.name, 0));
                        queue.Enqueue(new QueueCommand(3, e.id, 5));

                        queueStringBuilder();
                        queue.Enqueue(new QueueCommand(0, -1, -1));
                        queue.Enqueue(new QueueCommand(3, e.id, 2));
                        queue.Enqueue(new QueueCommand(0, -1, -1));
                    }
                    else if(!(e.id == head.edge.id)){
                        queue.Enqueue(new QueueCommand(5, "Edge " + e.name + " already enqueued", 0));
                        queue.Enqueue(new QueueCommand(3, e.id, 5));
                        queueStringBuilder();
                        queue.Enqueue(new QueueCommand(0, -1, -1));
                        queue.Enqueue(new QueueCommand(3, e.id, 2));
                        queue.Enqueue(new QueueCommand(0, -1, -1));                            
                        }


                }
            }

            queue.Enqueue(new QueueCommand(1,a.value,-1,3));
            queue.Enqueue(new QueueCommand(1,b.value,-1,3));
            queue.Enqueue(new QueueCommand(3, head.edge.id, 1));
            queue.Enqueue(new QueueCommand(0,-1,-1));

            queueStringBuilder();
            head = head.next;

        }
        queue.Enqueue(new QueueCommand(5, "Minimum Spanning Tree made", 4));
        queue.Enqueue(new QueueCommand(8, "", 0));

    }
    protected override void extendCommands(QueueCommand command)
    {
        throw new System.NotImplementedException();
    }
    protected override void extendVertexColors(int vertex, short colorId)
    {
        vertices[vertex].o.GetComponent<Renderer>().material.color = Color.green;
    }
}
