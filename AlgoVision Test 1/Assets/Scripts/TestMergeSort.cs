using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/*public class MergeSort : SortingAlgorithm
{
    static int size = 10; // hilds the size of the array to be sorted
     
    MergeSortInstruction head; // holds a linked list of partition instructions
    bool partitioning = false; // 

    public MergeSort() : base(size)
    {
        //head = 
    }
    
    private class MergeSortInstruction
    {
        public int low, high; // low is the lower index of the partition, high is the higher index of the partition
        public bool mergeOrsplit; // tells the script if this partition is being split (false) or merged (true)
        public MergeSortInstruction(int low, int high, bool mergeOrsplit) // constructor
        {
            this.low = low;
            this.high = high;
            this.mergeOrsplit = mergeOrsplit;
            next = prev = null;
        }
    }

    // Start is called before the first frame update
    void Start()
    {
        // build the array out of game objects
        for (int i = 0; i < size; i++)
        {
            array[i] = GameObject.CreatePrimitive(PrimitiveType.Cube); // create a simple cube
            array[i].transform.position = new Vector3((float)i, .5f * i, 0); // moves the cube to its point in the array
            array[i].transform.localScale = new Vector3(1, i + 1, 1); // resizes the cube
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }



    // swaps two integers
    protected void intSwap(ref int x, ref int y)
    {
        int temp = x;
        x = y;
        y = temp;
    }
}
*/