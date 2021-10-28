using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class CoinTotal : MonoBehaviour
{
    public static int totalCoins = 0;
    TextMeshPro text;

    private void Start()
    {
        text = GetComponent<TextMeshPro>();
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.layer == 3 || other.gameObject.layer == 7)
        {
            totalCoins++;
            text.text = totalCoins.ToString();
            Destroy(other.gameObject);
        }
    }

}

