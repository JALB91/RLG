#include "Player.h"


Player* Player::create()
{
    Player* player = new Player();

    if (player && player->init())
    {
        return player;
    }

    delete player;
    return nullptr;
}


bool Player::init()
{
    if (!Node::init())
    {
        return false;
    }

    Director::getInstance()->addListener(std::bind(&Player::handleInput, this, std::placeholders::_1), this);

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

    mvwaddch(win, _position.y * ROW_SIZE, _position.x * COL_SIZE, '@');
}


void Player::handleInput(int ch)
{
    switch (ch)
    {
        case 'w':
        case 'W':
        case KEY_UP:
            _position.y--;
            break;
        case 's':
        case 'S':
        case KEY_DOWN:
            _position.y++;
            break;
        case 'd':
        case 'D':
        case KEY_RIGHT:
            _position.x++;
            break;
        case 'a':
        case 'A':
        case KEY_LEFT:
            _position.x--;
            break;
        default:
            break;
    }
}
