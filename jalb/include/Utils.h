#ifndef UTILS_H
#define UTILS_H 

#include "Pos.h"
#include "Node.h"

NS_JALB_BEGIN

class Utils
{
    public:
        static Pos nodeToGamePos(Node* node, Pos p);
        static Pos gameToWorldPos(Pos p);
        static Pos worldToGamePos(Pos p);

    protected:

    private:

};

NS_JALB_END

#endif /* UTILS_H */
