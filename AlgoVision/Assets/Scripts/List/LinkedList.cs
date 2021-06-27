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
    public void insert(int value, int pos){
        short steps = 0; // number of steps through the list while traversing

        if (head == null)
        {
            queue.Enqueue(new QueueCommand(6, "List is empty, creating new Head node", 1, 1));
            queue.Enqueue(new QueueCommand());
            queue.Enqueue(new QueueCommand());
        }

        queue.Enqueue(new QueueCommand(6, "Locating Memory Address for new Node...", 1, 1));
        queue.Enqueue(new QueueCommand());
        queue.Enqueue(new QueueCommand());

        stringy = randomNumbers();
        queue.Enqueue(new QueueCommand(6, "Memory space 0x" + stringy + " allocated for new node", 1, 1));
        queue.Enqueue(new QueueCommand());
        queue.Enqueue(new QueueCommand());
        
        
        LinkedListNode newNode = new LinkedListNode(value);
        queue.Enqueue(new QueueCommand(3, newNode, -1));
        queue.Enqueue(new QueueCommand(4, newNode, steps));
        queue.Enqueue(new QueueCommand(0, null, -1));
        // make a new head
        if (head == null){
            head = newNode;
            queue.Enqueue(new QueueCommand(2, null, -1));
            queue.Enqueue(new QueueCommand(0, null, -1));

            queue.Enqueue(new QueueCommand(6, "Node has been entered", 1, 1));
            queue.Enqueue(new QueueCommand());
            queue.Enqueue(new QueueCommand());
            queue.Enqueue(new QueueCommand(7, "", 0, 0));

            return;
        }
        LinkedListNode temp = head;
        // initial check if new node should be at head
        if (pos <= 0){
            newNode.next = temp;

            queue.Enqueue(new QueueCommand(7, "", 1, 1));
            head = newNode;
            queue.Enqueue(new QueueCommand(7, "", 0, 0));

            queue.Enqueue(new QueueCommand(6, "Inserted Node is now the Head Node", 1, 1));
            queue.Enqueue(new QueueCommand());
            queue.Enqueue(new QueueCommand());
            
            queue.Enqueue(new QueueCommand(5, newNode, newNode.next, -1));
            queue.Enqueue(new QueueCommand(0, null, -1));            
            queue.Enqueue(new QueueCommand(2, null, -1));
            queue.Enqueue(new QueueCommand(0, null, -1));
            return;
        }


        steps++; // 1
        queue.Enqueue(new QueueCommand(4, newNode, steps));
        queue.Enqueue(new QueueCommand(0, null, -1));
        
        // check if newNode should go after temp
        while(temp.next != null && steps < pos){
            /*0 5 7; insert 9 at 2 */
            steps++;
            queue.Enqueue(new QueueCommand(4, newNode, steps));
            queue.Enqueue(new QueueCommand(0, null, -1));
            temp = temp.next;
            /*if (temp.next.value < value){
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
            }*/
        }

        if (temp.next != null){
            newNode.next = temp.next;
            temp.next = newNode;
            queue.Enqueue(new QueueCommand(5, temp, temp.next, -1));
            queue.Enqueue(new QueueCommand(5, newNode, newNode.next, -1));
            queue.Enqueue(new QueueCommand(0, null, -1));  
            queue.Enqueue(new QueueCommand(2, null, -1));
            queue.Enqueue(new QueueCommand(0, null, -1));
            return;            
        }
        // At this point we've reached end of the line
        temp.next = newNode;

        queue.Enqueue(new QueueCommand(6, "Tail has been reached, entering new node as the tail", 1, 1));
        queue.Enqueue(new QueueCommand());
        queue.Enqueue(new QueueCommand());
        
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
        speedSlider = canvas.transform.GetChild(1).GetComponent<Slider>();
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
        while (queue.Count > 0){
            q = queue.Dequeue();
            Debug.Log(q.commandId);
            switch(q.commandId){
                case 0: // wait
                    yield return new WaitForSeconds(time);
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
                    q.node1.Object.transform.GetChild(2).GetComponent<TMP_Text>().text = "0x" + stringy;
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
                case 7: // Head Indicators
                    head.Object.transform.GetChild(3).GetComponent<TMP_Text>().text = "Head";
                    if (q.textColorId == 0)
                    {
                        head.Object.transform.GetChild(3).gameObject.SetActive(true);
                        UIhead = head;
                        Debug.Log("KJhjkhjacjahjdhdhadhgjdg");
                    }
                    else
                    {
                        UIhead.Object.transform.GetChild(3).gameObject.SetActive(false);
                        UIhead = head;
                        Debug.Log("FJhjkhjacjahjdhdhadhgjdg");
                    }
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
        queue.Enqueue(new QueueCommand(6, "Inserting " + value + " at Position " + pos, 1, 1));
        queue.Enqueue(new QueueCommand());
        queue.Enqueue(new QueueCommand());
        
        insert(value, pos);
        queue.Enqueue(new QueueCommand(6, "Insert or Delete a new Node", 1, 1));
        queue.Enqueue(new QueueCommand());
        queue.Enqueue(new QueueCommand());
        traverse();
        StartCoroutine(readQueue());
    }
    public void deleteNode(int value, int pos)
    {
        queue.Enqueue(new QueueCommand(6, "Deleting " + value + " from the linked list", 1, 1));
        queue.Enqueue(new QueueCommand());
        queue.Enqueue(new QueueCommand());

        insert(value, pos);
        
        queue.Enqueue(new QueueCommand(6, "Insert or Delete a new Node", 1, 1));
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
