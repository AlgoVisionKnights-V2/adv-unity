using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class QueenToolTips : MonoBehaviour
{
    bool toggleStatus;
    [SerializeField] public GameObject canvas;

    // Start is called before the first frame update
    void Start()
    {
        toggleStatus = false;
        canvas.transform.GetChild(16).gameObject.SetActive(true);
        canvas.transform.GetChild(16).GetChild(1).gameObject.SetActive(false);
    }

    public void toggleTips()
    {
        if (toggleStatus)
        {
            toggleStatus = false;
            canvas.transform.GetChild(16).GetChild(1).gameObject.SetActive(false);

        }
        else
        {
            toggleStatus = true;
            canvas.transform.GetChild(16).GetChild(1).gameObject.SetActive(true);
        }
    }
}
