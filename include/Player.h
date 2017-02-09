#ifndef PLAYER_H
#define PLAYER_H 

#include "Pos.h"
#include "Node.h"

class Player : public Node
{
    public:
        static Player* create();

        virtual ~Player();

        void draw(WINDOW* win) override;
        void handleInput(WINDOW* win, int ch);

    protected:
        Player();

        bool init() override;

    private:

};

#endif /* PLAYER_H */
