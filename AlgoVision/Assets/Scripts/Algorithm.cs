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
        COLOR_ALL,
        UPDATE_MESSAGE,
        UPDATE_OBJECT_TEXT,
        RAISE_ALL,
        LOWER_ALL,
        COPY_MAIN,
        COPY_AUX,
        HIDE,
        SHOW,
        TOGGLE_ARROW,
        MAKE_HEAP_NODE,
        DELETE_HEAP_NODE,
        COLOR_EDGE,
        UPDATE_QUEUE_MESSAGE,
        UPDATE_VERTEX,
        EDGE_CANCEL,
        EDGE_UPDATE,
        CREATE_NODE,
        LINK_NODE,
        COLOR_NODE,
        MOVE_NODE,
        COLOR_TREE,
        COLOR_BRANCH,
        UPDATE_BALANCE_LEFT,
        UPDATE_BALANCE_RIGHT,
        HIDE_BALANCE,
        DELETE_NODE,
        UPDATE_BOARD,
        UPDATE_COORDS
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
        YELLOW,
        GREEN_OTHER,
        BLUE_OTHER,
        DEFAULT
    }
    
}
