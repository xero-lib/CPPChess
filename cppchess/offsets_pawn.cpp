#include <vector>
#include <map>
#include <string>
#include <iostream>
#include "offsets.hpp"
#include "piece.hpp"
#include "filter_offsets.hpp"

extern Piece* board[8][8];

std::vector<Coordinate> calcPawnOffsets(Piece* piece, Coordinate position)
{
	std::vector<Coordinate> availableOffsets = {
		s_PawnOffsets.at(piece->getColor()).at("move")[0],
		s_PawnOffsets.at(piece->getColor()).at("capture")[0],
		s_PawnOffsets.at(piece->getColor()).at("capture")[1]
	};

	if (position == piece->m_DefaultPos)
	{
		availableOffsets.push_back(s_PawnOffsets.at(piece->getColor()).at("first")[0]);
	}
	
	availableOffsets = filterOffsetsU(availableOffsets, position, piece, board);
	availableOffsets = filterOffsetsD(availableOffsets, position, piece, board);
	availableOffsets = filterOffsetsL(availableOffsets, position, piece, board);
	availableOffsets = filterOffsetsR(availableOffsets, position, piece, board);
	availableOffsets = filterOffsetsUL(availableOffsets, position, piece, board);
	availableOffsets = filterOffsetsUR(availableOffsets, position, piece, board);
	availableOffsets = filterOffsetsDL(availableOffsets, position, piece, board);
	availableOffsets = filterOffsetsDR(availableOffsets, position, piece, board);

	return availableOffsets;
}