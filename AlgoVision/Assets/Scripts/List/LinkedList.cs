using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Random = System.Random;
using TMPro;
using System;

public class LinkedList : Algorithm
{
    [SerializeField] public GameObject canvas;
    [SerializeField] GameObject boxPrefab;
    [SerializeField] GameObject insertButton;
    [SerializeField] GameObject deleteButton;
    [SerializeField] Slider speedSlider;
    LinkedListNode head;
    LinkedListNode UIhead;
    int size = 1;
    String stringy;
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
        public Commands commandId;
        public LinkedListNode node1, node2;
        public short additionalInfo;
        public short textColorId;
        public string message;

        public QueueCommand()
        {
            commandId = Commands.WAIT;
        }
        public QueueCommand(Commands commandId,LinkedListNode node1, short additionalInfo){
            this.commandId = commandId;
            this.node1 = node1;
            this.additionalInfo = additionalInfo;
        }
        public QueueCommand(Commands commandId,LinkedListNode node1, LinkedListNode node2, short additionalInfo){
            this.commandId = commandId;
            this.node1 = node1;
            this.node2 = node2;
            this.additionalInfo = additionalInfo;
        }
        public QueueCommand(Commands commandId, LinkedListNode node1, LinkedListNode node2, string message)
        {
            this.commandId = commandId;
            this.node1 = node1;
            this.node2 = node2;
            this.message = message;
        }
        public QueueCommand(Commands commandId, string message, short textColorId, int nums)
        {
            this.commandId = commandId;
            this.message = message;
            this.textColorId = textColorId;
        } 
    }

    public bool compare(LinkedListNode a, LinkedListNode b){
        queue.Enqueue(new QueueCommand(Commands.COLOR_NODE, a, 1));
        queue.Enqueue(new QueueCommand(Commands.COLOR_NODE, b, 1));

        queue.Enqueue(new QueueCommand(Commands.WAIT, null, -1));

        queue.Enqueue(new QueueCommand(Commands.COLOR_NODE, a, 0));
        queue.Enqueue(new QueueCommand(Commands.COLOR_NODE, b, 0));

        return true;


    }
    public void delete(int value){
        if (head == null)
        {
            queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "List is empty", 1, 1));
            queue.Enqueue(new QueueCommand());
            queue.Enqueue(new QueueCommand());
            return;
        }
        LinkedListNode temp = head;
        // When the head is what we're deleting
        if (temp.value == value){
            queue.Enqueue(new QueueCommand(Commands.COLOR_NODE, temp, 1));
            queue.Enqueue(new QueueCommand());
            
            queue.Enqueue(new QueueCommand(Commands.LOWER, temp, 1));
            if (head != null)
            {
                queue.Enqueue(new QueueCommand(Commands.UPDATE_HEAD, "", 1, 1));
            }
            head = temp.next;
            
            if (head != null)
            {
                queue.Enqueue(new QueueCommand(Commands.UPDATE_HEAD, "", 0, 0));
            }
            queue.Enqueue(new QueueCommand(Commands.REPOSITION, null, -1));
            queue.Enqueue(new QueueCommand());
            return;
        }
        while(temp.next != null && temp.next.value != value){
            temp = temp.next;
        }
        if (temp.next == null){
            queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "" + value + " not found", 1, 1));
            queue.Enqueue(new QueueCommand());
            queue.Enqueue(new QueueCommand());
            return;
        }
        queue.Enqueue(new QueueCommand(Commands.COLOR_NODE, temp.next, 1));
        queue.Enqueue(new QueueCommand());

        queue.Enqueue(new QueueCommand(Commands.LOWER, temp.next, 1));
        queue.Enqueue(new QueueCommand());

        temp.next = temp.next.next;
        if (temp.next == null){
            queue.Enqueue(new QueueCommand(Commands.DELETE_EDGE, temp, -1));
        }
        else{

            queue.Enqueue(new QueueCommand(Commands.UPDATE_OBJECT_TEXT, temp, temp.next, ""));
            queue.Enqueue(new QueueCommand());
            queue.Enqueue(new QueueCommand());
            queue.Enqueue(new QueueCommand(Commands.LINK_NODE, temp, temp.next, -1));
        }

        queue.Enqueue(new QueueCommand());
        queue.Enqueue(new QueueCommand(Commands.REPOSITION, null, -1));
        queue.Enqueue(new QueueCommand());


    }
    public void insert(int value, int pos){
        short steps = 0; // number of steps through the list while traversing

        if (head == null)
        {
            queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "List is empty, creating new Head node", 1, 1));
            queue.Enqueue(new QueueCommand());
            queue.Enqueue(new QueueCommand());
        }

        queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "Locating Memory Address for new Node...", 1, 1));
        queue.Enqueue(new QueueCommand());
        queue.Enqueue(new QueueCommand());

        stringy = randomNumbers();
        queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "Memory space 0x" + stringy + " allocated for new node", 1, 1));
        queue.Enqueue(new QueueCommand());
        queue.Enqueue(new QueueCommand());
        
        
        LinkedListNode newNode = new LinkedListNode(value);
        queue.Enqueue(new QueueCommand(Commands.CREATE_NODE, newNode, -1));
        queue.Enqueue(new QueueCommand(Commands.RELOCATE, newNode, steps));
        queue.Enqueue(new QueueCommand(Commands.WAIT, null, -1));
        // make a new head
        if (head == null){
            head = newNode;
            queue.Enqueue(new QueueCommand(Commands.REPOSITION, null, -1));
            queue.Enqueue(new QueueCommand(Commands.WAIT, null, -1));

            queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "Node has been entered", 1, 1));
            queue.Enqueue(new QueueCommand());
            queue.Enqueue(new QueueCommand());
            queue.Enqueue(new QueueCommand(Commands.UPDATE_HEAD, "", 0, 0));

            return;
        }
        LinkedListNode temp = head;
        // initial check if new node should be at head
        if (pos <= 0){
            newNode.next = temp;

            queue.Enqueue(new QueueCommand(Commands.UPDATE_HEAD, "", 1, 1));
            head = newNode;
            queue.Enqueue(new QueueCommand(Commands.UPDATE_HEAD, "", 0, 0));

            queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "Inserted Node is now the Head Node", 1, 1));
            queue.Enqueue(new QueueCommand());
            queue.Enqueue(new QueueCommand());


            queue.Enqueue(new QueueCommand(Commands.UPDATE_OBJECT_TEXT, newNode, newNode.next, ""));
            queue.Enqueue(new QueueCommand());
            queue.Enqueue(new QueueCommand());
            queue.Enqueue(new QueueCommand(Commands.LINK_NODE, newNode, newNode.next, -1));
            queue.Enqueue(new QueueCommand(Commands.WAIT, null, -1));            
            queue.Enqueue(new QueueCommand(Commands.REPOSITION, null, -1));
            queue.Enqueue(new QueueCommand(Commands.WAIT, null, -1));
            return;
        }


        steps++; // 1
        queue.Enqueue(new QueueCommand(Commands.RELOCATE, newNode, steps));
        queue.Enqueue(new QueueCommand(Commands.WAIT, null, -1));
        
        // check if newNode should go after temp
        while(temp.next != null && steps < pos){
            /*0 5 7; insert 9 at 2 */
            steps++;
            queue.Enqueue(new QueueCommand(Commands.RELOCATE, newNode, steps));
            queue.Enqueue(new QueueCommand(Commands.WAIT, null, -1));
            temp = temp.next;
            /*if (temp.next.value < value){
                temp = temp.next;
                steps++;
                queue.Enqueue(new QueueCommand(Commands.RELOCATE, newNode, steps));
                queue.Enqueue(new QueueCommand(Commands.WAIT, null, -1));

            }
            else{
                newNode.next = temp.next;
                temp.next = newNode;
                queue.Enqueue(new QueueCommand(Commands.LINK_NODE, temp, temp.next, -1));
                queue.Enqueue(new QueueCommand(Commands.LINK_NODE, newNode, newNode.next, -1));
                queue.Enqueue(new QueueCommand(Commands.WAIT, null, -1));  
                queue.Enqueue(new QueueCommand(Commands.REPOSITION, null, -1));
                queue.Enqueue(new QueueCommand(Commands.WAIT, null, -1));
                return;
            }*/
        }

        if (temp.next != null){
            newNode.next = temp.next;
            temp.next = newNode;

            queue.Enqueue(new QueueCommand(Commands.UPDATE_OBJECT_TEXT, temp, temp.next, ""));
            queue.Enqueue(new QueueCommand());
            queue.Enqueue(new QueueCommand());
            queue.Enqueue(new QueueCommand(Commands.LINK_NODE, temp, temp.next, -1));

            queue.Enqueue(new QueueCommand(Commands.UPDATE_OBJECT_TEXT, newNode, newNode.next, ""));
            queue.Enqueue(new QueueCommand());
            queue.Enqueue(new QueueCommand());
            queue.Enqueue(new QueueCommand(Commands.LINK_NODE, newNode, newNode.next, -1));
            queue.Enqueue(new QueueCommand(Commands.WAIT, null, -1));  
            queue.Enqueue(new QueueCommand(Commands.REPOSITION, null, -1));
            queue.Enqueue(new QueueCommand(Commands.WAIT, null, -1));
            return;            
        }
        // At this point we've reached end of the line
        temp.next = newNode;

        queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "Tail has been reached, entering new node as the tail", 1, 1));
        queue.Enqueue(new QueueCommand());
        queue.Enqueue(new QueueCommand());

        queue.Enqueue(new QueueCommand(Commands.UPDATE_OBJECT_TEXT, temp, temp.next, ""));
        queue.Enqueue(new QueueCommand());
        queue.Enqueue(new QueueCommand());
        queue.Enqueue(new QueueCommand(Commands.LINK_NODE, temp, temp.next, -1));
        queue.Enqueue(new QueueCommand(Commands.WAIT, null, -1));  
        queue.Enqueue(new QueueCommand(Commands.REPOSITION, null, -1));
        queue.Enqueue(new QueueCommand(Commands.WAIT, null, -1));

        queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "Node has been entered", 1, 1));
        queue.Enqueue(new QueueCommand());
        queue.Enqueue(new QueueCommand());
    }
    // Start is called before the first frame update
    void Start()
    {
        canvas = GameObject.Find("Canvas");
        insertButton = canvas.transform.GetChild(8).gameObject;
        deleteButton = canvas.transform.GetChild(9).gameObject;
        speedSlider = canvas.transform.GetChild(1).GetComponent<Slider>();
        queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "New Linked List, Enter First Node", 1, 1));
        queue.Enqueue(new QueueCommand());
        queue.Enqueue(new QueueCommand());

        /*Random r = new Random();
        for(int i = 0; i < 5; i++){
            insert(r.Next(1, 21));
        }
        traverse();*/
        StartCoroutine(readQueue());

    }

    void Update()
    {
        time = speedSlider.value;
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

        if(temp1==null){
            return;
        }
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
        QueueCommand q;

        insertButton.GetComponent<Button>().interactable = false;
        deleteButton.GetComponent<Button>().interactable = false;
        
        while (queue.Count > 0){
            q = queue.Dequeue();
            Debug.Log(q.commandId);
            switch(q.commandId){
                case Commands.WAIT: // wait
                    yield return new WaitForSeconds(time);
                    break;
                case Commands.COLOR_NODE: // change color of a node
                    changeColor(q.node1, q.additionalInfo);
                    break;
                case Commands.REPOSITION: // reposition everything
                    reposition();
                    break;
                case Commands.CREATE_NODE: // build the node
                    q.node1.Object = GameObject.Instantiate(boxPrefab);
                    q.node1.Object.name = q.node1.value.ToString();
                    q.node1.Object.transform.GetChild(0).GetComponent<TMP_Text>().text = q.node1.value.ToString();
                    q.node1.Object.transform.GetChild(2).GetComponent<TMP_Text>().text = "0x" + stringy;
                    break;
                case Commands.RELOCATE: // Relocate the new node
                    q.node1.Object.transform.position = new Vector3(q.additionalInfo*2 - 1, 2, 0);
                    break;
                case Commands.LINK_NODE: // connect the nextEdge of node1 to node2
                    q.node1.nextEdge.SetPosition(0, new Vector3(q.node1.Object.transform.position.x, q.node1.Object.transform.position.y, 0));
                    q.node1.nextEdge.SetPosition(1, new Vector3(q.node2.Object.transform.position.x, q.node2.Object.transform.position.y, 0));
                    break;
                case Commands.UPDATE_MESSAGE: // ChangeText
                    canvas.transform.GetChild(3).GetComponent<TMP_Text>().text = q.message;
                    break;
                case Commands.UPDATE_HEAD: // Head Indicators
                    if (q.textColorId == 0)
                    {
                        head.Object.transform.GetChild(3).gameObject.SetActive(true);
                        canvas.transform.GetChild(3).GetComponent<TMP_Text>().text = "" + head.value + " is now the new Head Node";
                        UIhead = head;
                    }
                    else
                    {
                        UIhead.Object.transform.GetChild(3).gameObject.SetActive(false);
                        UIhead = head;
                    }
                    break;
                case Commands.LOWER: // Move index down before deletion
                    q.node1.Object.transform.position = new Vector3(q.node1.Object.transform.position.x, q.node1.Object.transform.position.y - 2, 0);
                    q.node1.nextEdge.GetComponent<LineRenderer>().enabled = false;
                    q.node1.Object.SetActive(false);
                    break;
                case Commands.DELETE_EDGE: // delete an edge
                    q.node1.nextEdge.SetPosition(0, new Vector3(0,0,0));
                    q.node1.nextEdge.SetPosition(1, new Vector3(0,0,0));
                    break;
                case Commands.UPDATE_OBJECT_TEXT: // Edge Messaging
                    canvas.transform.GetChild(3).GetComponent<TMP_Text>().text = "Connecting " + q.node1.value + "'s Next Pointer to " + q.node2.value + "'s Memory Address";
                    q.node1.nextEdge.SetPosition(0, new Vector3(0, 0, 0));
                    q.node1.nextEdge.SetPosition(1, new Vector3(0, 0, 0));
                    break;
            }
        }
        insertButton.GetComponent<Button>().interactable = true;
        deleteButton.GetComponent<Button>().interactable = true;
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
        queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "Inserting " + value + " at Position " + pos, 1, 1));
        queue.Enqueue(new QueueCommand());
        queue.Enqueue(new QueueCommand());
        
        insert(value, pos);
        queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "Insert or Delete a new Node", 1, 1));
        queue.Enqueue(new QueueCommand());
        queue.Enqueue(new QueueCommand());
        traverse();
        StartCoroutine(readQueue());
    }
    public void deleteNode(int value, int pos)
    {
        
        queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "Deleting " + value + " from the linked list", 1, 1));
        queue.Enqueue(new QueueCommand());
        queue.Enqueue(new QueueCommand());

        delete(value);
        
        queue.Enqueue(new QueueCommand(Commands.UPDATE_MESSAGE, "Insert or Delete a new Node", 1, 1));
        queue.Enqueue(new QueueCommand());
        queue.Enqueue(new QueueCommand());
        traverse();
        StartCoroutine(readQueue());

    }

    public String randomNumbers()
    {
        var chars = "0123456789";
        var stringChars = new char[4];
        var random = new Random();

        for (int i = 0; i < stringChars.Length; i++)
        {
            stringChars[i] = chars[random.Next(chars.Length)];
        }

        var finalString = new String(stringChars);
        return finalString;
    }
}
