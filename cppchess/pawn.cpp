#include <map>
#include <vector>
#include <string>
#include "piece.hpp"

using std::vector;
using std::string;
using std::map;

static map<char, map<string, vector<Coordinate>>> s_PawnOffsets = { //try to convert to const later
	{
		'l',
		{
			{"first", {{2, 0}}},
			{"move", {{1, 0}}},
			{"capture", {{1, 1}, {-1, 1}}}
		}
	},
	{
		'd',
		{
			{"first", {{-2, 0}}},
			{"move", {{-1, 0}}},
			{"capture", {{1, -1}, {-1, -1}}}
		}
	}
};