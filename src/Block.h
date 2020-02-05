#ifndef ADD_H
#define ADD_H

#include "ofxAndroid.h"
#include "ofMain.h"

class Block
{
    public:
	    int xPos;
	    int yPos;
		int speed;

		Block();
	    void update();
	    void draw();
        void setup();

		ofImage img;
};

#endif