#include "IBlock.h"

IBlock::IBlock()
{
	tiles = {
		{ Position{ 1,0 }, Position{ 1,1 }, Position{ 1,2 }, Position{ 1,3 } },
		{ Position{ 0,2 }, Position{ 1,2 }, Position{ 2,2 }, Position{ 3,2 } },
		{ Position{ 2,0 }, Position{ 2,1 }, Position{ 2,2 }, Position{ 2,3 } },
		{ Position{ 0,1 }, Position{ 1,1 }, Position{ 2,1 }, Position{ 3,1 } }
	};

	id = 1;
	startOffset = Position{ -1, 3};
}
