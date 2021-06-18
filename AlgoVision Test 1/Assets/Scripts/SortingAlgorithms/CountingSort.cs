using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Random = System.Random;


public class CountingSort : SortingAlgorithmWithAuxArray
{
    int maxElements;
    GameObject[] CountArray;
    void Awake()
    {
        size = 128;  // 60 20 - 40
        arr = new int[size];
        array = new ArrayIndex[size];
        auxArray = new ArrayIndex[size];
        auxArr = new int[size];
    }
    protected class ArrayIndexWithRepetition : ArrayIndex{
        public ArrayIndexWithRepetition(int value, int position) : base(){
            this.value = value;
            o = GameObject.CreatePrimitive(PrimitiveType.Cube);
            o.transform.position = new Vector3(position, (value+1)*.5f, 0);
            o.transform.localScale = new Vector3(1, value + 1, 1); 
        }
    }
    // Start is called before the first frame update
    void Start()
    {
        maxElements = 20;
        countingArray = new int[maxElements];

        /* For now, this is junk data that displays an "array" above the main index. 
            It is supposed to be the counting Array visualized
        
        CountArray = new GameObject[maxElements];
        float width = (float)size / maxElements;
        for (int i = 0; i < maxElements; i++){
            CountArray[i] = GameObject.CreatePrimitive(PrimitiveType.Cube);
            CountArray[i].transform.position = new Vector3(width*i, width+maxElements + 10, 0);
            CountArray[i].transform.localScale = new Vector3(width, width, width);
            if (i % 2 == 0){
                CountArray[i].GetComponent<Renderer>().material.color = Color.gray;
            }
        }
        */
        buildArray();
        buildAuxArray();

        startSort();
        StartCoroutine(readQueue()); 
        
    }
    // for counting sort, it would make more sense to have several repeated elements rather than
    // n indices with values from 1 to n.
    // Counting Sort's build array will limit the values of the indices from 0 to maxElements;
    new void buildArray(){
        Random r = new Random();
        int i, value;
        for(i = 0; i < size; i++){
            value = r.Next(0, maxElements);
            array[i] = new ArrayIndexWithRepetition(value, i);
            arr[i] = value;
        }
        for (i = 0; i < maxElements; i++){
            countingArray[i] = 0;
        }
    }
    void startSort(){
        int i;
        for(i = 0; i < size; i++){
            countingArray[arr[i]]++;
        }
        for(i = 1; i < maxElements; i++){
            countingArray[i] += countingArray[i-1];
        }
        for(i = 0; i < size; i++){
            auxArr[--countingArray[arr[i]]] = arr[i];
            q.Enqueue(new short[] {0, (short)countingArray[arr[i]], (short)arr[i], 1});
        }
        q.Enqueue(new short[] {11, 0, 1, 1});
        q.Enqueue(new short[] {9, 0,0,0});
        q.Enqueue(new short[] {8, 0,0,0});

    }
}
