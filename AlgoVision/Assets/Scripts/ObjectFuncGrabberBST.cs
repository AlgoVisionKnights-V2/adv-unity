using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectFuncGrabberBST : MonoBehaviour
{
    [SerializeField] GameObject thing;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void Locate()
    {
        thing = GameObject.Find("InputUI");
        thing.GetComponent<BSTInput>().readInput();
    }
}
