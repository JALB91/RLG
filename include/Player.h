#ifndef PLAYER_H
#define PLAYER_H 

#include "jalb.h"

USING_NS_JALB;

class GameManager;

class Player : public Node
{
    public:
        static Player* create(GameManager* gm);

        virtual ~Player();

        void draw() override;
        void handleInput(const int ch);

        void moveTo(const Pos& p);
        void interact(const Pos& p);

    protected:
        Player(GameManager* gm);

        bool init() override;

    private:
        GameManager* gm = nullptr;

};

#endif /* PLAYER_H */
