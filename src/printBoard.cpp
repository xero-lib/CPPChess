#include <iostream>
#include "piece.hpp"

using std::cout;
using std::endl;

void const printBoard(Piece* board[8][8])
{
	for (int y = 7; y >= 0; y--)
	{
		for (int x = 0; x <= 7; x++)
		{
			cout << ' ' << ((board[y][x] == nullptr) ? (((x ^ y) & 1) ? '#' : ' ') : board[y][x]->getSymbol());
		}
		cout << endl;
	}
}