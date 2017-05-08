#include "Map.h"

array<Pos, 4> Map::DIRS { {Pos(1, 0), Pos(0, - 1), Pos(- 1, 0), Pos(0, 1)} };

Map* Map::create(Size size)
{
    Map* map = new Map(size);

    if (map && map->init())
    {
        return map;
    }

    delete map;
    return nullptr;
}

Map::Map(Size size) : mapSize(size)
{

}

Map::~Map()
{

}

bool Map::init()
{
    if (!Node::init())
    {
        return false;
    }

    for (int i = 0; i < mapSize.width; i++)
    {
        for (int j = 0; j < mapSize.height; j++)
        {
            _map[Pos(i, j)] = ' ';
        }
    }

    return true;
}


void Map::findPath(Pos start)
{
    if (isValidPos(start))
    {
        queue<Pos> frontier;
        frontier.push(start);

        dest = start;

        came_from.clear();
        came_from[start] = start;

        while (!frontier.empty())
        {
            auto current = frontier.front();
            frontier.pop();

            for (auto next: getNeighbours(current))
            {
                if (!came_from.count(next))
                {
                    frontier.push(next);
                    came_from[next] = current;
                }
            }
        }
    }
    else
    {
        return;
    }

    _map[dest] = 'A';

    for (int y = 0; y < mapSize.height; y++)
    {
        for (int x = 0; x < mapSize.width; x++)
        {
            Pos curr(x, y);

            if (isWall(curr))
            {
                _map[curr] = 'w';
            }
            else if (came_from.count(curr))
            {
                Pos to = came_from[curr];

                if (to.x == curr.x + 1)
                {
                    _map[curr] = '>';
                }
                else if (to.x == curr.x - 1)
                {
                    _map[curr] = '<';
                }
                else if (to.y == curr.y + 1)
                {
                    _map[curr] = 'v';
                }
                else if (to.y == curr.y - 1)
                {
                    _map[curr] = '^';
                }
            }
        }
    }
}

void Map::drawPath(Node* from, Pos to)
{
    _path.clear();

    if (to != dest)
    {
        findPath(to);
    }

    Pos next = from->getPosition();

    while (came_from.count(next) && next != to)
    {
        _path[next] = 'O';

        next = came_from[next];
    }
}


void Map::draw(WINDOW* win)
{
    for (auto i = _map.begin(); i != _map.end(); i++)
    {
        Pos p1 = i->first;
        Pos p2 = Utils::nodeToGamePos(this, p1);
        p2 = Utils::gameToWorldPos(p2);
        char ch = i->second;

        mvwaddch(win, p2.y, p2.x, _path.count(p1) ? _path[p1] : ch);
    }

    Node::draw(win);
}


vector<Pos> Map::getNeighbours(Pos pos)
{
    if (edges.find(pos) != edges.end())
    {
        return edges[pos];
    }

    vector<Pos> vec;

    for (auto v: DIRS)
    {
        Pos p(pos.x + v.x, pos.y + v.y);

        if (isValidPos(p))
        {
            vec.push_back(p);
        }
    }

    if ((pos.x + pos.y) % 2 == 0)
    {
        std::reverse(vec.begin(), vec.end());
    }

    edges[pos] = vec;

    return vec;
}
