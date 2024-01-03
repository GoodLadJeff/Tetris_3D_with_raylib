#pragma once
#include "raylib.h"
#include "unordered_map"

class Level
{
public:
	static const int GRID_WIDTH = 10;
	static const int GRID_LENGTH = 16;
	int level_grid[GRID_WIDTH][GRID_LENGTH];

	std::unordered_map<int, Color> intToColorMap;

	Level();
	void DisplayLevel();
};

