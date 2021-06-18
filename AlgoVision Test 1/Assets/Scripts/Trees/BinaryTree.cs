using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BinaryTree : TreeBuilder
{
    // Start is called before the first frame update
    void Start()
    {
        depth = 0;
        size = 10;
        // set the root node
        root = new TreeNode(r.Next(100),0, 2);
        q.Enqueue(new QueueCommand(0, root, null, 0));
        // set all the other nodes
        for (int i = 0; i < size; i++){
            root = addNode(root, null, r.Next(100), 0);
            q.Enqueue(new QueueCommand(6, null, null, 0));
        }
        InOrderSearch(root);     
        StartCoroutine(readQueue(.5f));
    }
    // add a node to the tree
    // recursively call the function until we hit the point it gets added
    protected TreeNode addNode(TreeNode root, TreeNode parent, int x, int depth){
        // build the node and its line renderer
        if (root == null){
            // increment deepest depth
            if(depth > this.depth){
                this.depth = depth;
                setCam();
            }
            TreeNode node = new TreeNode(x, depth, 2);
            q.Enqueue(new QueueCommand(0, node, null, 0));
            q.Enqueue(new QueueCommand(3, node, parent, 0));

            return node;
        }
        else{
            q.Enqueue(new QueueCommand(1, root, null, 0));
            if (x < root.value){
                q.Enqueue(new QueueCommand(4, root, null, 0));

                root.children[0] = addNode(root.children[0], root, x, depth + 1);
                root.childEdges[0] = root.children[0].parentEdge;

            }
            else{
                q.Enqueue(new QueueCommand(4, root, null, 1));

                root.children[1] = addNode(root.children[1], root, x, depth + 1);
                root.childEdges[1] = root.children[1].parentEdge;
            }
            q.Enqueue(new QueueCommand(2, root, null, 0));

            return root;
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
