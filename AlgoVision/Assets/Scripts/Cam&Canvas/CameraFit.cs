using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class CameraFit : MonoBehaviour
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
            defaultWidth = 6.0f * 2.625866f;

        }
        else
        {
            defaultWidth = 8.5f * 2.625866f;
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
            defaultWidth = 6.0f * 2.625866f;

        }
        else
        {
            defaultWidth = 8.5f * 2.625866f;
        }

    }
}
