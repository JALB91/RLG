#include "Pos.h"

NS_JALB_BEGIN

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


bool Pos::operator==(const Pos& p) const
{
    return (this->x == p.x && this->y == p.y);
}

bool Pos::operator!=(const Pos& p) const
{
    return !(*this == p);
}

Pos& Pos::operator+=(const Pos& p)
{
    this->x += p.x;
    this->y += p.y;
    return *this;
}

Pos& Pos::operator-=(const Pos& p)
{
    this->x -= p.x;
    this->y -= p.y;
    return *this;
}

Pos& Pos::operator*=(const Pos& p)
{
    this->x *= p.x;
    this->y *= p.y;
    return *this;
}

Pos& Pos::operator/=(const Pos& p)
{
    this->x /= p.x;
    this->y /= p.y;
    return *this;
}

NS_JALB_END
