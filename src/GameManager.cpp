#include "GameManager.h"


GameManager* GameManager::_instance = nullptr;


GameManager* GameManager::getInstance()
{
    if (!_instance)
    {
        _instance = new GameManager();
        _instance->init();
    }

    return _instance;
}


GameManager::GameManager() : Node()
{
    time = 0.0f;
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

    setName("GameManager");

    int winWidth = 30 * COL_SIZE;
    int winHeight = 30 * ROW_SIZE;

    win = newwin(winHeight, winWidth, visibleCenter.y - winHeight * 0.5f, visibleCenter.x - winWidth * 0.5f);
    keypad(win, TRUE);

    gameMap = Map::create(Size(28, 28));
    
    for (int i = 1; i < 27; i++)
    {
        gameMap->setWall(Pos(i, 6));
    }

    gameMap->setPosition(1, 1);
    addChild(gameMap);

    player = Player::create();
    gameMap->addChild(player);

    scheduleUpdate();

    return true;
}


void GameManager::update(float delta)
{
    wclear(win);
    mvprintw(0, 0, "TIME: %d", (int)time);

    box(win, 0, 0);

    gameMap->drawPath(player, Pos(10, 10));

    this->draw(win);

    refresh();
    wrefresh(win);

    time += delta;
}
