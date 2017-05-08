#ifndef NODE_H
#define NODE_H

#include <string>
#include <vector>
#include "Macros.h"
#include "Pos.h"
#include "Size.h"
#include "ncurses.h"

using namespace std;

NS_JALB_BEGIN

class Node
{
    public:
	    static Node* create();

        virtual ~Node();


        virtual void draw(WINDOW* win);

        virtual void update(float delta);


        string getName() const;
        void setName(string name);


        int getZOrd() const;
        void setZOrd(int z_ord);


        int getTag() const;
        void setTag(int tag);


	    Pos getPosition() const;
	    int getPositionX() const;
	    int getPositionY() const;

	    virtual void setPosition(Pos p);
        void setPosition(int x, int y);
	    void setPositionX(int x);
	    void setPositionY(int y);

        Pos transformToNodePos(Node* node);


        Size getContentSize() const;

        virtual void setContentSize(Size s);
        void setContentSize(int w, int h);
        void setContentSize(int s);


        Node* getParent();
        void removeFromParent();


        vector<Node*> getChildren();
        void addChild(Node* n);
        void addChild(Node* n, int z_ord);
        void removeChild(Node* n);
        void removeChildByName(string name);
        void removeChildByTag(int tag);

    protected:
	    Node();

	    virtual bool init();

        void scheduleUpdate();

        string _name;

        int _z_ord, _tag;

	    Pos _position;
        Size _contentSize;

        Node* _parent;
        vector<Node*> _children;

    private:

};

NS_JALB_END

#endif
