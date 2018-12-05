using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Store : MonoBehaviour {


	public GameObject store_node;//商店节点
	public Text coin_text;//金币文本
	public GameObject play_btn;//开始按钮节点
	private int coin ;//金币

	// Use this for initialization
	void Start () {
		CoinInit ();
	}

	private void CoinInit() {//金币初始化
		var num = PlayerPrefs.GetInt("coin",0);
		if (coin == num) {
			coin = 118;
			return;
		}
		coin = num;
		DisPlayCoin (coin);
	}

	public void DataSave(){//金币存档
		PlayerPrefs.SetInt ("coin", coin);
	}

	public void Subcoin(int num) {
		//判断当前金币是否小于消耗金币，如果小于，弹出商店，如果大于 ，减去金币
		if(coin < num ) {
			storeOpen ();
			return;
		}
		coin -= num;
		DisPlayCoin (coin);
		GameeManager.instance.isplayer = false;
	}

	private void  DisPlayCoin(int coin) {//显示金币
		coin_text.text = coin.ToString ();
	}

	public void AddCoins_6() {
		coin += 60;
		DisPlayCoin (coin);
	}

	public void AddCoins_30() {
		coin += 300;
		DisPlayCoin (coin);
	}

	public void AddCoins_98() {
		coin += 980;
		DisPlayCoin (coin);
	}

	public void AddCoins_198() {
		coin += 1980;
		DisPlayCoin (coin);
	}

	public void AddCoins_328() {
		coin += 3280;
		DisPlayCoin (coin);
	}

	public void AddCoins_648() {
		coin += 6480;
		DisPlayCoin (coin);
	}


	public void storeOpen () {//商店打开，开始按钮隐藏
		store_node.SetActive (true);
		play_btn.SetActive (false);
	}

	public void storeOff() {//商店关闭，开始按钮显示
		store_node.SetActive (false);
		play_btn.SetActive (true);
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
