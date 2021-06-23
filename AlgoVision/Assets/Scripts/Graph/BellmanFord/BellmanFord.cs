using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using TMPro;
public class BellmanFord : Graph
{
    int main;
    [SerializeField] GameObject spherePrefab;
    [SerializeField] GameObject edgeValue;
    [SerializeField] GameObject vertexInfo;
    [SerializeField] GameObject canvas;
    bool changesMade;
    protected class BellmanFordVertex : Vertex{
        public BellmanFordVertex parent;
        public Edge parentEdge;
        public double weight;
        public bool visited;
        public BellmanFordVertex(int value, GameObject spherePrefab, GameObject vertexInfo, string defaultMessage) : base(value, spherePrefab, vertexInfo, defaultMessage)
        {
            weight = double.PositiveInfinity;
        }
    }
    // Start is called before the first frame update
    public void Setup(int main)
    {
        canvas = GameObject.Find("Canvas");
        vertices = new BellmanFordVertex[vertex];
        for(int i = 0; i < vertex; i++){
            vertices[i] = new BellmanFordVertex(i, spherePrefab, vertexInfo, "Parent:N/A" + "\n" + "Distance:∞");
        }
        for(int i = 0; i < edge; i++){
            edges[i] = new Edge(i, r.Next(1,21), edgeValue);
        }
        showText = canvas.transform.GetChild(4).GetComponent<TMP_Text>();

        //main = r.Next(vertex);
        this.main = main;
        vertices[main].info.text = "Parent:N/A" + "\n" + "Distance:0";

        BellmanFordAlgorithm();
        //StartCoroutine(readQueue());       
    }
    void BellmanFordAlgorithm(){
        int i,j,k;
        ((BellmanFordVertex)vertices[main]).weight = 0;
        queue.Enqueue(new QueueCommand(0,-1,-1));
        queue.Enqueue(new QueueCommand(1, main, -1, 4));
        queue.Enqueue(new QueueCommand(5, "Node " + main + " is main node", 4));
        queue.Enqueue(new QueueCommand(0, -1,-1, -1));
        BellmanFordVertex m, n;
        for(i = 0; i < vertex; i++){
            changesMade = false;
            for(j = 0; j < vertex; j++){
                ((BellmanFordVertex)vertices[j]).visited = false;
            }
            for(j = 0; j < vertex; j++){
                // color the active vertex
                queue.Enqueue(new QueueCommand(1, j, -1, 5));
                queue.Enqueue(new QueueCommand(5, "Checking vertex " + j + " and its neighbors", 5));

                queue.Enqueue(new QueueCommand(0, -1,-1, -1));
                // skip the vertex if it hasn't been reached
                if (double.IsPositiveInfinity(((BellmanFordVertex)vertices[j]).weight)){
                    queue.Enqueue(new QueueCommand(5, "Node cannot reach main. Skipping index " + j, 5));
                    queue.Enqueue(new QueueCommand(0, -1,-1, -1));
                    queue.Enqueue(new QueueCommand(1,vertices[j].value,-1, 0));
                    continue;
                }
                ((BellmanFordVertex)vertices[j]).visited = true;
                m = (BellmanFordVertex)vertices[j];
                // Checking through each neighbor
                for(k = 0; k < m.neighbors.Count; k++){
                    n = (BellmanFordVertex)m.neighbors[k];
                    if (n.visited){
                        continue;
                    }
                    queue.Enqueue(new QueueCommand(0,-1,-1));
                    queue.Enqueue(new QueueCommand(2, m.value, n.value, 2));
                    queue.Enqueue(new QueueCommand(5, "Compare " + m.value + " to " + n.value, 2));
                    queue.Enqueue(new QueueCommand(0,-1,-1));

                    if (m.weight + m.neighborEdges[k].weight < n.weight){
                        if(n.parent != null){
                            queue.Enqueue(new QueueCommand(3, n.parentEdge.id, 2));
                        }
                        changesMade = true;
                        n.parent = m;
                        n.parentEdge = m.neighborEdges[k];
                        queue.Enqueue(new QueueCommand(5, "Distance through " + m.value + " is less than the current distance.", 1));
                        queue.Enqueue(new QueueCommand(0,-1,-1));
                        queue.Enqueue(new QueueCommand(3, n.parentEdge.id, 1));
                        queue.Enqueue(new QueueCommand(5, ""+n.value+"'s parent is now "+m.value, 1));
                        queue.Enqueue(new QueueCommand(4, n.value, "Parent:" + m.value + "\n" + "Distance: " + (n.weight == double.PositiveInfinity ? "∞" : n.weight.ToString())));
                        queue.Enqueue(new QueueCommand(0, -1, -1, -1));
    
                        n.weight = m.weight + m.neighborEdges[k].weight;
                        queue.Enqueue(new QueueCommand(5, "" + n.value + "'s distance is now " + n.weight, 1));
                        queue.Enqueue(new QueueCommand(4, n.value, "Parent:" + n.parent.value + "\n" + "Distance:" + n.weight));
                    }
                    queue.Enqueue(new QueueCommand(0,-1,-1));
                    if(m.value == main){
                        queue.Enqueue(new QueueCommand(1,main,-1, 5));
                        queue.Enqueue(new QueueCommand(1,n.value,-1,0));
                    }
                    else if(n.value == main){
                        queue.Enqueue(new QueueCommand(1,main,-1, 4));
                        queue.Enqueue(new QueueCommand(1,m.value,-1,0));                        
                    }
                    else{
                        queue.Enqueue(new QueueCommand(1,n.value,-1, 0));
                        queue.Enqueue(new QueueCommand(1,m.value,-1, 5));  
                    }
                }
                if (m.value == main){
                    queue.Enqueue(new QueueCommand(1,main,-1, 4));
                }
                else{
                    queue.Enqueue(new QueueCommand(1,m.value,-1, 0));
                }
                queue.Enqueue(new QueueCommand(0, -1,-1));

            }
            if(!changesMade){
                queue.Enqueue(new QueueCommand(5, "No changes happened this loop.", 4));
                queue.Enqueue(new QueueCommand(0,-1,-1));                
                break;
            }
            else{
                queue.Enqueue(new QueueCommand(5, "Changes happened this loop. Repeating", 0));
                queue.Enqueue(new QueueCommand(0,-1,-1));                 
            }
        }
    }
    protected override void extendCommands(QueueCommand command)
    {
        throw new NotImplementedException();
    }
    protected override void extendVertexColors(int vertex, short colorId)
    {
         vertices[vertex].o.GetComponent<Renderer>().material.color = Color.green;
    }
}
