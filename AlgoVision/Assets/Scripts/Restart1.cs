using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Restart1 : MonoBehaviour
{
    [SerializeField] Slider timeSlider;
    [SerializeField] AVLInput pppwhateverreally;
    
    public void restartScene()
    {
        timeSlider.value = 1;
        SceneManager.LoadScene(SceneManager.GetActiveScene().name);
        pppwhateverreally.umsthing();
    }
}
