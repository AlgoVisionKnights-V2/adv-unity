using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System;

public class LinearSearchUI : MonoBehaviour
{
    [SerializeField] LinearSearch v;
    [SerializeField] Slider speedSlider;
    [SerializeField] InputField userInput;

    private Boolean isPlay;
    int startSize;
    // Start is called before the first frame update
    void Start()
    {
        speedSlider = v.canvas.transform.GetChild(1).GetComponent<Slider>();
        startSize = FindObjectOfType<TMP_Dropdown>().value;

        if (startSize == 2)
        {
            v.setup(21,15);
        }
        else if (startSize == 1)
        {
            v.setup(13,15);
        }
        else
        {
            v.setup(8,15);
        }
 
        v.time = 1;
        isPlay = false;
        //StartCoroutine(v.readQueue());
    }

    // Update is called once per frame
    void Update()
    {
        v.time = speedSlider.value;
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