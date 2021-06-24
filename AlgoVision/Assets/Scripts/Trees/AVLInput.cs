using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System;

public class AVLInput : MonoBehaviour
{
    [SerializeField] GameObject spherePrefab;
    public AVL b;
    [SerializeField] Slider speedSlider;
    [SerializeField] GameObject inputField;

    void Start()
    {
        speedSlider = GameObject.Find("Canvas").transform.GetChild(1).GetComponent<Slider>();
        inputField = GameObject.Find("Canvas").transform.GetChild(13).gameObject;
        b = new AVL(0, spherePrefab);
    }
    public void umsthing()
    {
        Debug.Log("Current TIME: " + b.time);
        speedSlider = GameObject.Find("Canvas").transform.GetChild(1).GetComponent<Slider>();
        b = new AVL(0, spherePrefab);
    }
    void Update()
    {
        b.time = speedSlider.value;
        //Debug.Log("After TIME: " + b.time);
    }

    public void readInput()
    {
        bool yagud = true;
        string inputs = inputField.GetComponent<TMP_InputField>().text;
        Debug.Log(inputs);
        // clear text input field

        string[] textInputs = inputs.Split(',');// split string into tokens by the commas
        int[] keys = new int[textInputs.Length];

        for(int i = 0; i < keys.Length; i++)
        {
            try
            {
                keys[i] = Int32.Parse(textInputs[i]);
            }
            catch(FormatException)
            {
                //to do, add alert
                Debug.Log("Cant convert " + textInputs[i] + " to int");
            }

            if(keys[i] == 0)
            {
                yagud = false;
            }
        }

        if(yagud)
        {
            
            b.customInserts(keys);
            StartCoroutine(b.readQueue());
        }
    }
}
