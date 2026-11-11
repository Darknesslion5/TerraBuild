#pragma once
#include <vector>
#include <blocks.h>

struct GameMap
{
	int w = 0;
	int h = 0;

	std::vector<Block> mapData;

	void create(int w, int h);

	// Get Block without checking it's boundaries.
	Block &getBlockUnsafe(int x, int y);

	// Get Block inside the map boundaries.
	Block *getBlockSafe(int x, int y);
};