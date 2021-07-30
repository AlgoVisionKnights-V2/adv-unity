using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class CameraFitAVL : MonoBehaviour
{
    public bool maitainWidth = true;
    float defaultWidth;
    Vector3 CameraPos;
    int startSize;

    // Start is called before the first frame update
    void Start()
    {
        startSize = FindObjectOfType<TMP_Dropdown>().value;
        
        if (startSize != 2)
        {
            defaultWidth = 16.0f * 1.825866f;

        }
        else
        {
            defaultWidth = 26.0f * 1.825866f;
        }

    }

    // Update is called once per frame
    void Update()
    {
        if (maitainWidth)
        {
            Camera.main.orthographicSize = defaultWidth / Camera.main.aspect;

            //Camera.main.transform.position = new Vector3(CameraPos.x, -1 * (defaultHeight - Camera.main.orthographicSize), CameraPos.z);
            //Camera.main.transform.position = new Vector3(CameraPos.x, CameraPos.y, CameraPos.z);
        }
        else
        {

        }
    }

    public void Refresh()
    {
        startSize = FindObjectOfType<TMP_Dropdown>().value;

        if (startSize != 2)
        {
            defaultWidth = 16.0f * 1.825866f;


        }
        else
        {
            defaultWidth = 26.0f * 1.825866f;
        }

    }
}
