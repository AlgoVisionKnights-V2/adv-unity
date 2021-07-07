using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using System;

public class ObjectFuncGrabberBS : MonoBehaviour
{
    [SerializeField] GameObject thing;
    [SerializeField] GameObject valueText;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void Locate()
    {
        if (valueText.GetComponent<TMP_InputField>().text == "")
        {
            return;
        }
        
        thing = GameObject.Find("algo");
        thing.GetComponent<BinarySearch>().search(Int32.Parse(valueText.GetComponent<TMP_InputField>().text));
        valueText.GetComponent<TMP_InputField>().text = "";
        thing.GetComponent<BinarySearch>().StartCoroutine(thing.GetComponent<BinarySearch>().readQueue());
    }
}
