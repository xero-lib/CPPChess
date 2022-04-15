#include <vector>
#include <array>
#include "piece.hpp"

std::vector<Coordinate> filterOffsetsUL(
	std::vector<Coordinate> currentOffsets,
	Coordinate position,
	Piece* piece,
	Piece* board[8][8]
)
{
	if (currentOffsets.empty() || (piece->getColor() == 'd' && piece->getSymbol() == 'p'))
	{
		return currentOffsets;
	}

	int y_ax = position.y;
	int x_ax = position.x;

	char color = piece->getColor();
	char symbol = piece->getSymbol();

	int distance = 0;

	for (int i = 1; i < 7 - y_ax && i <= x_ax; i++)
	{
		if (board[(size_t)y_ax + i][(size_t)x_ax - i] != nullptr)
		{
			distance = (board[(size_t)y_ax + i][(size_t)x_ax - i]->getColor() != color) ? i : i - 1;
			break;
		}
		distance = i;
	}

	std::vector<Coordinate> outOffsets = {};
	for (int i = 0; i < currentOffsets.size(); i++)
	{
		int cy = currentOffsets[i].y;
		int cx = currentOffsets[i].x;

		if (
			cy <= 0 ||
			cx >= 0 ||
			(cy <= distance && cx >= distance)
			)
		{
			outOffsets.push_back(currentOffsets[i]);
		}
	}

	return outOffsets;
}