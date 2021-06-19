using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Random = System.Random;
using System.Diagnostics;

public abstract class Algorithm : MonoBehaviour
{
    public Random r = new Random();
    public float time, completionPercent;
    public long stopTime, currentTime;
    public static Stopwatch timer = new System.Diagnostics.Stopwatch();
}
