using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CoinMgmt : MonoBehaviour
{
    public static int coins = 0;
    public int LocalCoins;
    public GameObject ShopDisplay;

    void Update () {
        LocalCoins = coins;
        ShopDisplay.GetComponent<Text> ().text = "Coins: " + LocalCoins;
    }
}