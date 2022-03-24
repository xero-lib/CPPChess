#include <vector>
#include "piece.hpp"

void r_init()
{
static std::vector<Coordinate> s_RookOffsets;

	for (int i = 1; i < 8; i++)
	{
		s_RookOffsets.push_back({  i, 0 });
		s_RookOffsets.push_back({ -i, 0 });
		s_RookOffsets.push_back({ 0,  i });
		s_RookOffsets.push_back({ 0, -i });
	}
}