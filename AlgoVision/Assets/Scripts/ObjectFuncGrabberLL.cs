using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using System;

public class ObjectFuncGrabberLL : MonoBehaviour
{
    [SerializeField] GameObject thing;
    [SerializeField] GameObject valueText;
    [SerializeField] GameObject posText;
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
        if (valueText.GetComponent<TMP_InputField>().text == "" || posText.GetComponent<TMP_InputField>().text == "")
        {
            return;
        }
        
        thing = GameObject.Find("algo");
        thing.GetComponent<LinkedList>().insertNode(Int32.Parse(valueText.GetComponent<TMP_InputField>().text), Int32.Parse(posText.GetComponent<TMP_InputField>().text));
        valueText.GetComponent<TMP_InputField>().text = "";
        posText.GetComponent<TMP_InputField>().text = "";
    }
}
