using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System;

public class BitOperUI : MonoBehaviour
{

    //[SerializeField] BubbleSort v;
    [SerializeField] Slider speedSlider;
    private Boolean isPlay;
    int startSize;
    // Start is called before the first frame update
    void Start()
    {
        var canvas = GameObject.Find("Canvas");
        speedSlider = canvas.transform.GetChild(1).GetComponent<Slider>();
        startSize = FindObjectOfType<TMP_Dropdown>().value;

        
        //v.time = 1;
        isPlay = false;
        //StartCoroutine(v.readQueue(v.canvas));
    }

    // Update is called once per frame
    void Update()
    {
        //v.time = speedSlider.value;
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

