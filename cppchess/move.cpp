#include <iostream>
#include "piece.hpp"

int move(Piece* board[8][8], Coordinate start, Coordinate end)
{
	//in progress, will implement calc_delegator
	if (start.y < 8 && start.x < 8 && end.y < 8 && end.x < 8 && board[start.y][start.x] != nullptr)
	{
		if (board[end.y][end.x] == nullptr || board[start.y][start.x]->getColor() != board[end.y][end.x]->getColor())
		{
			//std::cout << __LINE__ << std::endl;
			board[end.y][end.x] = board[start.y][start.x];
			board[start.y][start.x] = nullptr;
		}
	}
	return 0;
}