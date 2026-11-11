#include "helpers.h"

Rectangle getTextureAtlas(int x, int y, int cellSizeX, int cellSizeY)
{
	return Rectangle
	{ 
		(float)x * cellSizeX,
		(float)y * cellSizeY,
		(float)cellSizeX,
		(float)cellSizeY 
	};
}