#include "GameManager.h"
#include <algorithm>


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

    player = Player::create();

    addChild(player);

    return true;
}


void GameManager::update(float delta)
{
    vector<Node*> children = getChildren();

    sort(children.begin(), children.end(), [] (const Node* a, const Node* b)
            {
                return a->getZOrd() < b->getZOrd();
            });

    for (Node* child: children)
    {
        child->update(delta);
    }

    string s = "DELTA: " + std::to_string(delta);
    mvaddstr(0, 0, s.c_str());
}


void GameManager::mainLoop()
{
    int ch = 0;
    float delta = 0.0f;

    WINDOW* win = newwin(12, 12, visibleCenter.y - 6, visibleCenter.x - 6);

    keypad(win, TRUE);
    nodelay(win, TRUE);
    box(win, '|', '-');

    do
    {
        update(delta);
        draw(win);

        refresh();
        wrefresh(win);

        ch = wgetch(win);

        player->handleInput(win, ch);

        delta += 0.000037;
    }
    while (ch != 'q' && ch != 'Q');
}
