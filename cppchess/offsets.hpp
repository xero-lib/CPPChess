#pragma once
#include <map>
#include <vector>
#include <string>
#include "piece.hpp"

using std::vector;
using std::string;
using std::map;

static std::vector<Coordinate> s_BishopOffsets;
static std::vector<Coordinate> s_RookOffsets;
static map<char, map<string, vector<Coordinate>>> s_PawnOffsets;
static const int s_KnightOffsets[8][2];
static const int s_KingOffsets[8][2];
static std::vector<Coordinate> s_QueenOffsets;