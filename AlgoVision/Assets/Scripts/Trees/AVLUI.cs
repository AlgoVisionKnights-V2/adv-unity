using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System;
public class AVLUI : MonoBehaviour
{

    [SerializeField] AVL a;
    [SerializeField] GameObject spherePrefab;
    [SerializeField] GameObject canvas;
    [SerializeField] Slider speedSlider;
    [SerializeField] GameObject inputText;

    // Start is called before the first frame update
    void Start()
    {
        a = new AVL(0, spherePrefab);
        int startSize = FindObjectOfType<TMP_Dropdown>().value;
        //FindObjectOfType<TMP_InputField>.SetActive(false); // makes input field invisible
        //a.time = speedSlider.value;
        canvas = GameObject.Find("Canvas");
        speedSlider = canvas.transform.GetChild(1).GetComponent<Slider>();
       // inputText = canvas.transform.GetChild(13);
        switch (startSize)
        {
            case 0:
                {
                    a.insertRandom(7);
                    StartCoroutine(a.readQueue());
                    break;
                }
            case 1:
                {
                    a.insertRandom(15);
                    StartCoroutine(a.readQueue());
                    break;
                }
            case 2:
                {
                    a.insertRandom(31);
                    StartCoroutine(a.readQueue());
                    break;
                }
            case 3:
                {
                    //inputText.SetActive(false);
                    //a.testInserts();
                    int[] arrayA = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 14, 16, -12, -14, -6, -7, -8 };
                    int[] arrayB = { 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 30, 32, -30, -30, -14 };
                    a.customInserts(arrayA);
                    StartCoroutine(a.readQueue());
                    a.customInserts(arrayB);
                    StartCoroutine(a.readQueue());
                    //convert input field value to integers, if possible
                    //send integers to insertion
                    break;
                }
            default:
                {
                    Debug.Log("Uh oh, i made a fucky wucky");
                    break;
                }
        }

    }

    // Update is called once per frame
    void Update()
    {
        a.time = speedSlider.value;
    }

    void insertKeys()
    {

    }
}
