using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System;

public class HeapSortUI : MonoBehaviour
{

    [SerializeField] HeapSort h;
    [SerializeField] Slider speedSlider;
    [SerializeField] GameObject spherePrefab;
    [SerializeField] GameObject boxPrefab;

    private Boolean isPlay;
    int startSize;
    // Start is called before the first frame update
    void Start()
    {
        speedSlider = h.canvas.transform.GetChild(1).GetComponent<Slider>();
        startSize = FindObjectOfType<TMP_Dropdown>().value;

        if (startSize == 2) //21
        {
            h = new HeapSort(boxPrefab, spherePrefab, 21);
        }
        else if (startSize == 1) //13
        {
            h = new HeapSort(boxPrefab, spherePrefab, 13);
        }
        else //7
        {
            h = new HeapSort(boxPrefab, spherePrefab, 7);
        }
 
        h.time = 1;
        isPlay = false;
        h.sort();
        StartCoroutine(h.readQueue());
    }

    // Update is called once per frame
    void Update()
    {
        h.time = speedSlider.value;
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

