#ifndef GAMESCENE_H
#define GAMESCENE_H


#include "jalb.h"
#include "GameManager.h"


class GameScene: public Scene
{
	public:
		static GameScene* createScene();

		~GameScene();

		inline GameManager* getGameManager() const { return gameManager; };

	protected:
		GameScene();

		virtual bool init() override;

	private:
		GameManager* gameManager = nullptr;

};

#endif