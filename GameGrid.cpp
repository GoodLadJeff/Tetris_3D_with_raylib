#include "GameGrid.h"

GameGrid::GameGrid(int in_rows, int in_columns) : rows(in_rows), columns(in_columns), grid(std::vector<std::vector<int>>())
{
	for (int i = 0; i < rows; i++)
	{
		std::vector<int> vec_columns(columns);
		grid.push_back(vec_columns);
	}
}

bool GameGrid::IsInside(int in_row, int in_column)
{
	return in_row >= 0 && in_row < rows && in_column >= 0 && in_column < columns;
}

bool GameGrid::IsEmpty(int in_row, int in_column)
{
	return IsInside(in_row, in_column) && grid[in_row][in_column] == 0;
}

bool GameGrid::IsRowFull(int in_row)
{
	for (int i = 0; i < columns; i++)
	{
		if (grid[in_row][i] == 0)
			return false;
	}

	return true;
}
bool GameGrid::IsRowEmpty(int in_row)
{
	for (int i = 0; i < columns; i++)
	{
		if (grid[in_row][i] != 0)
			return false;
	}

	return true;
}

void GameGrid::ClearRow(int r)
{
	for (int c = 0; c < columns; c++)
	{
		grid[r][c] = 0;
	}
}

void GameGrid::MoveRowDown(int r, int nuwRows)
{
	for (int c = 0; c < columns; c++)
	{
		grid[r + nuwRows][c] = grid[r][c];
		grid[r][c] = 0;
	}
}

int GameGrid::ClearFullRows()
{
	int cleared = 0;
	for (int r = rows-1; r >=0; r--)
	{
		if (IsRowFull(r))
		{
			ClearRow(r);
			cleared++;
		}
		else if (cleared > 0)
		{
			MoveRowDown(r, cleared);
		}
	}

	return cleared;
}
