#ifndef NODE_H
#define NODE_H

#include <string>
#include <vector>
#include "Const.h"
#include "Size.h"
#include "Pos.h"

using namespace std;

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

        string _name;

        int _z_ord, _tag;

	    Pos _position;
        Size _contentSize;

        Node* _parent;
        vector<Node*> _children;

    private:

};

#endif
