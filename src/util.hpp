#pragma once
#include "piece.hpp"

void printBoard(Piece* board[8][8]);
int move(Piece* board[8][8], Coordinate start, Coordinate end);