using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using System;

public class DepthFirstSearch : SearchGraph
{
    [SerializeField] GameObject spherePrefab;
    [SerializeField] GameObject listRectangle;
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
        listRectangle = GameObject.Instantiate(listRectangle);
        //listText = listRectangle.transform.GetChild(1).GetComponent<TextMeshPro>();
        
        showText = canvas.transform.GetChild(3).GetComponent<TMP_Text>();
        //setCam();
        this.main = main;
        DFS(main);
        //StartCoroutine(readQueue());        
    }
    protected void DFS(int node){
        ((DFSVertex)vertices[node]).visited = true;
        Debug.Log("Visiting Vertex " + node);
        foreach(DFSVertex v in vertices[node].neighbors){
            if (!v.visited){
                Debug.Log("Visiting neighbor Vertex " + v.value);

                DFS(v.value);
            }
        }
        Debug.Log("Vertex " + node + "visited");
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
