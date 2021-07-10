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

    public enum Commands{
        WAIT,
        COLOR_ONE,
        COLOR_TWO,
        SWAP,
        RAISE,
        LOWER,
        COLORALL,
        UPDATE_MESSAGE,
        UPDATE_OBJECT_TEXT,
        RAISE_ALL,
        LOWER_ALL,
        COPY_MAIN,
        COPY_AUX,
        HIDE,
        SHOW
    }
    public enum Array {
        MAIN,
        AUX
    }
    public enum Colors {
        WHITE,
        BLACK,
        RED,
        BLUE,
        GREEN,
        YELLOW
    }
}
