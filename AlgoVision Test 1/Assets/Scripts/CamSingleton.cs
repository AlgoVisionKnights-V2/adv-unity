using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CamSingleton : MonoBehaviour
{
    public static CamSingleton instance;
    // Start is called before the first frame update
    void Awake()
    {
        if (instance == null)
        {
            DontDestroyOnLoad(gameObject);
            instance = this;
        }
        else if (instance != this)
        {
            Destroy(gameObject);
        }
    }
}

