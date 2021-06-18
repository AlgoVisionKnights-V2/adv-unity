using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System;

public class Pause : MonoBehaviour
{
    private Boolean isPlay;
    [SerializeField] GameObject canvas;
    
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void pauseAndPlay()
    {
        if (isPlay)
        {
            Time.timeScale = 1;
            isPlay = false;
            canvas.transform.GetChild(2).GetComponent<Image>().color = new Color(1f, 1f, 1f, 1);
        }
        else
        {
            Time.timeScale = 0;
            isPlay = true;
            canvas.transform.GetChild(2).GetComponent<Image>().color = new Color(0.573f, 1f, 0f, 1);
        }
    }
}
