using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System;

public class BSTInput : MonoBehaviour
{
    [SerializeField] GameObject spherePrefab;
    public BST b;
    [SerializeField] Slider speedSlider;
    [SerializeField] GameObject inputField;
    void Start()
    {
        speedSlider = GameObject.Find("Canvas").transform.GetChild(1).GetComponent<Slider>();
        inputField = GameObject.Find("Canvas").transform.GetChild(13).gameObject;
        b = new BST(0, spherePrefab);
    }
    public void umsthing()
    {
        Debug.Log("Current TIME: " + b.time);
        speedSlider = GameObject.Find("Canvas").transform.GetChild(1).GetComponent<Slider>();
        b = new BST(0, spherePrefab);
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
                GameObject.Find("Canvas").transform.GetChild(5).GetComponent<TMP_Text>().text = "Can not insert " + textInputs[i] + " because it is not a number";
                Debug.Log("Cant convert " + textInputs[i] + " to int");
                keys[i] = -1;
                yagud = false;
            }

            if(keys[i] == 0)
            {
                GameObject.Find("Canvas").transform.GetChild(5).GetComponent<TMP_Text>().text = "Please remove 0 from your inserts.";
                yagud = false;
            }

            if(keys[i] > 999 || keys[i] < -999)
            {
                yagud = false;
                GameObject.Find("Canvas").transform.GetChild(5).GetComponent<TMP_Text>().text = "Please only insert or delete numbers between 1 and 999.";
            }
        }

        if(yagud)
        {
            inputField.GetComponent<TMP_InputField>().text = "";
            b.customInserts(keys);
            StartCoroutine(b.readQueue());
        }
    }
}
