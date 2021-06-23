using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using TMPro;
public class BellmanFordUI : MonoBehaviour
{
    [SerializeField] BellmanFord a;

    [SerializeField] Slider speedSlider;
    private bool isPlay;
    public GameObject canvas;
    // Start is called before the first frame update
    void Start()
    {
        canvas = GameObject.Find("Canvas");
        speedSlider = canvas.transform.GetChild(1).GetComponent<Slider>();
        int headNode = FindObjectOfType<TMP_Dropdown>().value;
        Debug.Log(a);
        a.Setup(headNode);
        StartCoroutine(a.readQueue());
    }

    // Update is called once per frame
    void Update()
    {
       a.time = speedSlider.value;
    }
    public void restartScene()
    {
        SceneManager.LoadScene("BellmanTest");
    }
    public void pauseAndPlay()
    {
        if (isPlay)
        {
            Time.timeScale = 1;
            isPlay = false;
            canvas.transform.GetChild(2).GetComponent<Image>().color = new Color(1f, 1f, 1f, 1);
        }
        else
        {
            Time.timeScale = 0;
            isPlay = true;
            canvas.transform.GetChild(2).GetComponent<Image>().color = new Color(0.573f, 1f, 0f, 1);
        }
    }
}
