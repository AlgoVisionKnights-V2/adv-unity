using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SkipList : Algorithm
{   
    // the current max height, size, and the size needed to increase max height
    // sizeThreshold is the value size needs to reach when we maximize the height
    int height, size, sizeThreshold;
    // list of The first skiplistNode at each height
    List<SkipListNode> head;
    public class SkipListNode{
        public int value;
        public int height;
        public SkipListNode left, right, up, down;

        public SkipListNode(int value, int height){
            this.value = value;
            this.height = height;
            left = right = up = down = null;
        }
    }

    // Initialize the header with a single height
    public void setup(){
        height = 1;
        size = 0;
        sizeThreshold = 2;
        head = new List<SkipListNode>();
        head.Add(null); // head[0] is going to contain junk data. It will be easier to have a dud index 0 rather than dealing with off-by-1 issues
        head.Add(null);
        Debug.Log(head[0]);
    }

    public SkipListNode createNodes(int value, int height){
        SkipListNode newNode = new SkipListNode(value, height);
        if (height > 1){
            newNode.down = createNodes(value, height  - 1);
        }
        return newNode;
    }
    public void insert(int value){
        size++;
        if (size >= sizeThreshold){
            sizeThreshold *= 2;
            this.height++;
            head.Add(null);
        }
        int height = calculateHeight();
        SkipListNode newNode = createNodes(value, height);
        SkipListNode temp = null;
        // Step 1: find the first major jumping-off point from head
        // Since head is a list, we have to finagle things a little differently
        for (int i = this.height; i > 0; i--){
            // If the new Node should be connected to the header, we'll check here and insert
            if (i == newNode.height && (head[i] == null || head[i].value >= value)){
                newNode.right = head[i];
                head[i] = newNode;
                Debug.Log(head[i].value + " " + i);
                newNode = newNode.down;
            }
            else if(head[i] != null && head[i].value < value){
                temp = head[i];
                break;
            }
        }
        // Step 2: traverse the SkipList until we find each spot where the newNode should connect
        // Whenever newNode gets connected, we go to newNode.down
        // We're done when newNode is null
        while(newNode != null){
            // check if we can go right or have to go down
            // if this passes, we will go down
            if (temp.right == null || temp.right.value >= value){
                // check if we can insert newNode while we're here
                if(temp.height == newNode.height){
                    newNode.right = temp.right;
                    temp.right  = newNode;
                    newNode = newNode.down;
                }
                temp = temp.down;
            }
            else{
                temp = temp.right;
            }
        }

    }
    // This works by using a long as a series of booleans and doing binary AND on each one
    /*
        Assume booleans is 85. The binary for that is 1010101
        In the first loop, l = 0000001
        So booleans & l creates 0000001

        In the second loop, l = 0000010
        So booleans & l creates 0000000
    */
    int calculateHeight(){
		int potentialHeight = 1;
		long booleans = r.Next();
		long l = 1;
		while((l & booleans) != 0 && potentialHeight < height){
			potentialHeight++;
			l <<= 1;
		}
		return potentialHeight;
    }
    void print(){
        string printStatement;
        SkipListNode temp;
        for(int i = height; i > 0; i--){
            printStatement = "";
            for (temp = head[i]; temp != null; temp = temp.right){
                printStatement += (temp.value.ToString() + " ");

            }
            Debug.Log("Height " + i + ": " + printStatement + "null");
        }
    }
    public void Start(){
        setup();
        for(int i = 0; i < 10; i++){
            insert(r.Next() % 100);
            print();

        }
    }
}
