using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveRight : MonoBehaviour
{
    [SerializeField] Camera cam;
    public void camRight()
    {
        cam.transform.position = new Vector3(cam.transform.position.x + 2, cam.transform.position.y, cam.transform.position.z);
    }
}
