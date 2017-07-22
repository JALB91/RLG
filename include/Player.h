#ifndef PLAYER_H
#define PLAYER_H 

#include "jalb.h"

USING_NS_JALB;

class Player : public Node
{
    public:
        static Player* create();

        void draw(WINDOW* win) override;
        void handleInput(const int ch);

        void moveTo(const Pos& p);
        void interact(const Pos& p);

    protected:
        Player();
        virtual ~Player();

        bool init() override;

    private:

};

#endif /* PLAYER_H */
