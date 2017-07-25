#include "GameManager.h"


GameManager* GameManager::create()
{
    GameManager* gm = new GameManager();

    if (gm && gm->init())
    {
        return gm;
    }

    delete gm;

    return nullptr;
}


GameManager::GameManager() : Node()
{
    
}

GameManager::~GameManager()
{

}


bool GameManager::init()
{
    if (!Node::init())
    {
        return false;
    }

    int winWidth = 30 * COL_SIZE;
    int winHeight = 30 * ROW_SIZE;

    gameWin = newwin(winHeight, winWidth, 1, visibleCenter.x - winWidth * 0.5f);
    keypad(gameWin, TRUE);

    uiWin = newwin(5, visibleSize.width - 2, visibleSize.height - 4, 1);

    Director::getInstance()->addWindow(gameWin);
    Director::getInstance()->addWindow(uiWin);

    gameMap = Map::create(this, Size(28, 28));
    
    for (int i = 1; i < 27; i++)
    {
        gameMap->setWall(Pos(i, 6));
    }

    gameMap->setPosition(1, 1);
    gameMap->setWindow(gameWin);
    addChild(gameMap);

    player = Player::create(this);
    player->setWindow(gameWin);
    gameMap->addChild(player);

    interactionLabel = Label::create();
    interactionLabel->setWindow(uiWin);
    interactionLabel->setPosition(visibleCenter.x, 1);
    addChild(interactionLabel);

    Director::getInstance()->addListener(CALLBACK_1(GameManager::handleInput, this), this, "GameManager");

    scheduleUpdate();

    return true;
}


void GameManager::handleInteractions(const Pos& p)
{
    interactionLabel->setText("Interaction!");
}

void GameManager::handleInput(const int ch)
{
    
}


void GameManager::update(float delta)
{
    gameMap->drawPath(player, Pos(10, 10));
}
