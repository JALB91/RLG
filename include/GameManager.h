#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H 

#include "jalb.h"
#include "Map.h"
#include "Player.h"

using namespace std;
USING_NS_JALB;

class GameManager: public Node
{
    public:
        static GameManager* getInstance();

    protected:
        GameManager();
        virtual ~GameManager();

        bool init() override;

        void update(float delta) override;

    private:
        static GameManager* _instance;

        float time;

        WINDOW* win;
        Map* gameMap;
        Player* player;
};

#endif /* GAMEMANAGER_H */
