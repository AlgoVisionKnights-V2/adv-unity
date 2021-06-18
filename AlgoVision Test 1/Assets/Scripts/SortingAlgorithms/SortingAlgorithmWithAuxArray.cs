using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SortingAlgorithmWithAuxArray : SortingAlgorithm
{
    protected ArrayIndex[] auxArray;
    public int[] auxArr;
    public int[] countingArray; // for counting and radix sort

    protected class AuxArrayIndex : ArrayIndex{
        

        // build an ArrayIndex item for the auxillary array. This will only have an initial position
        public AuxArrayIndex(int value, int size) : base(){
            o = GameObject.CreatePrimitive(PrimitiveType.Cube);
            o.transform.position = new Vector3( -size + value - 1, 0, 0);
            o.transform.localScale = new Vector3(0, 0, 0);
        }
   }
    // Build the visible auxillary array
    protected void buildAuxArray(){
        for (int i = 0; i < size; i++){
            auxArray[i] = new AuxArrayIndex(i, size);
        }
    }

    public void setAuxCam()
    {
        float z = (float)((-1 * size) / (2 * Math.Tan(Math.PI / 6))); // sets 
        //float z = (float)((-1 * size) / (Math.Tan(Math.PI * 101.028 / 360)));
        Camera.main.transform.position = new Vector3(0, size / 2 , (float)(z * 1.01));
        Camera.main.farClipPlane = (float)(-1.1 * z);
    }

    // This stores case 9, 10, and 11 since those are the only commands that explicitely interact with the aux array
    // It also holds the auxArray versions of other cases
    override public IEnumerator extendCommands(short[] instr){
        switch(instr[0]){
            case 0:
                writeToIndex(auxArray, instr[1], instr[2]);
                yield return new WaitForSeconds(.01f*time);
                break;
            case 2:
                colorChange(instr[1], instr[2], auxArray);
                break;
            case 3:
                colorChange(instr[1], 1, auxArray);
                colorChange(instr[2], 1, auxArray);
                yield return new WaitForSeconds(.01f*time);
                break;
            case 4:
                colorChange(instr[1], 0, auxArray);
                colorChange(instr[2], 0, auxArray);
                break;
            case 5:
                colorChange(instr[1], 3, auxArray);
                colorChange(instr[2], 3, auxArray);
                break;
            case 9: // shrink all the ArrayIndex items in the aux array to 0 height, functionally deleting them
                for (int i = 0; i < size; i++){
                    auxArray[i].o.transform.localScale = new Vector3(0, 0, 0);
                    auxArray[i].o.GetComponent<Renderer>().material.color = Color.white;
                }
                break;
            case 10: // Convert (instr[3])[instr[1]] to the value in the other array at index inst[2]
                if (instr[3] == 0){
                    copyArrayValue(array, auxArray, instr[1], instr[2]);
                }
                else{
                    copyArrayValue(auxArray, array, instr[1], instr[2]);
                }
                yield return new WaitForSeconds(.01f*time);
                break;
            case 11: // write all elements from the array indicated by instr[1] to instr[2]
                if (instr[1] == 0){
                    for (int i = 0; i < size; i++){
                        writeToIndex(array,i, auxArray[i].value);                            
                        yield return new WaitForSeconds(.01f*time);
                    }
                }
                else{
                    for (int i = 0; i < size; i++){
                        writeToIndex(auxArray,i, array[i].value);
                        yield return new WaitForSeconds(.01f*time);
                    }
                }
                break;
        }
    }
}
