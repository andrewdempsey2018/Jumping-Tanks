#include "ofMain.h"
#include "ofApp.h"

int main()
{
	ofSetupOpenGL(540,960, OF_FULLSCREEN);			// <-------- setup the GL context

	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp(new ofApp());
	return 0;
}


#ifdef TARGET_ANDROID
void ofAndroidApplicationInit()
{
    //application scope init
}

void ofAndroidActivityInit()
{
    //activity scope init
    main();
}
#endif
