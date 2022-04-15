#include <array>
#include "piece.hpp"

extern Piece pieces[32];
Piece* board[8][8];

namespace Board
{
	void Init()
	{
		for (int y = 0; y < 8; y++)
		{
			for (int x = 0; x < 8; x++)
			{
				//board[y][x] = ((x ^ y) & 1) ? '#' : ' ';
				board[y][x] = nullptr;
				for (int p = 0; p < 32; p++)
				{
					if (pieces[p].m_DefaultPos.y == y && pieces[p].m_DefaultPos.x == x)
					{
						board[y][x] = &pieces[p];
						break;
					}
				}
			}
		}
	}

	void Reset()
	{
		for (int y = 0; y < 8; y++)
		{
			for (int x = 0; x < 8; x++)
			{
				board[y][x] = nullptr;
			}
		}
		Board::Init();
	}
}