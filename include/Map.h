#ifndef MAP_H
#define MAP_H 

#include "jalb.h"
#include <unordered_map>
#include <algorithm>
#include <queue>

USING_NS_JALB;
using namespace std;

class GameManager;

class Map: public Node
{
    public:
        static array<Pos, 4> DIRS;

        static Map* create(GameManager* gm, Size size);

        virtual ~Map();

        inline bool isPos(const Pos& p) const { return _map.find(p) != _map.end(); };
        inline bool isFree(const Pos& p) const { return isPos(p) && _map.find(p)->second == ' '; };
        inline bool isWall(const Pos& p) const { return isPos(p) && _map.find(p)->second == 'w'; };

        bool setFree(const Pos& p);
        bool setWall(const Pos& p);

        void findPath(Pos start);
        void drawPath(Node* from, Pos to);

        void draw() override;

    protected:
        Map(GameManager* gm, Size size);

        bool init() override;

        vector<Pos> getNeighbours(Pos p);

    private:
        GameManager* gm = nullptr;
        Size mapSize;
        Pos dest;
        unordered_map<Pos, char> _map;
        unordered_map<Pos, char> _path;
        unordered_map<Pos, Pos> came_from;
        unordered_map<Pos, vector<Pos>> edges;

};

#endif /* MAP_H */
