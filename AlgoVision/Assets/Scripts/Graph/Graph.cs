using System.Collections;
using System.Collections.Generic;
using System;
using Random = System.Random;
using UnityEngine; // needed for Unity stuff
using TMPro;
public abstract class Graph : Algorithm // MonoBehaviour is the root class for Unity scripts
{
    // Store vertex values of their coordinate
    public static int[,] vertexBluePrints = new int[,]{{0,2},{2,4},{2,0},{6,4},{6,0},{8,2}};
    public static float[,] vertexText = new float[,] { { -2.5f, 2f }, { 2f, 5.5f }, { 2f, -1.5f }, { 6f, 5.5f }, { 6f, -1.5f }, { 10f, 2f } };
    // Store edge values of vertex neighbors
    public static int [,] edgeBluePrints = new int[,]{{0,1},{0,2},{1,2},{1,3},{2,3},{2,4},{3,4},{3,5},{4,5}};
    public static float[,] edgePosition = new float[,] { { 0.75f, 3.33f }, { 0.75f, 0.67f }, { 1.6f, 2f }, { 3.9f, 4.5f }, { 4f, 2.5f }, { 4f, -0.5f }, { 6.35f, 2f }, { 7.25f, 3.33f }, { 7.25f, 0.67f } };
    protected Queue queue = new Queue();

    public static int vertex = 6;
    public static int edge = 9;
    public static Vertex[] vertices = new Vertex[vertex];
    public static Edge[] edges = new Edge[edge];
    protected TMP_Text showText;
    public int accesses;

    public class Vertex{
        public int value;
        public char name;
        public List<Vertex> neighbors;
        public List<Edge> neighborEdges;
        public TextMeshPro info;
        public GameObject o;

        public Vertex(int value, GameObject spherePrefab, GameObject vertexInfo, string defaultText){
            this.value = value;
            name = (char)(value + 'A');
            neighbors = new List<Vertex>();
            neighborEdges = new List<Edge>();
            o = GameObject.Instantiate(spherePrefab);// CREATE CUBES
            o.transform.position = new Vector3(vertexBluePrints[value,0],vertexBluePrints[value,1],0);
            var t = o.GetComponentInChildren<TextMeshPro>();
            t.text = value.ToString();
            var text = GameObject.Instantiate(vertexInfo);
            text.transform.position = new Vector3(vertexText[value, 0], vertexText[value, 1], 0);
            
            text.GetComponent<TextMeshPro>().text = defaultText;// "Parent:N/A" + "\n" + "Distance:∞";
            this.info = text.GetComponent<TextMeshPro>();
            
            //t.transform.position = new Vector3(o.transform.position.x,o.transform.position.y,o.transform.position.z - 1);
        }
        public void addNeighbor(Vertex v, Edge e){
            neighbors.Add(v);
            neighborEdges.Add(e);
        }
    }
  
    public class Edge{
        public int id;
        public int i; 
        public int j;
        public int weight;
        public LineRenderer edge;
        public Edge(int id, int weight, GameObject edgeWeight){
            this.id = id;
            i = edgeBluePrints[id,0];
            j = edgeBluePrints[id,1];
            this.weight = weight;
            edge = new GameObject(i.ToString()+" "+j.ToString()+" weight:"+ weight.ToString()).AddComponent(typeof(LineRenderer)) as LineRenderer;
            edge.GetComponent<LineRenderer>().GetComponent<Renderer>().material.color = Color.white;
            edge.GetComponent<LineRenderer>().startWidth = .1f;
            edge.GetComponent<LineRenderer>().endWidth = .1f;
            edge.GetComponent<LineRenderer>().positionCount = 2;
            edge.GetComponent<LineRenderer>().useWorldSpace = true;

            var text = GameObject.Instantiate(edgeWeight);
            text.GetComponent<TextMeshPro>().text = weight.ToString();
            text.transform.position = new Vector3(edgePosition[id, 0], edgePosition[id, 1], 0);

            edge.SetPosition(0, new Vector3(vertices[i].o.transform.position.x, vertices[i].o.transform.position.y, 0));
            edge.SetPosition(1, new Vector3(vertices[j].o.transform.position.x, vertices[j].o.transform.position.y, 0));

            vertices[i].addNeighbor(vertices[j], this);
            vertices[j].addNeighbor(vertices[i], this);

        }
    }

