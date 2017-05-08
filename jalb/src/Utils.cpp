#include "Utils.h"

NS_JALB_BEGIN

Pos Utils::nodeToGamePos(Node* node, Pos p)
{
    if (!node)
    {
        return p;
    }
    
    Node* parent = node->getParent();

    while(parent)
    {
        p += parent->getPosition(); 
        parent = parent->getParent();
    }

    return p + node->getPosition();
}

Pos Utils::gameToWorldPos(Pos p)
{
    return Pos(p.x * COL_SIZE, p.y * ROW_SIZE);
}

Pos Utils::worldToGamePos(Pos p)
{
    return Pos(p.x / COL_SIZE, p.y / ROW_SIZE);
}

NS_JALB_END
