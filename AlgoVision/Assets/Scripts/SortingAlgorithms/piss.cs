using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

// public class HeapSort : SortingAlgorithm
// {
//     [SerializeField] GameObject boxPrefab;
//     void Awake()
//     {
//         size = 63;// 70.2 63.8 -114.5
//         arr = new int[size];
//         array = new ArrayIndex[size];
//         setCam();
//     }

//     // Start is called before the first frame update
//     void Start()
//     {
//         buildArray(boxPrefab);

//         startSort();

//         StartCoroutine(readQueue());
//     }

//     override public IEnumerator extendCommands(short[] command)
//     {
//          switch(command[0])
//         {
//             case 12: // heap uncompare
//                 {
//                     float frac = (float)(Math.Ceiling(Math.Log(command[1] + 1.1, 2)) / (Math.Log(size, 2) + 1));                    
//                     array[command[1]].o.GetComponent<Renderer>().material.color = new Color(frac, frac, 1.0f);

//                     frac = (float)(Math.Ceiling(Math.Log(command[2] + 1.1, 2)) / (Math.Log(size, 2) + 1));
//                     array[command[2]].o.GetComponent<Renderer>().material.color = new Color(frac, frac, 1.0f);

//                     break;
//                 }
//         }
//         yield return new WaitForSeconds(0);
//     }

//     public void startSort()
//     {
//         int i;
//         Heapify();
//         for (i = size - 1; i > 0; i--)
//         {
//             swap(0, i, 0);
//             Percolate(i);
//         }
//         q.Enqueue(new short[] { 2, 0, 2, 0 });
//     }
//     // convert to a max heap
//     private void Heapify()
//     {
//         int i, parent, child;

        
//         for (i = 1; i < size; i++)
//         {
//             child = i;
//             parent = (i - 1) / 2;
//             while (compare(parent, child, 12, 0) && arr[child] > arr[parent])
//             {
//                 swap(child, parent, 0);
                
                

//                 child = parent;
//                 parent = (child - 1) / 2;

//             }

//         }
//         //print();
//     }
//     private void Percolate(int bound)
//     {
//         int left, right, parent = 0;
//         while (parent < bound)
//         {
//             left = parent * 2 + 1;
//             right = parent * 2 + 2;

//             // both children are in bound
//             if (right < bound)
//             {
//                 // right child is the greater child
//                 if (compare(right, left, 12 , 0) && arr[right] > arr[left])
//                 {
//                     // swap right child if greater than parent
//                     if (compare(right, parent, 12, 0) && arr[right] > arr[parent])
//                     {
//                         swap(right, parent, 0);
                        
//                         parent = right;
//                     }
//                     // If parent is greater than right, then it's greater than left too
//                     else return;
//                 }
//                 // left child is the greater child
//                 else
//                 {
//                     // swap left child if greater than parent
//                     if (compare(parent, left, 12, 0) && arr[left] > arr[parent])
//                     {
//                         swap(left, parent, 0);
//                         q.Enqueue(new short[] { 12, (short)parent, (short)left, 0 });
//                         parent = left;
//                     }
//                     // If parent is greater than left, then it's greater than right too
//                     else return;
//                 }
//             }
//             // only left child is in bound
//             else if (left < bound)
//             {
//                 // swap left child if greater than parent
//                 if (compare(parent, left, 12, 0) && arr[left] > arr[parent])
//                 {
//                     swap(left, parent, 0);
//                     q.Enqueue(new short[] { 12, (short)parent, (short)left, 0 });
//                 }
//                 // This scenario can only happen if you're at the end of bound, so we can just return
//                 return;
//             }
//             // Parent has no children
//             else
//                 return;
//         }
        

//     }
// }

