#pragma once
#include <array>

struct Coordinate {
	int x;
	int y;
	Coordinate(int y, int x): y(y), x(x) {}
	bool operator==(Coordinate cmp) {
		return (this->x == cmp.x && this->y == cmp.y);
	}
};

class Piece
{
private:
	char m_Color; // 'l' = Light, 'd' = Dark
	char m_Symbol;
public:
	Coordinate m_DefaultPos;
	char m_Side; // 'q' = Queen, 'k' = King
	Piece() = delete;
	Piece(Coordinate defaultPos, char color, char symbol) :
		m_DefaultPos(defaultPos),
		m_Color(color),
		m_Symbol(symbol),
		m_Side(0)
	{};
	Piece(Coordinate defaultPos, char color, char symbol, char side) :
		m_DefaultPos(defaultPos),
		m_Color(color),
		m_Symbol(symbol),
		m_Side(side)
	{};

	char getSymbol()
	{
		return m_Symbol;
	}

	char getColor()
	{
		return m_Color;
	}
};