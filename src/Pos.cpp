#include "Pos.h"


Pos::Pos(const Pos &p)
{
    this->x = p.x;
    this->y = p.y;
}

Pos::Pos(int x, int y)
{
    this->x = x;
    this->y = y;
}

Pos::Pos()
{
    this->x = 0;
    this->y = 0;
}

Pos::~Pos()
{

}
