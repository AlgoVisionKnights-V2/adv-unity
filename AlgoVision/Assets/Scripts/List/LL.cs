using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class LL : MonoBehaviour
{
    [SerializeField] public GameObject canvas;
    // Start is called before the first frame update
    void Start()
    {
        canvas = GameObject.Find("Canvas");
        canvas.transform.GetChild(3).GetComponent<TMP_Text>().text = "New Linked List, Enter a new node";
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
