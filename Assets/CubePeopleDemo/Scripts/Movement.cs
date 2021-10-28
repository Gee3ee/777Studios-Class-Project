using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Movement : MonoBehaviour
{
    float movementspeed = 7.5f;

    // Start is called before the first frame update
    void Start()
    {
        
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
