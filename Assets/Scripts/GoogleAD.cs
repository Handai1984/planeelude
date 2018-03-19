using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using GoogleMobileAds.Api;
using GoogleMobileAds;


public class GoogleAD : MonoBehaviour {
	public string appIdAll;
	public string appIdBanner;
	public string appIdInterstial;
	public string phoneId;

		private  BannerView bannerView;
		private InterstitialAd interstitial;
		
	public void Awake()
	{
		GoogleInite ();
	}

		public void Start()
		{
			//this.RequestBanner();
			//GoogleInite ();
		//this.RequestInterstitial ();
		}


	private void GoogleInite()
	{
		// These ad units are configured to always serve test ads.
		#if UNITY_EDITOR
		string adUnitId = "unused";
		#elif UNITY_ANDROID
		string adUnitId = "ca-app-pub-3940256099942544/6300978111";
		#elif UNITY_IPHONE
		string adUnitId = appIdAll;
		#else
		string adUnitId = "unexpected_platform";
		#endif



		MobileAds.SetiOSAppPauseOnBackground(true);
		// Initialize the Google Mobile Ads SDK.
		MobileAds.Initialize(adUnitId);
	}

	private AdRequest CreateAdRequest()
	{
		return new AdRequest.Builder()
			.AddTestDevice(AdRequest.TestDeviceSimulator)
			.AddTestDevice(phoneId)
			.Build();


	}

        public void RequestBanner()
		{
		// These ad units are configured to always serve test ads.
		#if UNITY_EDITOR
		string adUnitId = "unused";
		#elif UNITY_ANDROID
		string adUnitId = "ca-app-pub-3940256099942544/6300978111";
		#elif UNITY_IPHONE
		string adUnitId = appIdBanner;
		#else
		string adUnitId = "unexpected_platform";
		#endif
					
		if (this.bannerView != null)
		{
			this.bannerView.Destroy();
		}

		bannerView = new BannerView(adUnitId, AdSize.SmartBanner, AdPosition.Bottom);


			// Create an empty ad request.
			//AdRequest request = new AdRequest.Builder().Build();

			// Load the banner with the request.
		this.bannerView.LoadAd(this.CreateAdRequest ());
		print ("我开始展示啦");
		}

		public void BannerHide()
	{
		bannerView.Hide ();
	}
		public void BannerShow()
	{
		bannerView.Show ();
	}


	public  void  BannerDestory()
	{
		bannerView.Destroy ();
	}


	public void RequestInterstitial()
	{
		// These ad units are configured to always serve test ads.
		#if UNITY_EDITOR
		string adUnitId = "unused";
		#elif UNITY_ANDROID
		string adUnitId = "ca-app-pub-3940256099942544/6300978111";
		#elif UNITY_IPHONE
		string adUnitId = appIdInterstial;
		#else
		string adUnitId = "unexpected_platform";
		#endif

		// Clean up interstitial ad before creating a new one.
		if (this.interstitial != null)
		{
			this.interstitial.Destroy();
			print ("我来啦");
		}

		// Initialize an InterstitialAd.
		interstitial = new InterstitialAd(adUnitId);
		// Create an empty ad request.
		//AdRequest request = new AdRequest.Builder().Build();
		// Load the interstitial with the request.
		this.interstitial.LoadAd(this.CreateAdRequest ());
		print ("我是插屏");

	}

	public void ShowInterstitial()
	{
		if (this.interstitial.IsLoaded())
		{
			this.interstitial.Show();
			print("插屏显示");
		}
		else
		{
			MonoBehaviour.print("Interstitial is not ready yet");

		}
	}

//    viod Status()
//    {
//        private GoogleAD interstital1;
//    private GoogleAD interstital2;
//    private List<GoogleAD> gad;

//    private int count = 0;
//    //查找广告脚本
//    interstital1 = GameObject.Find("GoogleADOne").GetComponent<GoogleAD>();
//        interstital2 = GameObject.Find("GoogleADTwo").GetComponent<GoogleAD>();
//        //
//        gad.Add(interstital1);
//        gad.Add(interstital2);
//        print(gad.Count);
//        //初始化广告脚本
//        GADInit();
//    }

//private void GADInterstitalShow()
//{
//    if (count >= gad.Count)
//    {
//        GADInit();
//        count = 0;


//    }
//    else
//    {

//        gad[count].ShowInterstitial();
//        print("显示插屏" + count);
//        count++;
//    }
//}

}

