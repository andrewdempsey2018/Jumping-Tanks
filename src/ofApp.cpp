#include "ofApp.h"
#include "Block.h"

//--------------------------------------------------------------
void ofApp::setup()
{
    bird.load("images/tank.png");
    block.load("images/block.png");
	bg.load("images/bg.png");
	title.load("images/title.png");
	www.load("images/www.png");

    flap.load("audio/flap.wav");
	hit.load("audio/hurt.wav");
	pass.load("audio/pass.wav");
    //ofBackground(255, 238, 72);
    canFlap = true;

    xPos = 40;
    yPos = 0;
    gravity = 1;
    ySpeed = 2;
    xSpeed = 1;

    showTitle = true;

    wy = 30;
    wspd=2;

    for(int i = 0; i < NUM_BLOCKS; i++)
	{
		blocks[i].setup();
		blocks[i].img = block;
	}
}

//--------------------------------------------------------------
void ofApp::update()
{
    if(ySpeed < 18)
	{
		ySpeed += gravity;
	}

    yPos += ySpeed;

	for(int i = 0; i < NUM_BLOCKS; i++)
	{
		blocks[i].update();


	}

	if(yPos > 896)
    {
        ySpeed = 0;
        yPos = 896;
    }

    xPos += xSpeed;

    if(xPos >= 540)
    {
        xPos = -128;
    }

    wy+=wspd;

    if(wy > 300)
    {
        wspd=-2;
    }

    if(wy < 30)
    {
        wspd=2;
    }
}

//--------------------------------------------------------------
void ofApp::draw()
{
    bg.draw(0, 0);

	for(int i = 0; i < NUM_BLOCKS; i++)
	{
		blocks[i].draw();
	}

    bird.draw(xPos, yPos);



    if(showTitle)
    {
        title.draw(0, 0);
        www.draw(70, wy);
    }



}

//--------------------------------------------------------------
void ofApp::keyPressed(int key)
{ 
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key)
{ 
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h)
{
}

//--------------------------------------------------------------
void ofApp::touchDown(int x, int y, int id)
{
    if(canFlap)
	{
		ySpeed = -16;
        canFlap = false;
        flap.play();
	}

	showTitle=false;
}

//--------------------------------------------------------------
void ofApp::touchMoved(int x, int y, int id)
{
}

//--------------------------------------------------------------
void ofApp::touchUp(int x, int y, int id)
{
    canFlap = true;
}

//--------------------------------------------------------------
void ofApp::touchDoubleTap(int x, int y, int id)
{
}

//--------------------------------------------------------------
void ofApp::touchCancelled(int x, int y, int id)
{
}

//--------------------------------------------------------------
void ofApp::swipe(ofxAndroidSwipeDir swipeDir, int id)
{
}

//--------------------------------------------------------------
void ofApp::pause()
{
}

//--------------------------------------------------------------
void ofApp::stop()
{
}

//--------------------------------------------------------------
void ofApp::resume()
{
}

//--------------------------------------------------------------
void ofApp::reloadTextures()
{
}

//--------------------------------------------------------------
bool ofApp::backPressed()
{
    return false;
}

//--------------------------------------------------------------
void ofApp::okPressed()
{
}

//--------------------------------------------------------------
void ofApp::cancelPressed()
{
}
