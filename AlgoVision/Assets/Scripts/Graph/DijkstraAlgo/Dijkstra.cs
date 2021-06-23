using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using TMPro;
public class Dijkstra : Graph
{
int main; // The primary vertex which all other vertices must reach
    protected static List head; // a linked list of the order each vertex will be visited in the algorithm
    [SerializeField] GameObject spherePrefab;
    [SerializeField] GameObject edgeValue;
    [SerializeField] GameObject vertexInfo;
    [SerializeField] GameObject canvas;
    // Extends a regular vertex by including the distance from the main vertex, its parent vertex and whether it has been visited
    protected class DijkstraVertex : Vertex{
        public DijkstraVertex parent;
        public Edge parentEdge;
        public double weight;
        public bool visited;
        public DijkstraVertex(int value, GameObject spherePrefab, GameObject vertexInfo, string defaultMessage) : base(value, spherePrefab, vertexInfo, defaultMessage)
        {
            weight = double.PositiveInfinity;
        }
    }
    // A linked list of DijsktraVertex. Insertion is in order of vertex weight
    protected class List{
        public DijkstraVertex vertex;
        public List next;
        public List(DijkstraVertex vertex){
            this.vertex = vertex;
            next = null;
        }
        public void insert(DijkstraVertex v){
            List temp1, temp2;
            temp1 = head;
            
            while (temp1.next != null && temp1.next.vertex.weight < v.weight){
                temp1 = temp1.next;
            }
            temp2 = temp1.next;
            temp1.next = new List(v);
            temp1.next.next = temp2;
        }
    }   
    public void Setup(int main)
    {

        vertices = new DijkstraVertex[vertex];
        canvas = GameObject.Find("Canvas");
        for (int i = 0; i < vertex; i++){
            vertices[i] = new DijkstraVertex(i, spherePrefab, vertexInfo, "Parent:N/A" + "\n" + "Distance:∞");
        }
        for(int i = 0; i < edge; i++){
            edges[i] = new Edge(i, r.Next(1,21), edgeValue);
        }
        showText = canvas.transform.GetChild(5).GetComponent<TMP_Text>();
        this.main = main;
        vertices[main].info.text = "Parent:N/A" + "\n" + "Distance:0";
        DijkstraAlgorithm();
    }
    void DijkstraAlgorithm(){
        queue.Enqueue(new QueueCommand(0, -1, -1, -1));
        // The algorithm will run until List is empty. At that point, every vertex should have been visited
        head = new List((DijkstraVertex)vertices[main]);
         ((DijkstraVertex)vertices[main]).weight = 0;
         queue.Enqueue(new QueueCommand(1, main, -1, 4));
        queue.Enqueue(new QueueCommand(5, "Node " + main + " is main node", 4));
         queue.Enqueue(new QueueCommand(0, -1,-1, -1));
        

        while (head != null){
             // The implementation will cause some vertices to show up multiple times.
             // So we'll check if they've been visited first
             if (head.vertex.visited){
                 head = head.next;
                 continue;
             }
            queue.Enqueue(new QueueCommand(5, "Node " + head.vertex.value + " is the current head node", 5));
            queue.Enqueue(new QueueCommand(1, head.vertex.value, -1, 5));
            queue.Enqueue(new QueueCommand(0, -1, -1, -1));
            // Check the head's neighbor vertices. Check if the current fastest route is through them.
            // If yes, update their weight and parent to head and then insert them into List
            for (int i = 0; i < head.vertex.neighbors.Count; i++){
                 DijkstraVertex v = (DijkstraVertex)(head.vertex.neighbors[i]);
                 if(v.visited){
                     continue;
                 }
                 queue.Enqueue(new QueueCommand(2, head.vertex.value, v.value, 2));
                queue.Enqueue(new QueueCommand(5, "Compare " + head.vertex.value + " to " + v.value, 2));
                queue.Enqueue(new QueueCommand(0, -1,-1, -1));
                 if(head.vertex.weight + head.vertex.neighborEdges[i].weight < v.weight){
                     if(v.parent != null){
                         queue.Enqueue(new QueueCommand(3, v.parentEdge.id, 2));
                     }
                     v.parent = head.vertex;
                     v.parentEdge = head.vertex.neighborEdges[i];
                 

                    queue.Enqueue(new QueueCommand(3, v.parentEdge.id, 1));
                    queue.Enqueue(new QueueCommand(5, "Distance through " + head.vertex.value + " is less than the current distance.", 1));
                    queue.Enqueue(new QueueCommand(0, -1, -1, -1));
                    queue.Enqueue(new QueueCommand(5, ""+v.value+"'s parent is now "+head.vertex.value, 1));
                    queue.Enqueue(new QueueCommand(4, v.value, "Parent:" + head.vertex.value + "\n" + "Distance: " + (v.weight == double.PositiveInfinity ? "∞" : v.weight.ToString())));
                    queue.Enqueue(new QueueCommand(0, -1, -1, -1));

                    v.weight = head.vertex.weight + head.vertex.neighborEdges[i].weight;
                    head.insert(v);
                    queue.Enqueue(new QueueCommand(5, "" + v.value + "'s distance is now " + v.weight, 1));

                    queue.Enqueue(new QueueCommand(4, v.value, "Parent:" + head.vertex.value + "\n" + "Distance:" + v.weight));
                    queue.Enqueue(new QueueCommand(0, -1, -1, -1));

                }
                else
                {
                    queue.Enqueue(new QueueCommand(5, "Distance through " + head.vertex.value + " is not less than the current distance. No change", 0));
                    queue.Enqueue(new QueueCommand(0, -1, -1, -1));
                }
  
                queue.Enqueue(new QueueCommand(1, head.vertex.value, -1, 5));
                queue.Enqueue(new QueueCommand(1,v.value, -1, 1));
                queue.Enqueue(new QueueCommand(0, -1,-1, -1));
                 

             }  
             head.vertex.visited = true;
            queue.Enqueue(new QueueCommand(5, "Finished with Node " + head.vertex.value, 0));

            if (head.vertex.value != main){
                 queue.Enqueue(new QueueCommand(1, head.vertex.value, 0, 3));
                //vertices[head.vertex.value].info.text = "Parent:" + head.vertex.parent.value + "\n" + "Distance:" + head.vertex.weight;
                queue.Enqueue(new QueueCommand(0, -1,-1, -1)); 
            }
            else
            {
                queue.Enqueue(new QueueCommand(1, head.vertex.value, 0, 4));
                //vertices[head.vertex.value].info.text = "Parent:" + head.vertex.parent.value + "\n" + "Distance:" + head.vertex.weight;
                queue.Enqueue(new QueueCommand(0, -1, -1, -1));
            }
            
             head = head.next;
         }

        queue.Enqueue(new QueueCommand(5, "Found shortest paths from Node " + main +  " to all nodes", 4));

    }
    protected override void extendCommands(QueueCommand command)
    {
        throw new NotImplementedException();
    }
    protected override void extendVertexColors(int vertex, short colorId)
    {
         vertices[vertex].o.GetComponent<Renderer>().material.color = Color.green;
    }
    /* int main; // The primary vertex which all other vertices must reach
     protected static List head; // a linked list of the order each vertex will be visited in the algorithm

     // Extends a regular vertex by including the distance from the main vertex, its parent vertex and whether it has been visited
     protected class DijkstraVertex : Vertex{
         public DijkstraVertex parent;
         public double weight;
         public bool visited;
         public DijkstraVertex(int value) : base(value){
             weight = double.PositiveInfinity;
         }
     }
     // A linked list of DijsktraVertex. Insertion is in order of vertex weight
     protected class List{
         public DijkstraVertex vertex;
         public List next;
         public List(DijkstraVertex vertex){
             this.vertex = vertex;
             next = null;
         }
         public void insert(DijkstraVertex v){
             List temp1, temp2;
             temp1 = head;

             while (temp1.next != null && temp1.next.vertex.weight < v.weight){
                 temp1 = temp1.next;
             }
             temp2 = temp1.next;
             temp1.next = new List(v);
             temp1.next.next = temp2;
         }
     }
     // Start is called before the first frame update
     void Start()
     {
         n = 7;//r.Next(2, 21);
         totalEdges = 13;//r.Next(n-1, n*(n-1)/2);
         theta = 2*Math.PI / n;
         edge = new LineRenderer[n,n];
         matrix = new int[n, n];
         vertices = new DijkstraVertex[n];
         for(int i = 0; i < n; i++){
             vertices[i] = new DijkstraVertex(i);
         }
         setCam();
         buildGrid();
         main = r.Next(n);
         //DijkstraAlgorithm();
         //StartCoroutine(readQueue());
        // rebuild();
     }

     /*void DijkstraAlgorithm(){
         // The algorithm will run until List is empty. At that point, every vertex should have been visited
         head = new List((DijkstraVertex)vertices[main]);
         ((DijkstraVertex)vertices[main]).weight = 0;
         queue.Enqueue(new QueueCommand(1, main, -1, 4));
         queue.Enqueue(new QueueCommand(0, -1,-1, -1));
         while(head != null){
             // The implementation will cause some vertices to show up multiple times.
             // So we'll check if they've been visited first
             if (head.vertex.visited){
                 head = head.next;
                 continue;
             }

             // Check the head's neighbor vertices. Check if the current fastest route is through them.
             // If yes, update their weight and parent to head and then insert them into List
             foreach(DijkstraVertex v in head.vertex.neighbors){
                 if(v.visited){
                     continue;
                 }
                 queue.Enqueue(new QueueCommand(2, head.vertex.value, v.value, 2));
                 queue.Enqueue(new QueueCommand(0, -1,-1, -1));
                 if(head.vertex.weight + matrix[head.vertex.value, v.value] < v.weight){
                     if(v.parent != null){
                         queue.Enqueue(new QueueCommand(3, v.value, v.parent.value, 2));
                     }
                     v.parent = head.vertex;
                     v.weight = head.vertex.weight + matrix[head.vertex.value, v.value];
                     head.insert(v);
                     queue.Enqueue(new QueueCommand(3, v.parent.value, v.value, 1));
                 }
                 if (head.vertex.value == main){
                     queue.Enqueue(new QueueCommand(1, main, -1, 4));
                     queue.Enqueue(new QueueCommand(1,v.value, -1, 1));
                     queue.Enqueue(new QueueCommand(0, -1,-1, -1));
                 }
                 else{
                     queue.Enqueue(new QueueCommand(2, head.vertex.value, v.value, 1));
                     queue.Enqueue(new QueueCommand(0, -1,-1, -1));                    
                 }
             }
             head.vertex.visited = true;
             if (head.vertex.value != main){
                 queue.Enqueue(new QueueCommand(1, head.vertex.value, 0, 3));
                 queue.Enqueue(new QueueCommand(0, -1,-1, -1));                
             }
             head = head.next;
         }

     }
     void rebuild(){
         // After finding a spanning tree, destroy all the edges then make new ones
         for(int i = 0; i < n; i++){
             for(int j = 0; j < n; j++){
                 Destroy(edge[i,j]);
             }
         }

         // i runs from all nodes from 0 to n. Whichever node was set to main will cause a null pointer exception since it doesn't have a parent
         // Instead of checking for null or catching an exception, it would be more efficient to skip when i = main
         for (int i = 0; i < main; i++){
             int j = ((DijkstraVertex)vertices[i]).parent.value;
             edge[vertices[i].value, j] = new GameObject("Line").AddComponent(typeof(LineRenderer)) as LineRenderer;
             edge[vertices[i].value, j].GetComponent<LineRenderer>().GetComponent<Renderer>().material.color = Color.white;
             edge[vertices[i].value, j].GetComponent<LineRenderer>().startWidth = .1f;
             edge[vertices[i].value, j].GetComponent<LineRenderer>().endWidth = .1f;
             edge[vertices[i].value, j].GetComponent<LineRenderer>().positionCount = 2;
             edge[vertices[i].value, j].GetComponent<LineRenderer>().useWorldSpace = true;

             //For drawing line in the world space, provide the x,y,z values
             edge[vertices[i].value, j].SetPosition(0, new Vector3(vertices[i].o.transform.position.x, vertices[i].o.transform.position.y, 0)); //x,y and z position of the starting point of the line
             edge[vertices[i].value, j].SetPosition(1, new Vector3(vertices[j].o.transform.position.x, vertices[j].o.transform.position.y, 0)); //x,y and z position of the starting point of the line
         }


         for (int i = main + 1; i < n; i++){
             int j = ((DijkstraVertex)vertices[i]).parent.value;
             edge[vertices[i].value, j] = new GameObject("Line").AddComponent(typeof(LineRenderer)) as LineRenderer;
             edge[vertices[i].value, j].GetComponent<LineRenderer>().GetComponent<Renderer>().material.color = Color.white;
             edge[vertices[i].value, j].GetComponent<LineRenderer>().startWidth = .1f;
             edge[vertices[i].value, j].GetComponent<LineRenderer>().endWidth = .1f;
             edge[vertices[i].value, j].GetComponent<LineRenderer>().positionCount = 2;
             edge[vertices[i].value, j].GetComponent<LineRenderer>().useWorldSpace = true;

             //For drawing line in the world space, provide the x,y,z values
             edge[vertices[i].value, j].SetPosition(0, new Vector3(vertices[i].o.transform.position.x, vertices[i].o.transform.position.y, 0)); //x,y and z position of the starting point of the line
             edge[vertices[i].value, j].SetPosition(1, new Vector3(vertices[j].o.transform.position.x, vertices[j].o.transform.position.y, 0)); //x,y and z position of the starting point of the line
         }
     }
     protected override void extendCommands(QueueCommand command)
     {
         throw new NotImplementedException();
     }
     protected override void extendVertexColors(int vertex, short colorId)
     {
         vertices[vertex].o.GetComponent<Renderer>().material.color = Color.green;
 
   /* int main; // The primary vertex which all other vertices must reach
    protected static List head; // a linked list of the order each vertex will be visited in the algorithm

    // Extends a regular vertex by including the distance from the main vertex, its parent vertex and whether it has been visited
    protected class DijkstraVertex : Vertex{
        public DijkstraVertex parent;
        public double weight;
        public bool visited;
        public DijkstraVertex(int value) : base(value){
            weight = double.PositiveInfinity;
        }
    }
    // A linked list of DijsktraVertex. Insertion is in order of vertex weight
    protected class List{
        public DijkstraVertex vertex;
        public List next;
        public List(DijkstraVertex vertex){
            this.vertex = vertex;
            next = null;
        }
        public void insert(DijkstraVertex v){
            List temp1, temp2;
            temp1 = head;
            
            while (temp1.next != null && temp1.next.vertex.weight < v.weight){
                temp1 = temp1.next;
            }
            temp2 = temp1.next;
            temp1.next = new List(v);
            temp1.next.next = temp2;
        }
    }
    // Start is called before the first frame update
    void Start()
    {
        n = 7;//r.Next(2, 21);
        totalEdges = 13;//r.Next(n-1, n*(n-1)/2);
        theta = 2*Math.PI / n;
        edge = new LineRenderer[n,n];
        matrix = new int[n, n];
        vertices = new DijkstraVertex[n];
        for(int i = 0; i < n; i++){
            vertices[i] = new DijkstraVertex(i);
        }
        setCam();
        buildGrid();
        main = r.Next(n);
        //DijkstraAlgorithm();
        //StartCoroutine(readQueue());
       // rebuild();
    }

    /*void DijkstraAlgorithm(){
        // The algorithm will run until List is empty. At that point, every vertex should have been visited
        head = new List((DijkstraVertex)vertices[main]);
        ((DijkstraVertex)vertices[main]).weight = 0;
        queue.Enqueue(new QueueCommand(1, main, -1, 4));
        queue.Enqueue(new QueueCommand(0, -1,-1, -1));
        while(head != null){
            // The implementation will cause some vertices to show up multiple times.
            // So we'll check if they've been visited first
            if (head.vertex.visited){
                head = head.next;
                continue;
            }

            // Check the head's neighbor vertices. Check if the current fastest route is through them.
            // If yes, update their weight and parent to head and then insert them into List
            foreach(DijkstraVertex v in head.vertex.neighbors){
                if(v.visited){
                    continue;
                }
                queue.Enqueue(new QueueCommand(2, head.vertex.value, v.value, 2));
                queue.Enqueue(new QueueCommand(0, -1,-1, -1));
                if(head.vertex.weight + matrix[head.vertex.value, v.value] < v.weight){
                    if(v.parent != null){
                        queue.Enqueue(new QueueCommand(3, v.value, v.parent.value, 2));
                    }
                    v.parent = head.vertex;
                    v.weight = head.vertex.weight + matrix[head.vertex.value, v.value];
                    head.insert(v);
                    queue.Enqueue(new QueueCommand(3, v.parent.value, v.value, 1));
                }
                if (head.vertex.value == main){
                    queue.Enqueue(new QueueCommand(1, main, -1, 4));
                    queue.Enqueue(new QueueCommand(1,v.value, -1, 1));
                    queue.Enqueue(new QueueCommand(0, -1,-1, -1));
                }
                else{
                    queue.Enqueue(new QueueCommand(2, head.vertex.value, v.value, 1));
                    queue.Enqueue(new QueueCommand(0, -1,-1, -1));                    
                }
            }
            head.vertex.visited = true;
            if (head.vertex.value != main){
                queue.Enqueue(new QueueCommand(1, head.vertex.value, 0, 3));
                queue.Enqueue(new QueueCommand(0, -1,-1, -1));                
            }
            head = head.next;
        }

    }
    void rebuild(){
        // After finding a spanning tree, destroy all the edges then make new ones
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                Destroy(edge[i,j]);
            }
        }
        
        // i runs from all nodes from 0 to n. Whichever node was set to main will cause a null pointer exception since it doesn't have a parent
        // Instead of checking for null or catching an exception, it would be more efficient to skip when i = main
        for (int i = 0; i < main; i++){
            int j = ((DijkstraVertex)vertices[i]).parent.value;
            edge[vertices[i].value, j] = new GameObject("Line").AddComponent(typeof(LineRenderer)) as LineRenderer;
            edge[vertices[i].value, j].GetComponent<LineRenderer>().GetComponent<Renderer>().material.color = Color.white;
            edge[vertices[i].value, j].GetComponent<LineRenderer>().startWidth = .1f;
            edge[vertices[i].value, j].GetComponent<LineRenderer>().endWidth = .1f;
            edge[vertices[i].value, j].GetComponent<LineRenderer>().positionCount = 2;
            edge[vertices[i].value, j].GetComponent<LineRenderer>().useWorldSpace = true;

            //For drawing line in the world space, provide the x,y,z values
            edge[vertices[i].value, j].SetPosition(0, new Vector3(vertices[i].o.transform.position.x, vertices[i].o.transform.position.y, 0)); //x,y and z position of the starting point of the line
            edge[vertices[i].value, j].SetPosition(1, new Vector3(vertices[j].o.transform.position.x, vertices[j].o.transform.position.y, 0)); //x,y and z position of the starting point of the line
        }


        for (int i = main + 1; i < n; i++){
            int j = ((DijkstraVertex)vertices[i]).parent.value;
            edge[vertices[i].value, j] = new GameObject("Line").AddComponent(typeof(LineRenderer)) as LineRenderer;
            edge[vertices[i].value, j].GetComponent<LineRenderer>().GetComponent<Renderer>().material.color = Color.white;
            edge[vertices[i].value, j].GetComponent<LineRenderer>().startWidth = .1f;
            edge[vertices[i].value, j].GetComponent<LineRenderer>().endWidth = .1f;
            edge[vertices[i].value, j].GetComponent<LineRenderer>().positionCount = 2;
            edge[vertices[i].value, j].GetComponent<LineRenderer>().useWorldSpace = true;

            //For drawing line in the world space, provide the x,y,z values
            edge[vertices[i].value, j].SetPosition(0, new Vector3(vertices[i].o.transform.position.x, vertices[i].o.transform.position.y, 0)); //x,y and z position of the starting point of the line
            edge[vertices[i].value, j].SetPosition(1, new Vector3(vertices[j].o.transform.position.x, vertices[j].o.transform.position.y, 0)); //x,y and z position of the starting point of the line
        }
    }
    protected override void extendCommands(QueueCommand command)
    {
        throw new NotImplementedException();
    }
    protected override void extendVertexColors(int vertex, short colorId)
    {
        vertices[vertex].o.GetComponent<Renderer>().material.color = Color.green;
    }*/
}
