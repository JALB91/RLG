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
        static GameManager* create();

        inline WINDOW* getGameWindow() const { return gameWin; };
        inline WINDOW* getUIWindow() const { return uiWin; };
        inline Map* getMap() const { return gameMap; };
        inline Player* getPlayer() const { return player; };

        inline bool canMoveTo(const Pos& p) const { return gameMap->isFree(p); };

        void handleInteractions(const Pos& p);
        void handleInput(const int ch);

    protected:
        GameManager();
        virtual ~GameManager();

        bool init() override;

        void update(float delta) override;

    private:
        float time;

        WINDOW* gameWin;
        WINDOW* uiWin;
        Map* gameMap;
        Player* player;
        Label* interactionLabel;
        
};

#endif /* GAMEMANAGER_H */
