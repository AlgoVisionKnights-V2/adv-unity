using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class RadixSort : SortingAlgorithmWithAuxArray
{
    [SerializeField] GameObject boxPrefab;
    int baseValue;

    void Awake(){
        size = 1000;  // 60 20 - 40
        arr = new int[size];
        array = new ArrayIndex[size];
        auxArray = new ArrayIndex[size];
        auxArr = new int[size]; 
    }
    // Start is called before the first frame update
    void Start()
    { 
        baseValue = 4;
        countingArray = new int[baseValue];

        buildArray(boxPrefab);
        buildAuxArray();

        startSort();
        StartCoroutine(readQueue());     
    }

    void startSort(){
        int i,j;
        for(i = 1; size / i > 0; i *= baseValue){
            for(j = 0; j < baseValue; j++)
                countingArray[j] = 0;
            for(j = 0; j < size; j++){
                countingArray[arr[j] / i % baseValue]++;
            }
            for(j = 1; j < countingArray.Length; j++){
                countingArray[j] += countingArray[j-1];
            }
            for(j = size - 1; j >= 0; j--){
                auxArr[--countingArray[arr[j] / i % baseValue]] = arr[j];
                q.Enqueue(new short[] {0, (short)countingArray[arr[j] / i % baseValue], (short)arr[j], 1});

            }
            for (j = 0; j < size; j++){
                arr[j] = auxArr[j];
            }
            q.Enqueue(new short[] {11, 0, 1, 1});
        q.Enqueue(new short[] {9, 0,0,0});

        }
        /*
        for(i = 0; i < size; i++){
            countingArray[arr[i]]++;
        }
        for(i = 1; i < cycles; i++){
            countingArray[i] += countingArray[i-1];
        }
        for(i = 0; i < size; i++){
            auxArr[--countingArray[arr[i]]] = arr[i];
            q.Enqueue(new short[] {0, (short)countingArray[arr[i]], (short)arr[i], 1});
        }
        q.Enqueue(new short[] {11, 0, 1, 1});
        q.Enqueue(new short[] {9, 0,0,0});
        q.Enqueue(new short[] {8, 0,0,0});
*/
    }
}
