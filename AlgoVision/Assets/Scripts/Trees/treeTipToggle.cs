using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;


public class treeTipToggle : MonoBehaviour
{
    bool toggleStatus;
    [SerializeField] public GameObject canvas;

    // Start is called before the first frame update
    void Start()
    {
        toggleStatus = false;
        canvas.transform.GetChild(15).gameObject.SetActive(true);
        canvas.transform.GetChild(15).GetChild(1).gameObject.SetActive(false);
    }

    public void tipToggle()
    {
        Debug.Log(FindObjectOfType<TMP_Dropdown>().value);

        if (toggleStatus)
        {
            toggleStatus = false;
            canvas.transform.GetChild(15).GetChild(1).gameObject.SetActive(false);
            if (FindObjectOfType<TMP_Dropdown>().value == 3)
            {
                canvas.transform.GetChild(15).GetChild(2).gameObject.SetActive(false);
            }

        }
        else
        {
            toggleStatus = true;
            canvas.transform.GetChild(15).GetChild(1).gameObject.SetActive(true);
            if (FindObjectOfType<TMP_Dropdown>().value == 3)
            {
                canvas.transform.GetChild(15).GetChild(2).gameObject.SetActive(true);
            }
        }
    }

    public void travTipToggle()
    {
        Debug.Log(FindObjectOfType<TMP_Dropdown>().value);

        if (toggleStatus)
        {
            toggleStatus = false;
            canvas.transform.GetChild(14).GetChild(1).gameObject.SetActive(false);

        }
        else
        {
            toggleStatus = true;
            canvas.transform.GetChild(14).GetChild(1).gameObject.SetActive(true);
        }
    }
}
