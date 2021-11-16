using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveSkeleton : MonoBehaviour
{
    public Animator anim;

    void Update()
    {
        anim.SetFloat("horizontal", Input.GetAxis("Horizontal"));
    }
}
