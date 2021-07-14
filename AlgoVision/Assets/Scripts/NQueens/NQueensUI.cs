using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System;

public class NQueensUI : MonoBehaviour
{

    [SerializeField] NQueens v;
    [SerializeField] Slider speedSlider;

    private Boolean isPlay;
    int startSize;
    // Start is called before the first frame update
    void Start()
    {
        speedSlider = FindObjectOfType<Slider>();
        startSize = FindObjectOfType<TMP_Dropdown>().value;

        if (startSize == 2)
        {
            v.setup(8);
        }
        else if (startSize == 1)
        {
            v.setup(6);
        }
        else
        {
            v.setup(4);
        }
 
        v.time = 1;
        isPlay = false;
        StartCoroutine(v.build(0));
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

