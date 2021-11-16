using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMovement : MonoBehaviour
{
    public CharacterController2D controller;

    public float runSpeed = 50f;
    float horizontalMove = 10f;
    public float jumpForce = 7f;
    public bool jump = false;
    public bool isGrounded;
    private int counter;

    public Rigidbody rb;

    public AudioClip audioClip;

    void Start()
    {
        rb = GetComponent<Rigidbody>();
        counter = 0;
    }

    void OnCollisionStay()
    {
        isGrounded = true;
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.layer == 3 || other.gameObject.layer == 7)
        {
            AudioSource.PlayClipAtPoint(audioClip, transform.position);
            Destroy(other.gameObject);
        }
    }

    // Update is called once per frame
    void Update()
    {
        horizontalMove = Input.GetAxisRaw("Horizontal") * runSpeed;

        if (Input.GetKeyDown(KeyCode.Space))
        {
            //first jump
            if (isGrounded && counter == 0)
            {
                isGrounded = false;
                rb.AddForce(Vector3.up * jumpForce, ForceMode.Impulse);
                counter++;
            }

            if (isGrounded && counter == 1)
            {
                isGrounded = false;
                rb.AddForce(Vector3.up * 3, ForceMode.Impulse);
                counter = 0;
            }
        }

    }

    void FixedUpdate()
    {
        controller.Move(horizontalMove * Time.fixedDeltaTime, false, jump);
        jump = false;
    }
}