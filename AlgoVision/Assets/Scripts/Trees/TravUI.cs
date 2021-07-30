using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System;
public class TravUI : MonoBehaviour
{
    bool toggleStatus;
    [SerializeField] traversals a;
    [SerializeField] GameObject spherePrefab;
    [SerializeField] GameObject canvas;
    [SerializeField] GameObject cam;
    [SerializeField] Slider speedSlider;

    // Start is called before the first frame update
    void Start()
    {
        a = new traversals(0, spherePrefab);
        
        int startSize = FindObjectOfType<TMP_Dropdown>().value;
        //FindObjectOfType<TMP_InputField>.SetActive(false); // makes input field invisible
        //a.time = speedSlider.value;
        canvas = GameObject.Find("Canvas");
        speedSlider = canvas.transform.GetChild(1).GetComponent<Slider>();
        canvas.transform.GetChild(13).gameObject.SetActive(false);
        canvas.transform.GetChild(15).GetComponent<TMP_Text>().text = "Print order:";
        canvas.transform.GetChild(16).GetComponent<TMP_Text>().text = "";
        toggleStatus = false;
        canvas.transform.GetChild(14).GetChild(1).gameObject.SetActive(false);
             
        switch (startSize)
        {
            case 0:
                {
                    Camera.main.orthographicSize = 14;
                    a.printOrder(0);
                    StartCoroutine(a.readQueue());
                    break;
                }
            case 1:
                {
                    Camera.main.orthographicSize = 14;
                    a.printOrder(1);
                    StartCoroutine(a.readQueue());
                    break;
                }
            case 3:
                {

                    Camera.main.orthographicSize = 14;
                    a.printOrder(2);
                    StartCoroutine(a.readQueue());
                    break;
                }
            case 4:
                {
                    canvas.transform.GetChild(16).GetComponent<TMP_Text>().text = "Queue:";
                    Camera.main.orthographicSize = 14;
                    a.printOrder(3);
                    StartCoroutine(a.readQueue());
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

    public void tipToggle()
    {
        Debug.Log(FindObjectOfType<TMP_Dropdown>().value);

        if (toggleStatus)
        {
            toggleStatus = false;
            canvas.transform.GetChild(14).GetChild(1).gameObject.SetActive(false);
            
        }
        else
        {
            toggleStatus = true;
            canvas.transform.GetChild(14).GetChild(1).gameObject.SetActive(true);
        }
    }
}
