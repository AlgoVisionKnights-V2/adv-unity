using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System;
using TMPro;
public class BitOper : MonoBehaviour
{
    [SerializeField] GameObject boxPrefab;
    [SerializeField] public GameObject canvas;
    [SerializeField] GameObject input1;
    [SerializeField] GameObject input2;
    private GameObject[] num1List;
    private GameObject[] num2List;
    private GameObject[] resultList;
    private Boolean isPlay;
    public int oper, num1, num2, result;
    protected TMP_Text showText;
    void Start()
    {
        canvas = GameObject.Find("Canvas");
        showText = canvas.transform.GetChild(3).GetComponent<TMP_Text>();

        // create 8 bit
    }
    
    public void operation()
    {
        var n1 = input1.GetComponent<TMP_InputField>().text;
        var n2 = input2.GetComponent<TMP_InputField>().text;
        num1 = Int32.Parse(n1);
        num2 = Int32.Parse(n2);
        switch (oper)
        {
            case 0: // AND
                result = num1 & num2;
                showText.text = "Start AND Process";
                break;
            case 1: // OR
                result = num1 | num2;
                showText.text = "Start OR Process";
                break;
            case 2: // XOR
                result = num1 ^ num2;
                showText.text = "Start XOR Process";
                break;
            case 3: // Not
                result = ~num1;
                break;
            case 4: // Left Shift
                break;
            case 5: // Right Shift
                break;
            default: // AND
                break;
        }
        createObject();
        return;
    }

    private void createObject()
    {
        num1List = new GameObject[8];
        num2List = new GameObject[8];
        resultList = new GameObject[8];
        string n1 = autoFillBit(Convert.ToString(num1, 2));
        string n2 = autoFillBit(Convert.ToString(num2, 2));
        string res = autoFillBit(Convert.ToString(result, 2));
        // x:4 , y:6
        for (int i = 0; i < 8; i++)
        {
            num1List[i] = GameObject.Instantiate(boxPrefab);
            num1List[i].transform.position = new Vector3(4 + 2 * i, 7);
            num1List[i].transform.GetChild(1).GetComponent<TMP_Text>().text = Convert.ToString(128/Math.Pow(2, i));
            num1List[i].transform.GetChild(0).GetComponent<TMP_Text>().text = n1[i] + "";
        }
        for (int i = 0; i < 8; i++)
        {
            num2List[i] = GameObject.Instantiate(boxPrefab);
            num2List[i].transform.position = new Vector3(4 + 2 * i, 5);
            num2List[i].transform.GetChild(1).GetComponent<TMP_Text>().text = Convert.ToString(128 / Math.Pow(2, i));
            num2List[i].transform.GetChild(0).GetComponent<TMP_Text>().text = n2[i] + "";
        }
        // print the result
        for (int i = 0; i < 8; i++)
        {
            resultList[i] = GameObject.Instantiate(boxPrefab);
            resultList[i].transform.position = new Vector3(4 + 2 * i, 2);
            resultList[i].transform.GetChild(1).GetComponent<TMP_Text>().text = Convert.ToString(128 / Math.Pow(2, i));
            resultList[i].transform.GetChild(0).GetComponent<TMP_Text>().text = res[i] + "";
        }
    }

    private string autoFillBit(String bit)
    {
        for (int i = bit.Length; i < 8; i++)
        {
            bit = "0" + bit;
        }
        return bit;
    }

}
