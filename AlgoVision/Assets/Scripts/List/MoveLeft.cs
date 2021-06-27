using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveLeft : MonoBehaviour
{
    [SerializeField] GameObject cam;
    public void camLeft()
    {
        cam.transform.position = new Vector3(cam.transform.position.x - 2, cam.transform.position.y, cam.transform.position.z);
    }
}
