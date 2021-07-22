using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System;

public class BitOperUI : MonoBehaviour
{

    [SerializeField] BitOper v;
    [SerializeField] Slider speedSlider;
    private Boolean isPlay;
    int startSize;
    // Start is called before the first frame update
    void Start()
    {
        var canvas = GameObject.Find("Canvas");
        speedSlider = canvas.transform.GetChild(1).GetComponent<Slider>();
        v.oper = FindObjectOfType<TMP_Dropdown>().value;

        //v.time = 1;
        isPlay = false;
    }
    public void run()
    {
        //StartCoroutine(v.operation());
        v.operation();
    }

    // Update is called once per frame
    void Update()
    {
        //v.time = speedSlider.value;
        if (v.oper == 3)
        {
            v.canvas.transform.GetChild(7).GetComponent<TMP_InputField>().enabled = false;
        }
    }
    public void selectOperation()
    {
        if (startSize == 2)
        {
            speedSlider.value = 2f;
        }
        else if (startSize == 1)
        {
            speedSlider.value = 1f;
        }
        else
        {
            speedSlider.value = 0.1f;
        }
    }
    public void pauseAndPlay()
    {
        if (isPlay)
        {
            Time.timeScale = 1;
            isPlay = false;
        }
        else
        {
            Time.timeScale = 0;
            isPlay = true;
        }
    }
}

