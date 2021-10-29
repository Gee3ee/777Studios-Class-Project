using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GlobalShop : MonoBehaviour
{
    public static string Item01;
    public static string Item02;
    public static string Item03;
    public static string Item04;
    public static int ShopNum;

    public static int Item01Price;
    public static int Item02Price;
    public static int Item03Price;
    public static int Item04Price;

    void Update()
    {
        if (ShopNum == 1){
            Item01 = "Attack+";
            Item01Price = 10;
            Item02 = "Defense+";
            Item02Price = 10;
            Item03 = "Key";
            Item03Price = 5;
            Item04 = "Mysterious Orb";
            Item04Price = 20;
        }
        if (ShopNum == 2){
            Item01 = "Attack+";
            Item02 = "Defense+";
            Item03 = "Key";
            Item04 = "";
        }
    }
}