using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System;
public class TravUI : MonoBehaviour
{

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
            case 2:
                {

                    Camera.main.orthographicSize = 14;
                    a.printOrder(2);
                    StartCoroutine(a.readQueue());
                    break;
                }
            case 3:
                {
                    canvas.transform.GetChild(16).GetComponent<TMP_Text>().text = "Queue:";
                    Camera.main.orthographicSize = 14;
                    /*canvas.transform.GetChild(5).GetComponent<TMP_Text>().text = "Choose Values To Insert or Delete!";
                    canvas.transform.GetChild(13).gameObject.SetActive(true);*/
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

    void insertKeys()// attach inputfield on the canvas to this functionStartCoroutine(a.readQueue());
    {

        string inputs = "";//= canvas.transform.GetChild(13).GetComponent<TMP_Text>().text;// grab string from canvas

        // clear text input field

        string[] textInputs = inputs.Split(',');// split string into tokens by the commas
        int[] keys = new int[textInputs.Length];


        // converting string into arrays
            // check if its a valid string
                // no letters
                // no 0's

        // send that shit to customInsert()
        // StartCoroutine(a.readQueue());
    }
}
