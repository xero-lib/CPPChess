#include "piece.hpp"

//Light Pawn
Piece Light_A_Pawn = Piece({ 1, 0 }, 'l', 'p');
Piece Light_B_Pawn = Piece({ 1, 1 }, 'l', 'p');
Piece Light_C_Pawn = Piece({ 1, 2 }, 'l', 'p');
Piece Light_D_Pawn = Piece({ 1, 3 }, 'l', 'p');
Piece Light_E_Pawn = Piece({ 1, 4 }, 'l', 'p');
Piece Light_F_Pawn = Piece({ 1, 5 }, 'l', 'p');
Piece Light_G_Pawn = Piece({ 1, 6 }, 'l', 'p');
Piece Light_H_Pawn = Piece({ 1, 7 }, 'l', 'p');

//Dark Pawn
Piece Dark_A_Pawn = Piece({ 6, 0 }, 'd', 'p');
Piece Dark_B_Pawn = Piece({ 6, 1 }, 'd', 'p');
Piece Dark_C_Pawn = Piece({ 6, 2 }, 'd', 'p');
Piece Dark_D_Pawn = Piece({ 6, 3 }, 'd', 'p');
Piece Dark_E_Pawn = Piece({ 6, 4 }, 'd', 'p');
Piece Dark_F_Pawn = Piece({ 6, 5 }, 'd', 'p');
Piece Dark_G_Pawn = Piece({ 6, 6 }, 'd', 'p');
Piece Dark_H_Pawn = Piece({ 6, 7 }, 'd', 'p');

//Light Piece
Piece LightKingsRook	= Piece({ 0, 7 }, 'l', 'r', 'k');
Piece LightQueensRook	= Piece({ 0, 0 }, 'l', 'r', 'q');
Piece LightKingsKnight	= Piece({ 0, 6 }, 'l', 'n', 'k');
Piece LightQueensKnight	= Piece({ 0, 1 }, 'l', 'n', 'q');
Piece LightKingsBishop	= Piece({ 0, 5 }, 'l', 'b', 'k');
Piece LightQueensBishop	= Piece({ 0, 2 }, 'l', 'b', 'q');
Piece LightKing		= Piece({ 0, 4 }, 'l', 'k');
Piece LightQueen	= Piece({ 0, 3 }, 'l', 'q');

//Dark Piece
Piece DarkKingsRook		= Piece({ 7, 7 }, 'd', 'r', 'k');
Piece DarkQueensRook	= Piece({ 7, 0 }, 'd', 'r', 'q');
Piece DarkKingsKnight	= Piece({ 7, 6 }, 'd', 'n', 'k');
Piece DarkQueensKnight	= Piece({ 7, 1 }, 'd', 'n', 'q');
Piece DarkKingsBishop	= Piece({ 7, 5 }, 'd', 'b', 'k');
Piece DarkQueensBishop	= Piece({ 7, 2 }, 'd', 'b', 'q');
Piece DarkKing	= Piece({ 7, 4 }, 'd', 'k');
Piece DarkQueen	= Piece({ 7, 3 }, 'd', 'q');

Piece pieces[32] = {
	Light_A_Pawn,
	Light_B_Pawn,
	Light_C_Pawn,
	Light_D_Pawn,
	Light_E_Pawn,
	Light_F_Pawn,
	Light_G_Pawn,
	Light_H_Pawn,

	Dark_A_Pawn,
	Dark_B_Pawn,
	Dark_C_Pawn,
	Dark_D_Pawn,
	Dark_E_Pawn,
	Dark_F_Pawn,
	Dark_G_Pawn,
	Dark_H_Pawn,

	LightKingsRook,
	LightQueensRook,
	LightKingsKnight,
	LightQueensKnight,
	LightKingsBishop,
	LightQueensBishop,
	LightKing,
	LightQueen,


	DarkKingsRook,
	DarkQueensRook,
	DarkKingsKnight,
	DarkQueensKnight,
	DarkKingsBishop,
	DarkQueensBishop,
	DarkKing,
	DarkQueen
};