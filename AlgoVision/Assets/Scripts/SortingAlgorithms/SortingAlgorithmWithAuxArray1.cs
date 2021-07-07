using System;
using Random = System.Random;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
public abstract class SortingAlgorithmWithAuxArray1 : SortingAlgorithm1
{
    protected ArrayIndex[] auxArray;
    public int[] auxArr;
    public int[] countingArray; // for counting and radix sort

    public int auxAccesses;
    protected class AuxArrayIndex : ArrayIndex{
        

        // build an ArrayIndex item for the auxillary array. This will only have an initial position
        public AuxArrayIndex(int index, int size, GameObject boxPrefab) : base(){
            o = GameObject.Instantiate(boxPrefab);
            if (index < size / 2){
                o.transform.position = new Vector3(index + size / 4 - 1, -1, 0);
            }
            else{
                o.transform.position = new Vector3(index + size * 3 / 4, -1, 0);
            }
            o.transform.localScale = new Vector3(0,0,0);
            //o.transform.localScale = new Vector3(.75f, .75f, .75f);
            var t = o.GetComponentInChildren<TextMeshPro>();
            t.transform.localScale = new Vector3(.75f, .75f, .75f);
        }
   }
    // Build the visible auxillary array
    protected void buildAuxArray(GameObject boxPrefab, GameObject canvas){
        for (int i = 0; i < size; i++){
            auxArray[i] = new AuxArrayIndex(i, size, boxPrefab);
        }
    }

    public void setAuxCam()
    {
        float z = (float)((-1 * size) / (2 * Math.Tan(Math.PI / 6)));
        Camera.main.transform.position = new Vector3(array[size / 2].o.transform.position.x, array[size / 2].o.transform.position.y, (float)(z*1.1) );
        Camera.main.farClipPlane = (float)(-1.1*z + 200);
    }

    // This stores case 9, 10, and 11 since those are the only commands that explicitely interact with the aux array
    // It also holds the auxArray versions of other cases
    override public void extendCommands(QueueCommand q){
        switch (q.commandId){
            case 1: // change the color of two indices
                colorChange(q.index1, q.colorId, auxArray);
                colorChange(q.index2, q.colorId, auxArray);
                // Debug.Log("Comparing values at Index "+ q.index1 + " and "+ q.index2);
                break;            
            case 3: // change the color of just a single index
                colorChange(q.index1, q.colorId, auxArray);
                showText.text = q.message;
                green = new Color(0.533f, 0.671f, 0.459f);
                showText.color = green;
                break;
            case 4: // raise two indices up, used to visualize they are being compared
                auxArray[q.index1].o.transform.position = new Vector3(auxArray[q.index1].o.transform.position.x, auxArray[q.index1].o.transform.position.y + 1, 0);
                auxArray[q.index2].o.transform.position = new Vector3(auxArray[q.index2].o.transform.position.x, auxArray[q.index2].o.transform.position.y + 1, 0);
                showText.enabled = true;
                showText.text = q.message;
                comparisons++;
                auxAccesses += 2;
                // red color
                var blue = new Color(0.6f, 0.686f, 0.761f);
                showText.color = blue;
                break;
            case 5: // raise two indices down, used to visualize they are being uncompared
                auxArray[q.index1].o.transform.position = new Vector3(auxArray[q.index1].o.transform.position.x, auxArray[q.index1].o.transform.position.y - 1, 0);
                auxArray[q.index2].o.transform.position = new Vector3(auxArray[q.index2].o.transform.position.x, auxArray[q.index2].o.transform.position.y - 1, 0);
                break;
            case 6: // change the color of every index from index1 to index2 inclusive
                for (int i = q.index1; i <= q.index2; i++){
                    colorChange(i, q.colorId, auxArray);
                }
                break;
            case 8:
                auxArray[q.index1].o.transform.GetChild(1).gameObject.SetActive(!auxArray[q.index1].o.transform.GetChild(1).gameObject.activeInHierarchy);
                auxArray[q.index1].o.transform.GetChild(1).GetChild(0).GetComponentInChildren<TextMeshPro>().text = q.message;
                break;
            case 10: // copy array[q.index2] to auxArray[q.index1]
                auxArray[q.index1].value = array[q.index2].value;
                var t = auxArray[q.index1].o.GetComponentInChildren<TextMeshPro>();
                t.text = auxArray[q.index1].value.ToString();
                auxAccesses++;
                accesses++;
                break;

            case 11: // copy auxArray[q.index2] to array[q.index1]
                array[q.index1].value = auxArray[q.index2].value;
                t = array[q.index1].o.GetComponentInChildren<TextMeshPro>();
                t.text = array[q.index1].value.ToString();
                auxAccesses++;
                accesses++;
                break;

            case 12: // shrink all elements in auxArray to 0, effectively hiding them
                for (int i = 0; i < size; i++){
                    auxArray[i].o.transform.localScale = new Vector3(0, 0, 0);
                }
                break;
            case 13: // make the cells in an auxarray visible with empty values
                for(int i = q.index1; i <= q.index2; i++){
                    t = auxArray[i].o.GetComponentInChildren<TextMeshPro>();
                    t.text = "";
                    auxArray[i].o.transform.localScale = new Vector3(.75f, .75f, .75f);
                }
                break;
        }
        /*
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
        }*/
    }
}
