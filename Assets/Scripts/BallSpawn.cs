using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BallSpawn : MonoBehaviour
{
	public GameObject ball;
	private float temptime =0f;
	public float offsetTime =3f;
	void Start ()
	{
		

			
	

	}

	void Update ()
	{
		if (!GameeManager.instance.gameover && Time.time > temptime) {
			temptime = Time.time+ offsetTime; 
			BallSpawns ();
		}
	}


	public  void BallSpawns ()
	{
		             			
		for (int i = 0; i < 10; i++) {
				
			GameObject balls = Instantiate (ball, this.transform.position, Quaternion.identity)as GameObject;
			Transform ballTrans = balls.GetComponent<Transform> ();
			ballTrans.SetParent (this.transform);
				
		}
	}
}
