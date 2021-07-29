using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class sortToolTips : MonoBehaviour
{
    bool toggleStatus;
    [SerializeField] public GameObject canvas;

    // Start is called before the first frame update
    void Start()
    {
        toggleStatus = false;
        canvas.transform.GetChild(13).gameObject.SetActive(true);
        canvas.transform.GetChild(13).GetChild(1).gameObject.SetActive(false);
    }

    public void toggleTips()
    {
        if (toggleStatus)
        {
            toggleStatus = false;
            canvas.transform.GetChild(13).GetChild(1).gameObject.SetActive(false);

        }
        else
        {
            toggleStatus = true;
            canvas.transform.GetChild(13).GetChild(1).gameObject.SetActive(true);
        }
    }
}