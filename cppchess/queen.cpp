#include <vector>
#include "piece.hpp"
#include "offsets.hpp" //may cause a circular dependency

void q_init()
{
static std::vector<Coordinate> s_QueenOffsets;
	for (int i = 0; i < s_RookOffsets.size(); i++)
	{
		s_QueenOffsets.push_back(s_RookOffsets[i]);
	}

	for (int i = 0; i < s_BishopOffsets.size(); i++)
	{
		s_QueenOffsets.push_back(s_BishopOffsets[i]);
	}
}