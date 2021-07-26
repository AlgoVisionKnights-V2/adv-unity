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
        timer.Restart();
        int i,j,k;
        ((BellmanFordVertex)vertices[main]).weight = 0;
        queue.Enqueue(new QueueCommand(Commands.WAIT));
        queue.Enqueue(new QueueCommand(Commands.COLOR_ONE, main, -1, Colors.GREEN));
        queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "Node " + main + " is main node", Colors.GREEN));
        queue.Enqueue(new QueueCommand(Commands.WAIT));
        BellmanFordVertex m, n;
        for(i = 0; i < vertex; i++){
            changesMade = false;
            for(j = 0; j < vertex; j++){
                ((BellmanFordVertex)vertices[j]).visited = false;
            }
            for(j = 0; j < vertex; j++){
                // color the active vertex
                queue.Enqueue(new QueueCommand(Commands.COLOR_ONE, j, -1, Colors.YELLOW));
                queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "Checking vertex " + j + " and its neighbors", Colors.YELLOW));

                queue.Enqueue(new QueueCommand(Commands.WAIT));
                // skip the vertex if it hasn't been reached
                if (double.IsPositiveInfinity(((BellmanFordVertex)vertices[j]).weight)){
                    queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "Node cannot reach main. Skipping index " + j, Colors.YELLOW));
                    queue.Enqueue(new QueueCommand(Commands.WAIT));
                    queue.Enqueue(new QueueCommand(Commands.COLOR_ONE,vertices[j].value,-1, Colors.WHITE));
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
                    queue.Enqueue(new QueueCommand(Commands.WAIT ));
                    queue.Enqueue(new QueueCommand(Commands.COLOR_TWO, m.value, n.value, Colors.RED));
                    queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "Compare " + m.value + " to " + n.value, Colors.RED));
                    queue.Enqueue(new QueueCommand(Commands.WAIT ));

                    if (m.weight + m.neighborEdges[k].weight < n.weight){
                        if(n.parent != null){
                            queue.Enqueue(new QueueCommand(Commands.COLOR_EDGE, n.parentEdge.id, Colors.WHITE));
                        }
                        changesMade = true;
                        n.parent = m;
                        n.parentEdge = m.neighborEdges[k];
                        queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "Distance through " + m.value + " is less than the current distance.", Colors.BLUE));
                        queue.Enqueue(new QueueCommand(Commands.WAIT ));
                        queue.Enqueue(new QueueCommand(Commands.COLOR_EDGE, n.parentEdge.id, Colors.BLACK));
                        queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, ""+n.value+"'s parent is now "+m.value, Colors.BLUE));
                        queue.Enqueue(new QueueCommand(Commands.UPDATE_OBJECT_TEXT, n.value, "Parent:" + m.value + "\n" + "Distance: " + (n.weight == double.PositiveInfinity ? "∞" : n.weight.ToString())));
                        queue.Enqueue(new QueueCommand(Commands.WAIT));
    
                        n.weight = m.weight + m.neighborEdges[k].weight;
                        queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "" + n.value + "'s distance is now " + n.weight, Colors.BLUE));
                        queue.Enqueue(new QueueCommand(Commands.UPDATE_OBJECT_TEXT, n.value, "Parent:" + n.parent.value + "\n" + "Distance:" + n.weight));
                    }
                    queue.Enqueue(new QueueCommand(Commands.WAIT ));
                    if(m.value == main){
                        queue.Enqueue(new QueueCommand(Commands.COLOR_ONE,main,-1, Colors.YELLOW));
                        queue.Enqueue(new QueueCommand(Commands.COLOR_ONE,n.value,-1, Colors.WHITE));
                    }
                    else if(n.value == main){
                        queue.Enqueue(new QueueCommand(Commands.COLOR_ONE,main,-1, Colors.GREEN));
                        queue.Enqueue(new QueueCommand(Commands.COLOR_ONE,m.value,-1, Colors.WHITE));                        
                    }
                    else{
                        queue.Enqueue(new QueueCommand(Commands.COLOR_ONE,n.value,-1, Colors.WHITE));
                        queue.Enqueue(new QueueCommand(Commands.COLOR_ONE,m.value,-1, Colors.YELLOW));  
                    }
                }
                if (m.value == main){
                    queue.Enqueue(new QueueCommand(Commands.COLOR_ONE,main,-1, Colors.GREEN));
                }
                else{
                    queue.Enqueue(new QueueCommand(Commands.COLOR_ONE,m.value,-1, Colors.WHITE));
                }
                queue.Enqueue(new QueueCommand(Commands.WAIT));

            }
            if(!changesMade){
                queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "No changes happened this loop.", Colors.GREEN));
                queue.Enqueue(new QueueCommand(Commands.WAIT ));                
                break;
            }
            else{
                queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "Changes happened this loop. Repeating", Colors.WHITE));
                queue.Enqueue(new QueueCommand(Commands.WAIT ));                 
            }
        }
        timer.Stop();
        stopTime = timer.ElapsedMilliseconds;
    }
    protected override void extendCommands(QueueCommand command)
    {
        throw new NotImplementedException();
    }
    protected override void extendVertexColors(int vertex, Colors colorId)
    {
         vertices[vertex].o.GetComponent<Renderer>().material.color = Color.green;
    }
}
