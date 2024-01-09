#pragma once
#include <vector>

class GameGrid
{
public:
	GameGrid(int in_rows, int in_columns);

	bool IsInside(int in_row, int in_column);
	bool IsEmpty(int in_row, int in_column);
	bool IsRowFull(int in_row);
	bool IsRowEmpty(int in_row);

private:
	void ClearRow(int r);
	void MoveRowDown(int r, int nuwRows);

public:
	int ClearFullRows();

public:
	std::vector<std::vector<int>> grid;
	int rows;
	int columns;
};

