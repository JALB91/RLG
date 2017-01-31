#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H 

#include <unordered_map>
#include "Pos.h"
#include "Node.h"
#include "Player.h"

class GameManager
{
public:
    static GameManager* getInstance();

    int getWidth();
    int getHeight();

    void gameLoop();

protected:
    GameManager();
    ~GameManager();

private:
    static GameManager* _instance;

    const int width;
    const int height;

    std::unordered_map<Pos, char> game_map;
    Player* player;
};

#endif /* GAMEMANAGER_H */
