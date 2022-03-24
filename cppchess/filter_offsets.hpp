#pragma once
#include <vector>
#include "piece.hpp"

std::vector<Coordinate> filterOffsetsD(
	std::vector<Coordinate> currentOffsets,
	Coordinate position,
	Piece* piece,
	Piece* board[8][8]
);

std::vector<Coordinate> filterOffsetsDL(
	std::vector<Coordinate> currentOffsets,
	Coordinate position,
	Piece* piece,
	Piece* board[8][8]
);

std::vector<Coordinate> filterOffsetsDR(
	std::vector<Coordinate> currentOffsets,
	Coordinate position,
	Piece* piece,
	Piece* board[8][8]
);

std::vector<Coordinate> filterOffsetsL(
	std::vector<Coordinate> currentOffsets,
	Coordinate position,
	Piece* piece,
	Piece* board[8][8]
);

std::vector<Coordinate> filterOffsetsR(
	std::vector<Coordinate> currentOffsets,
	Coordinate position,
	Piece* piece,
	Piece* board[8][8]
);

std::vector<Coordinate> filterOffsetsU(
	std::vector<Coordinate> currentOffsets,
	Coordinate position,
	Piece* piece,
	Piece* board[8][8]
);

std::vector<Coordinate> filterOffsetsUL(
	std::vector<Coordinate> currentOffsets,
	Coordinate position,
	Piece* piece,
	Piece* board[8][8]
);

std::vector<Coordinate> filterOffsetsUR(
	std::vector<Coordinate> currentOffsets,
	Coordinate position,
	Piece* piece,
	Piece* board[8][8]
);