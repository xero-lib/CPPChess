#include <vector>
#include "piece.hpp"

void b_init()
{
static std::vector<Coordinate> s_BishopOffsets;
	for (int i = 1; i < 8; i++)
	{
		s_BishopOffsets.push_back({ i, i });
		s_BishopOffsets.push_back({ i, -i });
		s_BishopOffsets.push_back({ -i, i });
		s_BishopOffsets.push_back({ -i, -i });
	}
}