Android Version 3.0

Highlights :-

	Support with Android M
	getBuildVersion() method is added for version controlling.
	Default Adsize has been set to Banner(320*50), if show() method will call without adsize parameters. 
	Battery improvements for Location Services.

Fixed issues:-

	Handle reassigning of adunits.
	AdSizes returning null in some cases:

Support libraries-

	google play services 7.8.0
	gson 2.2 jar
	android-support-v4.jar(com.android.support:support-v4:23.0.1) 

Known Issues

If you receive the error 'java.lang.IncompatibleClassChangeError: The method 'void com.google.android.gms.common.api.GoogleApiClient.connect()' was expected to be of type interface but instead was found to be of type virtual (declaration of 'com.lib.linonesdkandroid.LinOneBanner' appears’, please use google-play-services v 7.8.0.
