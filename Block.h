#pragma once
#include <vector>
#include "Position.h"

class Block
{
protected:
	int id;
	std::vector<std::vector<Position>> tiles;
	Position startOffset;
	
public:
	const int GetId() { return id; }
	const std::vector<std::vector<Position>> GetTiles() { return tiles; }
	const Position GetStartOffset() { return startOffset; }

private:
	int rotationState;
	Position offset;

public:
	Block();
	std::vector<Position> TilePositions();
	void RotateCW();
	void RotateCounterCW();
	void Move(int rows, int columns);
	void Reset();
};

