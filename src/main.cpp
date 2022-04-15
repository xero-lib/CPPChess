#include <iostream>
#include "piece.hpp"
#include "piece_init.hpp"
#include "board.hpp"
#include "util.hpp"


int main()
{
	extern Piece* board[8][8];

	Pieces::Init();
	Board::Init();

	printBoard(board);
	std::cout << std::endl;
	move(board, { 1, 0 }, { 2, 0 });
	printBoard(board);
}