#include "Player.h"
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


Player::Player()
{
    
}

Player::~Player()
{

}
