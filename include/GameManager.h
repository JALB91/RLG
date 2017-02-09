#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H 

#include "Const.h"
#include "Node.h"
#include "Size.h"
#include "Pos.h"
#include "Player.h"

class GameManager: public Node
{
    public:
        static GameManager* getInstance();

        void update(float delta) override;

        void mainLoop();

    protected:
        GameManager();
        ~GameManager();

        bool init() override;

    private:
        static GameManager* _instance;

        Player* player;
};

#endif /* GAMEMANAGER_H */
