using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Random = System.Random;
using TMPro;

public class LinkedList : Algorithm
{
    [SerializeField] public GameObject canvas;
    [SerializeField] GameObject boxPrefab;
    LinkedListNode head;
    Queue<QueueCommand> queue = new Queue<QueueCommand>();
    public class LinkedListNode{
        public int value;
        public GameObject Object;
        public LinkedListNode next;
        public LineRenderer nextEdge;

        public LinkedListNode(int value){
            this.value = value;
            nextEdge = new GameObject("Line").AddComponent(typeof(LineRenderer)) as LineRenderer;
            nextEdge.GetComponent<LineRenderer>().startWidth = .05f;
            nextEdge.GetComponent<LineRenderer>().endWidth = .05f;
            nextEdge.GetComponent<LineRenderer>().positionCount = 2;
            nextEdge.GetComponent<LineRenderer>().useWorldSpace = true;
        }
    }

    public class QueueCommand{
        public short commandId;
        public LinkedListNode node1, node2;
        public short additionalInfo;
        public short textColorId;
        public string message;

        public QueueCommand()
        {
            commandId = 0;
        }
        public QueueCommand(short commandId,LinkedListNode node1, short additionalInfo){
            this.commandId = commandId;
            this.node1 = node1;
            this.additionalInfo = additionalInfo;
        }
        public QueueCommand(short commandId,LinkedListNode node1, LinkedListNode node2, short additionalInfo){
            this.commandId = commandId;
            this.node1 = node1;
            this.node2 = node2;
            this.additionalInfo = additionalInfo;
        }
        public QueueCommand(short commandId, string message, short textColorId, int nums)
        {
            this.commandId = commandId;
            this.message = message;
            this.textColorId = textColorId;
        } 
    }

