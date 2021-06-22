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
                    inputText.SetActive(false);
                    Debug.Log("HADFJAEFHIUEFHIUSEF");
                    a.customInserts();
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
