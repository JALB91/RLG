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

    gameWin = newwin(winHeight, winWidth, 1, visibleCenter.x - winWidth * 0.5f);
    keypad(gameWin, TRUE);

    uiWin = newwin(5, visibleSize.width - 2, visibleSize.height - 5, 1);

    gameMap = Map::create(Size(28, 28));
    
    for (int i = 1; i < 27; i++)
    {
        gameMap->setWall(Pos(i, 6));
    }

    gameMap->setPosition(1, 1);
    gameMap->setWindow(gameWin);
    addChild(gameMap);

    player = Player::create();
    player->setWindow(gameWin);
    gameMap->addChild(player);

    interactionLabel = Label::create();
    interactionLabel->setWindow(uiWin);
    interactionLabel->setPosition(visibleCenter.x, 2);
    addChild(interactionLabel);

    Director::getInstance()->addListener(std::bind(&GameManager::handleInput, this, std::placeholders::_1), this);

    scheduleUpdate();

    return true;
}


void GameManager::handleInteractions(const Pos& p)
{
    interactionLabel->setText("Interaction!");
}

void GameManager::handleInput(const int ch)
{
    if (ch != 'e' && ch != 'E')
    {
        interactionLabel->setText("");
    }
}


void GameManager::update(float delta)
{
    wclear(gameWin);
    wclear(uiWin);
    mvprintw(0, 0, "TIME: %d", (int)time);

    box(gameWin, 0, 0);
    box(uiWin, 0, 0);

    gameMap->drawPath(player, Pos(10, 10));

    this->draw();

    refresh();
    wrefresh(gameWin);
    wrefresh(uiWin);

    time += delta;
}