    public bool compare(LinkedListNode a, LinkedListNode b){
        queue.Enqueue(new QueueCommand(1, a, 1));
        queue.Enqueue(new QueueCommand(1, b, 1));

        queue.Enqueue(new QueueCommand(0, null, -1));

        queue.Enqueue(new QueueCommand(1, a, 0));
        queue.Enqueue(new QueueCommand(1, b, 0));

        return true;


    }
    public void insert(int value){
        short steps = 0; // number of steps through the list while traversing

        if (head == null)
        {
            queue.Enqueue(new QueueCommand(6, "List is empty, creating new Head node", 1, 1));
            queue.Enqueue(new QueueCommand());
            queue.Enqueue(new QueueCommand());
        }
        
        LinkedListNode newNode = new LinkedListNode(value);
        queue.Enqueue(new QueueCommand(3, newNode, -1));
        queue.Enqueue(new QueueCommand(4, newNode, steps));
        queue.Enqueue(new QueueCommand(0, null, -1));

        if (head == null){
            head = newNode;
            queue.Enqueue(new QueueCommand(2, null, -1));
            queue.Enqueue(new QueueCommand(0, null, -1));

            queue.Enqueue(new QueueCommand(6, "Node has been entered", 1, 1));
            queue.Enqueue(new QueueCommand());
            queue.Enqueue(new QueueCommand());

            return;
        }


        LinkedListNode temp = head;

        // initial check if new node should be at head
        if (compare(newNode, temp) && head.value > value){
            newNode.next = temp;
            head = newNode;
            queue.Enqueue(new QueueCommand(5, newNode, newNode.next, -1));
            queue.Enqueue(new QueueCommand(0, null, -1));            
            queue.Enqueue(new QueueCommand(2, null, -1));
            queue.Enqueue(new QueueCommand(0, null, -1));
            return;
        }

        steps++;
        queue.Enqueue(new QueueCommand(4, newNode, steps));
        queue.Enqueue(new QueueCommand(0, null, -1));
        
        // check if newNode should go after temp
        while(temp.next != null){
            if (compare(newNode, temp.next) && temp.next.value < value){
                temp = temp.next;
                steps++;
                queue.Enqueue(new QueueCommand(4, newNode, steps));
                queue.Enqueue(new QueueCommand(0, null, -1));

            }
            else{
                newNode.next = temp.next;
                temp.next = newNode;
                queue.Enqueue(new QueueCommand(5, temp, temp.next, -1));
                queue.Enqueue(new QueueCommand(5, newNode, newNode.next, -1));
                queue.Enqueue(new QueueCommand(0, null, -1));  
                queue.Enqueue(new QueueCommand(2, null, -1));
                queue.Enqueue(new QueueCommand(0, null, -1));
                return;
            }
        }
        // At this point we've reached end of the line
        temp.next = newNode;
        queue.Enqueue(new QueueCommand(5, temp, temp.next, -1));
        queue.Enqueue(new QueueCommand(0, null, -1));  
        queue.Enqueue(new QueueCommand(2, null, -1));
        queue.Enqueue(new QueueCommand(0, null, -1));

        queue.Enqueue(new QueueCommand(6, "Node has been entered", 1, 1));
        queue.Enqueue(new QueueCommand());
        queue.Enqueue(new QueueCommand());
    }
    // Start is called before the first frame update
    void Start()
    {
        canvas = GameObject.Find("Canvas");
        queue.Enqueue(new QueueCommand(6, "New Linked List, Enter First Node", 1, 1));
        queue.Enqueue(new QueueCommand());
        queue.Enqueue(new QueueCommand());

        /*Random r = new Random();
        for(int i = 0; i < 5; i++){
            insert(r.Next(1, 21));
        }
        traverse();*/
        StartCoroutine(readQueue());

    }
    void traverse(){
        LinkedListNode temp = head;
        while(temp != null){
            temp = temp.next;
        }
    }
    // All the nodes will be preorganized but some will not have Object made yet.
    // Reposition needs to find each node with the object created and connect them
    void reposition(){
        LinkedListNode temp1 = head; // traverses the list
        LinkedListNode temp2; // marks the last node with an object found
        int i = 0;

        // find the very first created node and set it
        while (temp1 != null && temp1.Object == null){
            temp1 = temp1.next;
        }
        temp1.Object.transform.position = new Vector3(2*i++, 0, 0);
        temp2 = temp1;
        temp1 = temp1.next;
        while(temp1 != null){
            if (temp1.Object != null){
                temp1.Object.transform.position = new Vector3(2*i++, 0, 0);
                temp2.nextEdge.SetPosition(0, new Vector3(temp2.Object.transform.position.x, temp2.Object.transform.position.y, 0));
                temp2.nextEdge.SetPosition(1, new Vector3(temp1.Object.transform.position.x, temp1.Object.transform.position.y, 0)); 
                temp2 = temp1;
            }
            temp1 = temp1.next;
        }
    }
    public IEnumerator readQueue(){
        foreach(QueueCommand q in queue){
            Debug.Log(q.commandId);
            switch(q.commandId){
                case 0: // wait
                    yield return new WaitForSeconds(1);
                    break;
                case 1: // change color of a node
                    changeColor(q.node1, q.additionalInfo);
                    break;
                case 2: // reposition everything
                    reposition();
                    break;
                case 3: // build the node
                    q.node1.Object = GameObject.Instantiate(boxPrefab);
                    q.node1.Object.name = q.node1.value.ToString();
                    q.node1.Object.transform.GetChild(0).GetComponent<TMP_Text>().text = q.node1.value.ToString();
                    break;
                case 4: // Relocate the new node
                    q.node1.Object.transform.position = new Vector3(q.additionalInfo*2 - 1, 2, 0);
                    break;
                case 5: // connect the nextEdge of node1 to node2
                    q.node1.nextEdge.SetPosition(0, new Vector3(q.node1.Object.transform.position.x, q.node1.Object.transform.position.y, 0));
                    q.node1.nextEdge.SetPosition(1, new Vector3(q.node2.Object.transform.position.x, q.node2.Object.transform.position.y, 0));
                    break;
                case 6: // ChangeText
                    canvas.transform.GetChild(3).GetComponent<TMP_Text>().text = q.message;
                    break;
            }
        }
    }
    public void changeColor(LinkedListNode node, int colorId){
        switch(colorId){
            case 0:
                node.Object.GetComponent<Renderer>().material.color = Color.white;
                break;
            case 1: 
                node.Object.GetComponent<Renderer>().material.color = Color.red;
                break;
        }
    }

    public void insertNode(int value, int pos)
    {
        insert(value);
        traverse();
        StartCoroutine(readQueue());
    }
}
