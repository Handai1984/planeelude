using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class StartUI : MonoBehaviour {
	public GameObject target;
	public  void  GameStart()
	{
		DontDestroyOnLoad (target);
		SceneManager.LoadScene ("Main");
	}

}
