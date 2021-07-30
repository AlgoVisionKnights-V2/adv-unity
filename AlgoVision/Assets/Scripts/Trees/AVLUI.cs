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
    [SerializeField] GameObject cam;
    [SerializeField] Slider speedSlider;

    // Start is called before the first frame update
    void Start()
    {
        a = new AVL(0, spherePrefab);
        int startSize = FindObjectOfType<TMP_Dropdown>().value;
        //FindObjectOfType<TMP_InputField>.SetActive(false); // makes input field invisible
        //a.time = speedSlider.value;
        canvas = GameObject.Find("Canvas");
        speedSlider = canvas.transform.GetChild(1).GetComponent<Slider>();
        canvas.transform.GetChild(13).gameObject.SetActive(false);
        canvas.transform.GetChild(15).GetChild(1).gameObject.SetActive(false);
        canvas.transform.GetChild(15).GetChild(2).gameObject.SetActive(false);
        canvas.transform.GetChild(14).GetChild(1).GetComponent<TMP_Text>().text = "";
        canvas.transform.GetChild(14).GetChild(0).GetComponent<TMP_Text>().text = "";
        chooseVis(startSize);

    }

    void chooseVis(int startSize)
    {
        switch (startSize)
        {
            case 0:
                {
                    Camera.main.orthographicSize = 14;
                    a.insertRandom(7);
                    StartCoroutine(a.readQueue());
                    break;
                }
            case 1:
                {
                    Camera.main.orthographicSize = 14;
                    a.insertRandom(15);
                    StartCoroutine(a.readQueue());
                    break;
                }
            case 2:
                {

                    Camera.main.orthographicSize = 24;
                    a.insertRandom(31);
                    StartCoroutine(a.readQueue());
                    break;
                }
            case 3:
                {
                    Camera.main.orthographicSize = 14;
                    canvas.transform.GetChild(5).GetComponent<TMP_Text>().text = "Choose Values To Insert or Delete!";
                    canvas.transform.GetChild(13).gameObject.SetActive(true);
                    
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

    /*public void tipToggle()
    {
        Debug.Log(FindObjectOfType<TMP_Dropdown>().value);

        if (toggleStatus)
        {
            toggleStatus = false;
            canvas.transform.GetChild(15).GetChild(1).gameObject.SetActive(false);
            if(FindObjectOfType<TMP_Dropdown>().value == 3)
            {
                canvas.transform.GetChild(15).GetChild(2).gameObject.SetActive(false);
            }
            
        }
        else
        {
            toggleStatus = true;
            canvas.transform.GetChild(15).GetChild(1).gameObject.SetActive(true);
            if (FindObjectOfType<TMP_Dropdown>().value == 3)
            {
                canvas.transform.GetChild(15).GetChild(2).gameObject.SetActive(true);
            }
        }
    }*/
}
