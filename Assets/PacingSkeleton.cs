using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChangeAnimation : MonoBehaviour
{
    public Animator anim;

    void Update()
    {
        anim.SetFloat("horizontal", Input.GetAxis("Horizontal"));
    }
}