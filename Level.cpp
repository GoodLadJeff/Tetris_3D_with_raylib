#include "Level.h"
#include <iostream>

Level::Level()
{
	intToColorMap[0] = DARKGRAY;
	intToColorMap[1] = BLUE;
}

void Level::DisplayLevel()
{
	for (int x = 0; x < GRID_WIDTH; x++)
	{
		for (int y = 0; y < GRID_LENGTH; y++)
		{
			DrawRectangle(x*5, y*5, 3, 3, BLUE);
		}
	}
}