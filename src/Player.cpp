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
    Pos p = Utils::nodeToGamePos(this, Pos(0, 0));
    p = Utils::gameToWorldPos(p);

    mvwaddch(win, p.y, p.x, '@');
    
    Node::draw(win);
}


void Player::handleInput(int ch)
{
    switch (ch)
    {
        case 'w':
        case 'W':
        case KEY_UP:
            setPositionY(getPositionY() - 1);
            break;
        case 's':
        case 'S':
        case KEY_DOWN:
            setPositionY(getPositionY() + 1);
            break;
        case 'd':
        case 'D':
        case KEY_RIGHT:
            setPositionX(getPositionX() + 1);
            break;
        case 'a':
        case 'A':
        case KEY_LEFT:
            setPositionX(getPositionX() - 1);
            break;
        default:
            break;
    }
}
