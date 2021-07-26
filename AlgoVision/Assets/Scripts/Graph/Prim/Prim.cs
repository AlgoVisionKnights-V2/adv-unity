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
    //[SerializeField] GameObject activeEdge;
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
        queue.Enqueue(new QueueCommand(Commands.UPDATE_QUEUE_MESSAGE, queueMessage, Colors.BLUE));
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
        
        //activeEdge = GameObject.Instantiate(activeEdge);
        activeEdgeText = canvas.transform.GetChild(6).GetChild(1).GetComponent<TMP_Text>();
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
        queue.Enqueue(new QueueCommand(Commands.WAIT));
        Debug.Log("Starting at node " + main + " Enqueuing its edges");
        queue.Enqueue(new QueueCommand(Commands.COLOR_ONE,main,-1, Colors.RED));

        queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "Starting at node " + main + " Enqueuing its edges", Colors.WHITE));
        // We can guarantee no vertices have been visited yet so don't check for that
        for (int i = 0; i < vertices[main].neighborEdges.Count; i++) 
        {
            head.insert(vertices[main].neighborEdges[i]);
            Debug.Log("Enqueuing edge " + vertices[main].neighborEdges[i].name);
            queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "Enqueuing edge " + vertices[main].neighborEdges[i].name, Colors.WHITE));
            queue.Enqueue(new QueueCommand(Commands.COLOR_EDGE, vertices[main].neighborEdges[i].id, Colors.YELLOW));

            queueStringBuilder();

            queue.Enqueue(new QueueCommand(Commands.WAIT));
            queue.Enqueue(new QueueCommand(Commands.COLOR_EDGE, vertices[main].neighborEdges[i].id, Colors.WHITE));
            queue.Enqueue(new QueueCommand(Commands.WAIT));


        }
        // Lock the main and remove the junk data
        ((PrimVertex)vertices[main]).visited = true;
        head = head.next;
        queueStringBuilder();
        queue.Enqueue(new QueueCommand(Commands.COLOR_ONE,main,-1, Colors.BLACK));
        // Make writing easier by setting references to precast values
        PrimVertex a,b,c,d;
        while (head != null){
            queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "Dequeuing " + head.edge.name, Colors.WHITE));
            queue.Enqueue(new QueueCommand(Commands.EDGE_UPDATE, head.edge.name.ToString(), Colors.WHITE));
            queueStringBuilder();

            queue.Enqueue(new QueueCommand(Commands.WAIT));


            queue.Enqueue(new QueueCommand(Commands.COLOR_EDGE, head.edge.id, Colors.RED));
            queue.Enqueue(new QueueCommand(Commands.WAIT));

            a = (PrimVertex)vertices[head.edge.i];
            b = (PrimVertex)vertices[head.edge.j];

            if (a.visited && b.visited){
                queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "Both nodes have been visited. Discarding edge " + head.edge.name, Colors.WHITE));
                queue.Enqueue(new QueueCommand(Commands.WAIT));
                queue.Enqueue(new QueueCommand(Commands.EDGE_CANCEL, head.edge.id, Colors.WHITE));
                queueStringBuilder();
                head = head.next;
                queue.Enqueue(new QueueCommand(Commands.WAIT));

                continue;
            }

            if (!a.visited){
                queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, " Node " + a.value + " is not part of the tree. Enqueuing its edges", Colors.WHITE));
                queue.Enqueue(new QueueCommand(Commands.COLOR_ONE,a.value,-1, Colors.RED));
                queue.Enqueue(new QueueCommand(Commands.WAIT));
                a.visited = true;
                foreach(Edge e in a.neighborEdges){
                    c = (PrimVertex)vertices[e.i];
                    d = (PrimVertex)vertices[e.j];
                    if (!c.visited || !d.visited)
                    {
                        head.insert(e);
                        Debug.Log("Enqueuing edge " + e.name);
                        queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "Enqueuing edge " + e.name, Colors.WHITE));
                        queue.Enqueue(new QueueCommand(Commands.COLOR_EDGE, e.id, Colors.YELLOW));

                        queueStringBuilder();
                        queue.Enqueue(new QueueCommand(Commands.WAIT));
                        queue.Enqueue(new QueueCommand(Commands.COLOR_EDGE, e.id, Colors.WHITE));
                        queue.Enqueue(new QueueCommand(Commands.WAIT));


                    }
                    else
                    {
                        if(!(e.id == head.edge.id)){
                            queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "Edge " + e.name + " already enqueued", 0));
                            queue.Enqueue(new QueueCommand(Commands.COLOR_EDGE, e.id, Colors.YELLOW));
                            queueStringBuilder();
                            queue.Enqueue(new QueueCommand(Commands.WAIT));
                            queue.Enqueue(new QueueCommand(Commands.COLOR_EDGE, e.id, Colors.WHITE));
                            queue.Enqueue(new QueueCommand(Commands.WAIT));                            
                        }
                    }


                }
            }
            if (!b.visited){
                queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, " Node " + b.value + " is not part of the tree. Enqueuing its edges", Colors.WHITE));
                queue.Enqueue(new QueueCommand(Commands.COLOR_ONE,b.value,-1, Colors.RED));
                queue.Enqueue(new QueueCommand(Commands.WAIT));
                b.visited = true;
                foreach(Edge e in b.neighborEdges){
                    c = (PrimVertex)vertices[e.i];
                    d = (PrimVertex)vertices[e.j];
                    if (!c.visited || !d.visited)
                    {
                        head.insert(e);
                        queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "Enqueuing edge " + e.name, Colors.WHITE));
                        queue.Enqueue(new QueueCommand(Commands.COLOR_EDGE, e.id, Colors.YELLOW));

                        queueStringBuilder();
                        queue.Enqueue(new QueueCommand(Commands.WAIT));
                        queue.Enqueue(new QueueCommand(Commands.COLOR_EDGE, e.id, Colors.WHITE));
                        queue.Enqueue(new QueueCommand(Commands.WAIT));
                    }
                    else if(!(e.id == head.edge.id)){
                        queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "Edge " + e.name + " already enqueued", Colors.WHITE));
                        queue.Enqueue(new QueueCommand(Commands.COLOR_EDGE, e.id, Colors.YELLOW));
                        queueStringBuilder();
                        queue.Enqueue(new QueueCommand(Commands.WAIT));
                        queue.Enqueue(new QueueCommand(Commands.COLOR_EDGE, e.id, Colors.WHITE));
                        queue.Enqueue(new QueueCommand(Commands.WAIT));                            
                        }


                }
            }

            queue.Enqueue(new QueueCommand(Commands.COLOR_ONE,a.value,-1,Colors.BLACK));
            queue.Enqueue(new QueueCommand(Commands.COLOR_ONE,b.value,-1, Colors.BLACK));
            queue.Enqueue(new QueueCommand(Commands.COLOR_EDGE, head.edge.id, Colors.BLACK));
            queue.Enqueue(new QueueCommand(Commands.WAIT));

            queueStringBuilder();
            head = head.next;

        }
        queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "Minimum Spanning Tree made", Colors.GREEN));
        queue.Enqueue(new QueueCommand(Commands.EDGE_UPDATE, "", Colors.WHITE));

    }
    protected override void extendCommands(QueueCommand command)
    {
        throw new System.NotImplementedException();
    }
    protected override void extendVertexColors(int vertex, Colors colorId)
    {
        vertices[vertex].o.GetComponent<Renderer>().material.color = Color.green;
    }
}