    protected class QueueCommand{
        public Commands commandId;
        public Colors additionalInfo;
        public int v1,v2, edge;
        public string message;
        public long time;

        // standard message that updates nodes
        public QueueCommand(Commands commandId, int v1, int v2, Colors additionalInfo){
            this.commandId = commandId;
            this.v1 = v1;
            this.v2 = v2;
            this.additionalInfo = additionalInfo;
            time = timer.ElapsedMilliseconds;
        }
        // standard message that updates edges
        public QueueCommand(Commands commandId, int edge, Colors additionalInfo){
            this.commandId = commandId;
            this.edge = edge;
            this.additionalInfo = additionalInfo;            
            time = timer.ElapsedMilliseconds;
        }
        // command used to update info variable in each node
        public QueueCommand(Commands commandId, int v1, string message)
        {
            this.commandId = commandId;
            this.v1 = v1;
            this.message = message;
            time = timer.ElapsedMilliseconds;
        }
        // command that updates showText
        public QueueCommand(Commands commandId, string message, Colors additionalInfo)
        {
            this.commandId = commandId;
            this.message = message;
            this.additionalInfo = additionalInfo;
            time = timer.ElapsedMilliseconds;
        }
        public QueueCommand(Commands commandId)
        {
            this.commandId = commandId;
            time = timer.ElapsedMilliseconds;
        }
    }
    public IEnumerator readQueue(){
        foreach(QueueCommand q in queue){
            Debug.Log(accesses);
            switch(q.commandId){
                case Commands.WAIT: 
                    yield return new WaitForSeconds(time);
                    break;
                case Commands.COLOR_ONE: // change the color of a single vertex. q.additionalInfo provides the colorId
                    changeVertexColor(q.v1, q.additionalInfo);
                    break;
                case Commands.COLOR_TWO: // change the color of two vertices
                    changeVertexColor(q.v1, q.additionalInfo);
                    changeVertexColor(q.v2, q.additionalInfo);
                    break;
                case Commands.COLOR_EDGE: // change the edge connecting two vertices. q.additionalInfo provides the colorId
                    changeEdgeColor(q.edge, q.additionalInfo);
                    break;
                case Commands.UPDATE_OBJECT_TEXT: // Update a text info field
                    vertices[q.v1].info.text = q.message;
                    break;
                case Commands.UPDATE_MESSAGE:// update the displayed message
                    showText.text = q.message;
                    showText.color = colorChangeText(q.additionalInfo);
                    break;
                default:
                    extendCommands(q);
                    break;
            }
        }
    }
    private Color colorChangeText(Colors colorCode)
    {
        switch (colorCode)
        {
            case Colors.WHITE:
                return Color.white;
            case Colors.BLUE:
                var blue = new Color(0.6f, 0.686f, 0.761f);
                return blue;
            case Colors.RED:
                var red = new Color(1f, .2f, .361f, 1);
                return red;
            case Colors.BLACK:
                return Color.black;
            case Colors.GREEN:
                var green = new Color(0.533f, 0.671f, 0.459f);
                return green;
            case Colors.YELLOW:
                return Color.yellow;
            default:
                blue = new Color(0.6f, 0.686f, 0.761f);
                return blue;
        }
    }
    protected void changeVertexColor(int vertex, Colors colorId){
        switch(colorId){
            case Colors.WHITE:
                vertices[vertex].o.GetComponent<Renderer>().material.color = Color.white;
                break;                
            case Colors.BLUE:
                vertices[vertex].o.GetComponent<Renderer>().material.color = Color.blue;
                break;
            case Colors.RED: // since this is used when accesing and comparing, we'll increment accesses here
                vertices[vertex].o.GetComponent<Renderer>().material.color = Color.red;
                accesses++;
                break;
            case Colors.BLACK:
                vertices[vertex].o.GetComponent<Renderer>().material.color = Color.black;
                break;
            case Colors.GREEN:
                vertices[vertex].o.GetComponent<Renderer>().material.color = Color.green;
                break;
            case Colors.YELLOW:
                vertices[vertex].o.GetComponent<Renderer>().material.color = Color.yellow;
                break;
            default:
                extendVertexColors(vertex, colorId);
                break;
        }
    }
    protected void changeEdgeColor(int edge, Colors colorId){
        switch(colorId){
            case Colors.BLACK:
                edges[edge].edge.GetComponent<LineRenderer>().GetComponent<Renderer>().material.color = Color.black;
                break;
            case Colors.WHITE:
                edges[edge].edge.GetComponent<LineRenderer>().GetComponent<Renderer>().material.color = Color.white;
                break;
            case Colors.RED:
                edges[edge].edge.GetComponent<LineRenderer>().GetComponent<Renderer>().material.color = Color.red;
                break;            
        }
    }   
    protected abstract void extendCommands(QueueCommand command);
    protected abstract void extendVertexColors(int vertex, Colors colorId);

}
    /*
    static public Random r = new Random();

    public int n; // total number of nodes
    public int totalEdges; // total number of edges
    public double theta; // angle between adjacent nodes
    public LineRenderer[,] edge; // visualizer for the edges
    public static int[,] matrix; // edge weights
    protected Queue queue = new Queue();

    protected Vertex[] vertices; // visualizer for nodes
    protected class Vertex{
        public int value;
        public GameObject o;
        public ArrayList neighbors; // quick list of every node the vertex is connected to
        public Vertex(int value){
            this.value = value;
            neighbors = new ArrayList();
        }
        public void addNeighbor(Vertex node){
            neighbors.Add(node);
        }
    }

    protected class QueueCommand{
        public short commandId, additionalInfo;
        public int v1,v2;
        public QueueCommand(short commandId, int v1, int v2, short additionalInfo){
            this.commandId = commandId;
            this.v1 = v1;
            this.v2 = v2;
            this.additionalInfo = additionalInfo;
        }
    }

    protected abstract void extendCommands(QueueCommand command);
    protected abstract void extendVertexColors(int vertex, short colorId);
    public void setup(int n){

        this.n = n;
        totalEdges = r.Next(n-1, n*(n-1)/2);
        theta = 2*Math.PI / n;
        edge = new LineRenderer[n,n];
        matrix = new int[n, n];
        vertices = new Vertex[n];
        setCam();
        buildGrid();
    }
   
    public void setCam()
    {
        Camera.main.transform.position = new Vector3(0, 0, -20 );
    }
   
   
    public void buildGrid()
    {
        int[] array = new int[n];
        int weight;
        int i;
        // array[] stores the node values in a random order

        // Concept: array[1] and array[0] are connected. array[2] connects to array[0] or array[1]
        // For n <= k, array[k] is connected to some node array[n] and it will always get back to array[0]
        // I can add array[k+1] to the graph by connecting it to any node from array[0] to array[k] and it will reach array[0]
        for(i = 0; i < n; i++)
        {
            array[i] = i;
            matrix[i,i] = -1; // While we're here, might as well set each vertex self-weight. -1 means self.
        }
        // randomizes the node order
        for (i = 0; i < n; i++)
        {
            swap(ref array[i], ref array[r.Next(i, n)]);
        }
        int j;
        // flags the nodes i and j as adjacent
        for (i = 1; i < n; i++)
        {
            j = r.Next(i);
            weight = r.Next(1,50);
            matrix[array[i], array[j]] = weight;
            matrix[array[j], array[i]] = weight;
        }
        // After building a minimum graph, arbitrarily assign the remaining edges
        int remainingEdges = totalEdges - n + 1;
        while (remainingEdges > 0)
        {
            i = r.Next(n);
            j = r.Next(n);
            // since matrix[i][i] = -1 for all i, we'll search for 0 instead
            while (matrix[i,j] != 0)
            {
                i = (i + 1) % n;
                if (i == 0)
                    j = (j + 1) % n;
            }
            weight = r.Next(1,50);
            matrix[i,j] = weight;
            matrix[j,i] = weight;
            remainingEdges--;
        }
        buildVisual();
    }
    public void swap(ref int x, ref int y)
    {
        int temp = x;
        x = y;
        y = temp;
    }
    public void buildVisual(){
        // build the nodes in a circle. The first node is located at 90 degrees.
        // Each adjacent node creates an angle equal to theta from the origin point
        for (int i = 0; i < n; i++)
        {
            vertices[i].o = GameObject.CreatePrimitive(PrimitiveType.Sphere);
            vertices[i].o.transform.position = new Vector3(10*(float)Math.Cos(Math.PI/2-(i*theta)), 10*(float)Math.Sin(Math.PI/2-(i*theta)), 0);
            vertices[i].o.name = i.ToString();
        }
        // create each line connecting two nodes together
        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                Debug.Log(i+" "+j);
                if (matrix[i, j] > 0)
                {
                    edge[i, j] = new GameObject(i.ToString()+" "+j.ToString()+" weight:"+ matrix[i,j].ToString()).AddComponent(typeof(LineRenderer)) as LineRenderer;
                    edge[i, j].GetComponent<LineRenderer>().GetComponent<Renderer>().material.color = Color.white;
                    edge[i, j].GetComponent<LineRenderer>().startWidth = .1f;
                    edge[i, j].GetComponent<LineRenderer>().endWidth = .1f;
                    edge[i, j].GetComponent<LineRenderer>().positionCount = 2;
                    edge[i, j].GetComponent<LineRenderer>().useWorldSpace = true;

                    //For drawing line in the world space, provide the x,y,z values
                    edge[i, j].SetPosition(0, new Vector3(vertices[i].o.transform.position.x, vertices[i].o.transform.position.y, 0)); //x,y and z position of the starting point of the line
                    edge[i, j].SetPosition(1, new Vector3(vertices[j].o.transform.position.x, vertices[j].o.transform.position.y, 0)); //x,y and z position of the starting point of the line
                    edge[j, i] = edge[i,j]; 
                    vertices[i].addNeighbor(vertices[j]);
                    vertices[j].addNeighbor(vertices[i]);

                }
            }
        }
    }

    public IEnumerator readQueue(){
        foreach(QueueCommand q in queue){
            Debug.Log(q.commandId);
            if(q.commandId > 3){
                extendCommands(q);
            }
            switch(q.commandId){
                case 0: 
                    yield return new WaitForSeconds(1);
                    break;
                case 1: // change the color of a single vertex. q.additionalInfo provides the colorId
                    changeVertexColor(q.v1, q.additionalInfo);
                    break;
                case 2: // change the color of two vertices
                    changeVertexColor(q.v1, q.additionalInfo);
                    changeVertexColor(q.v2, q.additionalInfo);
                    break;
                case 3: // change the edge connecting two vertices. q.additionalInfo provides the colorId
                    changeEdgeColor(q.v1, q.v2, q.additionalInfo);
                    break;
            }
        }
    }

    protected void changeVertexColor(int vertex, short colorId){
        if (colorId > 3){
            extendVertexColors(vertex, colorId);
        }
        switch(colorId){
            case 0:
                vertices[vertex].o.GetComponent<Renderer>().material.color = Color.white;
                break;                
            case 1:
                vertices[vertex].o.GetComponent<Renderer>().material.color = Color.blue;
                break;
            case 2:
                vertices[vertex].o.GetComponent<Renderer>().material.color = Color.red;
                break;
            case 3:
                vertices[vertex].o.GetComponent<Renderer>().material.color = Color.black;
                break;            
        }
    }
    protected void changeEdgeColor(int v1, int v2, short colorId){
        switch(colorId){
            case 1:
                edge[v1, v2].GetComponent<LineRenderer>().GetComponent<Renderer>().material.color = Color.black;
                break;
            case 2:
                edge[v1, v2].GetComponent<LineRenderer>().GetComponent<Renderer>().material.color = Color.white;
                break;
            case 3:
                edge[v1, v2].GetComponent<LineRenderer>().GetComponent<Renderer>().material.color = Color.red;
                break;            
        }
    }    
}
*/