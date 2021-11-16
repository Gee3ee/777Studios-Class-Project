using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Stay : MonoBehaviour
{
    public GameObject myPlayer;

    void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "hplat")
        {
            //This will make the player a child of the Obstacle
            myPlayer.transform.parent = other.gameObject.transform; //Change "myPlayer" to your player
        }
    }

    void OnTriggerExit(Collider other)
    {
        myPlayer.transform.parent = null;
    }
}
