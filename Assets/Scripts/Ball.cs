using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Ball : MonoBehaviour
{
	public float speed;
	private Vector3 dic;


	void Start ()
	{
		
		speed = Random.Range (1f, 3f);
		dic = new Vector3 (Random.Range (-1f, 1f), Random.Range (-1f,1f), 0);



	}


	void Update ()
	{

		this.transform.Translate (dic* speed * Time.deltaTime);
	}

//	private void OnCollisionExit2D(Collision2D collision)
//	{
//		if (collision.gameObject.CompareTag ("Bounds")) {
//			Destroy (this.gameObject);
//		}
//	}
	private void OnCollisionExit2D(Collision2D collision)
	{
		if (collision.gameObject.CompareTag ("Bounds")) {
			Destroy (this.gameObject);
		}
	}
}
