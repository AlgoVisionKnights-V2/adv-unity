using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System;
public class BitOper : MonoBehaviour
{
    [SerializeField] GameObject boxPrefab;
    [SerializeField] public GameObject canvas;

    private Boolean isPlay;
    private int oper;
    void Start()
    {
        canvas = GameObject.Find("Canvas");
    }
    

    public void operation()
    {
        switch (oper)
        {
            case 0: // AND
                break;
            case 1: // OR
                break;
            case 2: // XOR
                break;
            case 3: // Not
                break;
            case 4: // Left Shift
                break;
            case 5: // Right Shift
                break;
            default: // AND
                break;
        }
    }



}
