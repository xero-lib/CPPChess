#pragma once

#include <vector>
#include "piece.hpp"

typedef std::vector<Coordinate> OffsetList;

OffsetList calcPawnOffsets(Piece* piece, Coordinate position);
//OffsetList CORook	(Piece* piece, Coordinate position);
//OffsetList COKnight	(Piece* piece, Coordinate position);
//OffsetList COBishop	(Piece* piece, Coordinate position);
//OffsetList COQueen	(Piece* piece, Coordinate position);
//OffsetList COKing	(Piece* piece, Coordinate position);
