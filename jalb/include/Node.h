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


        virtual void draw();

        virtual void update(float delta);


        inline WINDOW* getWindow() const { return _win; };
        inline void setWindow(WINDOW* win) { this->_win = win; };


        inline string getName() const { return _name; };
        inline void setName(const string& name) { this->_name = name; };


        inline int getZOrd() const { return _z_ord; };
        inline void setZOrd(const int& z_ord) { this->_z_ord = z_ord; };


        inline int getTag() const { return _tag; };
        inline void setTag(const int& tag) { this->_tag = tag; };


	    inline Pos getPosition() const { return _position; };
	    inline int getPositionX() const { return _position.x; };
	    inline int getPositionY() const { return _position.y; };

	    virtual inline void setPosition(const Pos& p) { this->_position = p; };
        inline void setPosition(const int& x, const int& y) { setPosition(Pos(x, y)); };
	    inline void setPositionX(const int& x) { setPosition(x, _position.y); };
	    inline void setPositionY(const int& y) { setPosition(_position.x, y); };

        Pos transformToNodePos(Node* node);


        inline Size getContentSize() const { return _contentSize; };

        virtual inline void setContentSize(const Size& s) { this->_contentSize = s; };
        inline void setContentSize(int w, int h) { setContentSize(Size(w, h)); };
        inline void setContentSize(int s) { setContentSize(Size(s)); };


        inline Node* getParent() const { return _parent; };
        void removeFromParent();


        inline vector<Node*> getChildren() const { return _children; };
        void addChild(Node* n);
        void addChild(Node* n, int z_ord);
        void removeChild(Node* n);
        void removeChildByName(string name);
        void removeChildByTag(int tag);

    protected:
	    Node();

	    virtual bool init();

        void scheduleUpdate();

        WINDOW* _win;

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
