#include <raylib.h>
#include <fstream>
#include "gameMain.h"
#include <asserts.h>
#include <assetManager.h>

struct GameData
{
	Texture dirtTexture;
}gameData;

AssetManager assetManager;

bool initGame() 
{
	assetManager.loadAll();

	return true;
}

bool updateGame() 
{

	float deltaTime = GetFrameTime();
	if (deltaTime > 1.f / 5) { deltaTime = 1 / 5.f; } // Limits deltaTime to 5px per frame.

	DrawTexturePro(assetManager.dirt, { 0, 0,
		(float)assetManager.dirt.width, (float)assetManager.dirt.height },
		{ 50, 50, 100, 100 }, {}, 0, WHITE);

	return true;
}

void closeGame() 
{
	std::ofstream f(RESOURCES_PATH "f.txt");
	f << "\nCLOSED\n";
	f.close();
}