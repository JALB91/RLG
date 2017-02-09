#include "Player.h"
#include "Const.h"
#include "GameManager.h"


Player* Player::create()
{
    Player* player = new Player();

    if (player && player->init())
    {
        return player;
    }

    return nullptr;
}


bool Player::init()
{
    if (!Node::init())
    {
        return false;
    }

    return true;
}


Player::Player() : Node()
{
    
}

Player::~Player()
{

}


void Player::draw(WINDOW* win)
{
    Node::draw(win);

    mvwaddch(win, _position.y, _position.x, '@');
}


void Player::handleInput(WINDOW* win, int ch)
{
    int x, y;
    getmaxyx(win, y, x);

    mvwaddch(win, _position.y, _position.x, ' ');

    switch (ch)
    {
        case 'w':
        case 'W':
        case KEY_UP:
            if (_position.y > 1)
            {
                _position.y--;
            }
            break;
        case 's':
        case 'S':
        case KEY_DOWN:
            if (_position.y < y - 2)
            {
                _position.y++;
            }
            break;
        case 'd':
        case 'D':
        case KEY_RIGHT:
            if (_position.x < x - 2)
            {
                _position.x++;
            }
            break;
        case 'a':
        case 'A':
        case KEY_LEFT:
            if (_position.x > 1)
            {
                _position.x--;
            }
            break;
        default:
            break;
    }
}
