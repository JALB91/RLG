#ifndef PLAYER_H
#define PLAYER_H 

#include "Pos.h"

class Player : public Node
{
public:
    static Player* create();

    ~Player();

protected:
    Player();

    bool init() override;

private:

};

#endif /* PLAYER_H */
