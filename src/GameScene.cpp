#include "GameScene.h"


GameScene* GameScene::createScene()
{
	GameScene* scene = new GameScene();

	if (scene && scene->init())
	{
		return scene;
	}

	delete scene;

	return nullptr;
}

bool GameScene::init()
{
	if (!Scene::init())
	{
		return false;
	}

	gameManager = GameManager::create();
	addChild(gameManager);

	return true;
}

GameScene::GameScene() : Scene()
{

}

GameScene::~GameScene()
{
	
}