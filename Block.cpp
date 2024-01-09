#include "Block.h"

Block::Block()
{
	offset = Position(startOffset.Row, startOffset.Column);
}

std::vector<Position> Block::TilePositions()
{
	std::vector<Position> vecPos{};

	for (int p = 0; p < tiles[rotationState].size(); p++)
	{
		vecPos.push_back( Position { tiles[rotationState][p].Row + offset.Row, tiles[rotationState][p].Column + offset.Column });
	}

	return vecPos;
}

void Block::RotateCW()
{
	rotationState = (rotationState + 1) % tiles.size();
}

void Block::RotateCounterCW()
{
	if (rotationState == 0)
		rotationState = tiles.size() - 1;
	else
		rotationState--;
}

void Block::Move(int rows, int columns)
{
	offset.Row += rows;
	offset.Column += columns;
}

void Block::Reset()
{
	rotationState = 0;
	offset.Row = startOffset.Row;
	offset.Column = startOffset.Column;
}


