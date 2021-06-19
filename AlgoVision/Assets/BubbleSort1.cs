using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BubbleSort1 : MonoBehaviour
{
    public int numCubes = 15;
    public int cubeHeightMax = 15;
    public GameObject[] cubes;
    public static float frameSpeed = 0.5f;
    // Start is called before the first frame update
    public void sort()
    {
        createCubes();
 
        StartCoroutine(bubbleSort(cubes));
    }
    IEnumerator bubbleSort(GameObject[] arr)
    {
        Vector3 position;
        for (int i = 0; i < arr.Length; i++)
        {
            for (int j = 0; j < arr.Length - i - 1; j++)
            {
                arr[j].GetComponent<Renderer>().material.color = Color.red;
                arr[j + 1].GetComponent<Renderer>().material.color = Color.red;
                yield return new WaitForSeconds(frameSpeed);
                
                if (arr[j].transform.localScale.y > arr[j + 1].transform.localScale.y)
                {
                    // swap temp and cubes[i]
                    GameObject temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;

                    position = arr[j].transform.localPosition;
                    arr[j].transform.localPosition =
                        new Vector3(arr[j + 1].transform.localPosition.x, position.y, position.z);
                    arr[j + 1].transform.localPosition =
                        new Vector3(position.x, arr[j + 1].transform.localPosition.y, arr[j + 1].transform.localPosition.z);
                }
                arr[j].GetComponent<Renderer>().material.color = Color.white;
                arr[j + 1].GetComponent<Renderer>().material.color = Color.white;
            }
        }
    }
    void createCubes()
    {
        cubes = new GameObject[numCubes];
        for (int i = 0; i < numCubes; i++)
        {
            cubes[i] = GameObject.CreatePrimitive(PrimitiveType.Cube);
            int randNum = Random.Range(1, cubeHeightMax + 1);
            cubes[i].GetComponent<Text>().text = randNum.ToString();
            cubes[i].transform.localScale = new Vector3(0.9f, randNum, 1);
            cubes[i].transform.position = new Vector3(i, randNum/2.0f, 0);

            cubes[i].transform.parent = this.transform;
        }
        transform.position = new Vector3(-numCubes/2f, -cubeHeightMax/2f, 0);

    }

    // Update is called once per frame
    void Update()
    {
        
    }
}

