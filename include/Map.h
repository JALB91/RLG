#ifndef MAP_H
#define MAP_H 

#include "jalb.h"
#include <unordered_map>
#include <algorithm>
#include <queue>

USING_NS_JALB;
using namespace std;

class Map: public Node
{
    public:
        static array<Pos, 4> DIRS;

        static Map* create(Size size);

        bool isPos(Pos p) { return _map.find(p) != _map.end(); }
        bool isValidPos(Pos p) { return (isPos(p) && isFree(p)); }
        bool isFree(Pos p) { return _map[p] == ' '; };
        bool isWall(Pos p) { return _map[p] == 'w'; };

        void findPath(Pos start);
        void drawPath(Pos from, Pos to);

        void draw(WINDOW* win) override;

    protected:
        Map(Size size);
        virtual ~Map();

        bool init() override;

        vector<Pos> getNeighbours(Pos p);

    private:
        Size mapSize;
        Pos dest;
        unordered_map<Pos, char> _map;
        unordered_map<Pos, char> _path;
        unordered_map<Pos, Pos> came_from;
        unordered_map<Pos, vector<Pos>> edges;

};

#endif /* MAP_H */
