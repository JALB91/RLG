#include "Player.h"
#include "GameManager.h"


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


void Player::draw()
{
    Node::draw();
    
    Pos p = Utils::nodeToGamePos(this, Pos(0, 0));
    p = Utils::gameToWorldPos(p);

    mvwaddch(_win, p.y, p.x, '@');
}


void Player::handleInput(const int ch)
{
    switch (ch)
    {
        case 'w':
        case 'W':
        case KEY_UP:
            moveTo(getPosition() + Pos(0, -1));
            break;
        case 's':
        case 'S':
        case KEY_DOWN:
            moveTo(getPosition() + Pos(0, 1));
            break;
        case 'd':
        case 'D':
        case KEY_RIGHT:
            moveTo(getPosition() + Pos(1, 0));
            break;
        case 'a':
        case 'A':
        case KEY_LEFT:
            moveTo(getPosition() + Pos(-1, 0));
            break;
        case 'e':
        case 'E':
            interact(getPosition());
            break;
        default:
            break;
    }
}


void Player::moveTo(const Pos& p)
{
    if (GameManager::getInstance()->canMoveTo(p))
    {
        setPosition(p);
    }
}

void Player::interact(const Pos& p)
{
    GameManager::getInstance()->handleInteractions(p);
}
