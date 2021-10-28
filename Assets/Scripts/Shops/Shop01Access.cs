using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Shop01Access : MonoBehaviour
{
    public GameObject ShopInventory;
    public GameObject Item01Text;
    public GameObject Item02Text;
    public GameObject Item03Text;
    public GameObject Item04Text;
    public GameObject ItemCompletion;
    public GameObject CompleteText;

    public GameObject Item01PriceBox;
    public GameObject Item02PriceBox;
    public GameObject Item03PriceBox;
    public GameObject Item04PriceBox;

    public int ItemPurchaseNum;
    public GameObject NotEnough;

    void OnTriggerEnter (Collider collision) {
        GlobalShop.ShopNum = 1;
        Item01Text.GetComponent<Text> ().text = "" + GlobalShop.Item01;
        Item02Text.GetComponent<Text> ().text = "" + GlobalShop.Item02;
        Item03Text.GetComponent<Text> ().text = "" + GlobalShop.Item03;
        Item04Text.GetComponent<Text> ().text = "" + GlobalShop.Item04;
        Item01PriceBox.GetComponent<Text> ().text = "Price: " + GlobalShop.Item01Price;
        Item02PriceBox.GetComponent<Text> ().text = "Price: " + GlobalShop.Item02Price;
        Item03PriceBox.GetComponent<Text> ().text = "Price: " + GlobalShop.Item03Price;
        Item04PriceBox.GetComponent<Text> ().text = "Price: " + GlobalShop.Item04Price;
        ShopInventory.SetActive (true);
    }
    void OnTriggerExit (Collider collision) {
        ItemCompletion.SetActive(false); 
        ShopInventory.SetActive (false);
        NotEnough.SetActive(false);
    }

    public void Item01() {
        ItemCompletion.SetActive(true);
        CompleteText.GetComponent<Text>().text = "Are you sure you want to buy " + GlobalShop.Item01 + "?";
        ItemPurchaseNum = 1;
    }
    public void Item02() {
        ItemCompletion.SetActive(true);
        CompleteText.GetComponent<Text>().text = "Are you sure you want to buy " + GlobalShop.Item02 + "?";
        ItemPurchaseNum = 2;
    }
    public void Item03() {
        ItemCompletion.SetActive(true);
        CompleteText.GetComponent<Text>().text = "Are you sure you want to buy " + GlobalShop.Item03 + "?";
        ItemPurchaseNum = 3;
    }
    public void Item04() {
        ItemCompletion.SetActive(true);
        CompleteText.GetComponent<Text>().text = "Are you sure you want to buy " + GlobalShop.Item04 + "?";
        ItemPurchaseNum = 4;
    }
    public void CancelTransaction () {
        ItemCompletion.SetActive (false);
        ItemPurchaseNum = 0;
        NotEnough.SetActive(false);
    }
    public void CompleteTransaction () {
        if (ItemPurchaseNum == 1) {
            if (CoinMgmt.coins >= GlobalShop.Item01Price) {
                CoinMgmt.coins -= GlobalShop.Item01Price;
                ItemCompletion.SetActive(false);
            } else {
                NotEnough.SetActive(true);
            }
        }
        if (ItemPurchaseNum == 2) {
            if (CoinMgmt.coins >= GlobalShop.Item02Price) {
                CoinMgmt.coins -= GlobalShop.Item02Price;
                ItemCompletion.SetActive(false);
            } else {
                NotEnough.SetActive(true);
            }
        }
        if (ItemPurchaseNum == 3) {
            if (CoinMgmt.coins >= GlobalShop.Item03Price) {
                CoinMgmt.coins -= GlobalShop.Item03Price;
                ItemCompletion.SetActive(false);
            } else {
                NotEnough.SetActive(true);
            }
        }
        if (ItemPurchaseNum == 4) {
            if (CoinMgmt.coins >= GlobalShop.Item04Price) {
                CoinMgmt.coins -= GlobalShop.Item04Price;
                ItemCompletion.SetActive(false);
            } else {
                NotEnough.SetActive(true);
            }
        }
    }
}
