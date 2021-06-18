using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AlgoSingleton : MonoBehaviour
{
    public static AlgoSingleton instance;
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

