using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using System;

public class DepthFirstSearch : SearchGraph
{
    [SerializeField] GameObject spherePrefab;
    //[SerializeField] GameObject listRectangle;
    [SerializeField] GameObject canvas;
    int main;
    protected class DFSVertex : Vertex{
        public bool visited;
        public DFSVertex(int value, GameObject spherePrefab) : base(value, spherePrefab)
        {
            visited = false;
        }
    }    

    public void Setup(int main)
    {
        vertices = new DFSVertex[vertex];
        canvas = GameObject.Find("Canvas");
        for (int i = 0; i < vertex; i++){
            vertices[i] = new DFSVertex(i, spherePrefab);
        }
        for(int i = 0; i < edge; i++){
            edges[i] = new Edge(i);
        }
        //listRectangle = GameObject.Instantiate(listRectangle);
        //listText = listRectangle.transform.GetChild(1).GetComponent<TextMeshPro>();
        
        showText = canvas.transform.GetChild(3).GetComponent<TMP_Text>();
        //setCam();
        this.main = main;
        queue.Enqueue(new QueueCommand(5, "Beginning Depth-frst search at " + main, 1));

        DFS(main, -1);
        //StartCoroutine(readQueue());        
    }
    protected void DFS(int node, int prevEdgeId){
        DFSVertex v;
        Color original;
        int i;
        ((DFSVertex)vertices[node]).visited = true;
        // Color the current node yellow because that's the current node
        queue.Enqueue(new QueueCommand(1, node, -1, 5));
        queue.Enqueue(new QueueCommand(5, "Visiting vertex " + node, 1));
        queue.Enqueue(new QueueCommand(0, -1, -1));

        for (i = 0; i < vertices[node].neighbors.Count; i++){
            v = (DFSVertex)(vertices[node].neighbors[i]);
            if(vertices[node].neighborEdges[i].id == prevEdgeId){
                continue;
            }

            // color the edge we're checking red. We don't know yet if we're jumping 
            queue.Enqueue(new QueueCommand(5, "Checking neighbor " + v.value, 1));
            queue.Enqueue(new QueueCommand(3, vertices[node].neighborEdges[i].id, 3));
            queue.Enqueue(new QueueCommand(0, -1, -1));
            // We'll want to change the connecting edge to black
            if (!v.visited){
                // Make the edge black. We're jumping
                queue.Enqueue(new QueueCommand(3, vertices[node].neighborEdges[i].id, 1));
                queue.Enqueue(new QueueCommand(1, node, -1, 1));
                queue.Enqueue(new QueueCommand(0, -1, -1));
                Debug.Log("Visiting neighbor Vertex " + v.value);

                DFS(v.value, vertices[node].neighborEdges[i].id);
                queue.Enqueue(new QueueCommand(5, "returning to " + node, 1));

                queue.Enqueue(new QueueCommand(1, node, -1, 5));
            }
            // we'll want to change the connecting edge back to white
            queue.Enqueue(new QueueCommand(3, vertices[node].neighborEdges[i].id, 2));
            queue.Enqueue(new QueueCommand(0, -1, -1));

        }
        queue.Enqueue(new QueueCommand(5, "All neighbors visited. Returning.", 1));
        queue.Enqueue(new QueueCommand(1, node, -1, 3));
        queue.Enqueue(new QueueCommand(0, -1, -1));
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
