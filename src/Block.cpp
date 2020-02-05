#include "Block.h"

Block::Block()
{
}

void Block::setup()
{
    xPos = ofRandom(0, 540);
    yPos = ofRandom(0, 960);
	speed = ofRandom(1, 3);
}

void Block::update()
{
    xPos -= speed;

	if(xPos <= -32)
	{
		xPos = 540;
		yPos = ofRandom(0, 960);
	}
}

void Block::draw()
{
    img.draw(xPos, yPos);
}