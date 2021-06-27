using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using System;

public class ObjectFuncGrabberLLDel : MonoBehaviour
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
        thing = GameObject.Find("algo");
        thing.GetComponent<LinkedList>().deleteNode(Int32.Parse(valueText.GetComponent<TMP_InputField>().text), Int32.Parse(posText.GetComponent<TMP_InputField>().text));
    }
}
