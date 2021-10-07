using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Movement : MonoBehaviour
{
    float movementspeed = 7.5f;
    public Vector3 jump;
    public float jumpForce = 2.0f;
    public bool isGrounded;
    Rigidbody rb;

    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody>();
        jump = new Vector3(0.0f, 2.0f, 0.0f);
    }

    void OnCollisionStay()
    {
        isGrounded = true;
    }

    // Update is called once per frame
    void Update()
    {
        jump = new Vector3(0.0f, 2.0f, 0.0f);
        float yRotation = transform.eulerAngles.y;


        if (Input.GetKey(KeyCode.LeftArrow))
        {
            if (Input.GetKeyDown(KeyCode.LeftArrow) && yRotation == 0)
            {
                transform.RotateAround(transform.position, transform.up, 180f);
            }
            transform.Translate(Vector3.back * movementspeed * Time.deltaTime, Space.World);
        }
        
        if (Input.GetKey(KeyCode.RightArrow))
        {
            if (Input.GetKeyDown(KeyCode.RightArrow) && yRotation != 0)
            {
                transform.RotateAround(transform.position, transform.up, 180f);
            }
            transform.Translate(Vector3.forward * movementspeed * Time.deltaTime, Space.World);
        }
        
        if (Input.GetKey(KeyCode.Space) && isGrounded)
        {
            rb.AddForce(jump * jumpForce, ForceMode.Impulse);
            isGrounded = false;
            //transform.Translate(Vector3.up * movementspeed * Time.deltaTime);
        }
    }
    private void OnTriggerEnter(Collider other)
    {
        if(other.gameObject.layer == 3)
        {
            Destroy(other.gameObject);
        }
    }
}
