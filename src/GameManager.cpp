#include "GameManager.h"
#include "ncurses.h"



GameManager* GameManager::_instance = nullptr;



GameManager* GameManager::getInstance()
{
    if (!_instance)
    {
        _instance = new GameManager();
    }

    return _instance;
}



GameManager::GameManager() : width(50), height(50)
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            game_map[Pos(i, j)] = '.';
        }
    }

    player = Player::create();
}

GameManager::~GameManager()
{
    delete player;
}



int GameManager::getWidth()
{
    return width;
}

int GameManager::getHeight()
{
    return height;
}



void GameManager::gameLoop()
{
    int ch;

    do
    {
        refresh();

        for (int i = 0; i < height; i++)
        {
            for (int j = 0; j < width; j++)
            {
                mvaddch(i, j, game_map[Pos(i, j)]);
            }
        }

        refresh();

        ch = getch();

        if (ch == 'q' || ch == 'Q')
        {
            
        }
        else if (ch == 'w' || ch == 'W')
        {
            
        }
        else if (ch == 'a' || ch == 'A')
        {

        }
        else if (ch == 's' || ch == 'S')
        {

        }
        else if (ch == 'd' || ch == 'D')
        {

        }
    }
    while (ch != 'q' && ch != 'Q');
}
