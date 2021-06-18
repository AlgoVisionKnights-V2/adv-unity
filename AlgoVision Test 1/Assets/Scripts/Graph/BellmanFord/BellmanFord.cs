using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
public class BellmanFord : Graph
{
    int main;
    [SerializeField] GameObject spherePrefab;
    [SerializeField] GameObject edgeValue;
    [SerializeField] GameObject vertexInfo;
    bool changesMade;
    protected class BellmanFordVertex : Vertex{
        public BellmanFordVertex parent;
        public Edge parentEdge;
        public double weight;
        public bool visited;
        public BellmanFordVertex(int value, GameObject spherePrefab, GameObject vertexInfo) : base(value, spherePrefab, vertexInfo)
        {
            weight = double.PositiveInfinity;
        }
    }
    // Start is called before the first frame update
    public void Setup(int main)
    {
        vertices = new BellmanFordVertex[vertex];
        for(int i = 0; i < vertex; i++){
            vertices[i] = new BellmanFordVertex(i, spherePrefab, vertexInfo);
        }
        for(int i = 0; i < edge; i++){
            edges[i] = new Edge(i, r.Next(1,21), edgeValue);
        }
        //main = r.Next(vertex);
        this.main = main;
        BellmanFordAlgorithm();
        //StartCoroutine(readQueue());       
    }
    void BellmanFordAlgorithm(){
        int i,j,k;
        ((BellmanFordVertex)vertices[main]).weight = 0;
        queue.Enqueue(new QueueCommand(0,-1,-1));
        queue.Enqueue(new QueueCommand(1, main, -1, 4));
        BellmanFordVertex m, n;
        for(i = 0; i < vertex; i++){
            changesMade = false;
            for(j = 0; j < vertex; j++){
                ((BellmanFordVertex)vertices[j]).visited = false;
            }
            for(j = 0; j < vertex; j++){
                if (double.IsPositiveInfinity(((BellmanFordVertex)vertices[j]).weight)){
                    continue;
                }
                ((BellmanFordVertex)vertices[j]).visited = true;
                m = (BellmanFordVertex)vertices[j];
                for(k = 0; k < m.neighbors.Count; k++){
                    n = (BellmanFordVertex)m.neighbors[k];
                    if (n.visited){
                        continue;
                    }
                    queue.Enqueue(new QueueCommand(0,-1,-1));
                    queue.Enqueue(new QueueCommand(2, m.value, n.value, 2));
                    if (m.weight + m.neighborEdges[k].weight < n.weight){
                        if(n.parent != null){
                            queue.Enqueue(new QueueCommand(3, n.parentEdge.id, 2));
                        }
                        changesMade = true;
                        n.weight = m.weight + m.neighborEdges[k].weight;
                        n.parent = m;
                        n.parentEdge = m.neighborEdges[k];
                        queue.Enqueue(new QueueCommand(3, n.parentEdge.id, 1));
                        queue.Enqueue(new QueueCommand(4, n.value, "Parent:" + n.parent.value + "\n" + "Distance:" + n.weight));
                    }
                    queue.Enqueue(new QueueCommand(0,-1,-1));
                    if(m.value == main){
                        queue.Enqueue(new QueueCommand(1,main,-1, 4));
                        queue.Enqueue(new QueueCommand(1,n.value,-1,1));
                    }
                    else if(n.value == main){
                        queue.Enqueue(new QueueCommand(1,main,-1, 4));
                        queue.Enqueue(new QueueCommand(1,m.value,-1,1));                        
                    }
                    else{
                        queue.Enqueue(new QueueCommand(2, m.value, n.value, 1));
                    }
                }
            }
            if(!changesMade){
                break;
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
