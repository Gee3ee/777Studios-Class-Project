using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Movement : MonoBehaviour
{
    float movementspeed = 7.5f;

    // Start is called before the first frame update
    void Start()
    {
<<<<<<< Updated upstream
        
=======
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


        if (Input.GetKey(KeyCode.LeftArrow) || Input.GetKey(KeyCode.A))
        {
            if (Input.GetKeyDown(KeyCode.LeftArrow) && yRotation == 0)
            {
                transform.RotateAround(transform.position, transform.up, 180f);
            }
            transform.Translate(Vector3.left * movementspeed * Time.deltaTime, Space.World);
        }

        if (Input.GetKey(KeyCode.RightArrow) || Input.GetKey(KeyCode.D))
        {
            if (Input.GetKeyDown(KeyCode.RightArrow) && yRotation != 0)
            {
                transform.RotateAround(transform.position, transform.up, 180f);
            }
            transform.Translate(Vector3.right * movementspeed * Time.deltaTime, Space.World);
        }

        if (Input.GetKey(KeyCode.Space))
        {
            transform.Translate(Vector3.up * movementspeed * Time.deltaTime);
        }
        /*if (Input.GetKey(KeyCode.Space) && isGrounded)
        {
            rb.AddForce(jump * jumpForce, ForceMode.VelocityChange);
            isGrounded = false;
            //transform.Translate(Vector3.up * movementspeed * Time.deltaTime);
        }*/
    }
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.layer == 3 || other.gameObject.layer == 7)
        {
            CoinMgmt.coins++;
            Destroy(other.gameObject);
        }
    }
}


/*
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Movement : MonoBehaviour
{
    float movementspeed = 7.5f;

    // Start is called before the first frame update
    void Start()
    {

>>>>>>> Stashed changes
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKey(KeyCode.LeftArrow) || Input.GetKey(KeyCode.A))
        {
            if (transform.localRotation.y == 0)
                transform.Rotate(0, 180, 0);
            transform.Translate(Vector3.back * movementspeed * Time.deltaTime, Space.World);
        }
        if (Input.GetKey(KeyCode.RightArrow)  || Input.GetKey(KeyCode.D))
        {
            if (transform.localRotation.y <= 1)
                transform.Rotate(0, 0, 0);
            transform.Translate(Vector3.forward * movementspeed * Time.deltaTime, Space.World);
            
        }
        if (Input.GetKey(KeyCode.Space))
        {
            transform.Translate(Vector3.up * movementspeed * Time.deltaTime);
        }
    }
    private void OnTriggerEnter(Collider other)
    {
        if(other.gameObject.layer == 3)
        {
            CoinMgmt.coins++;
            Destroy(other.gameObject);
        }
    }
}
