using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Restart : MonoBehaviour
{
    [SerializeField] Slider timeSlider;
    public void restartScene()
    {
        timeSlider.value = 1;
        SceneManager.LoadScene(SceneManager.GetActiveScene().name);
    }
}
