#include "Node.h"
#include "Const.h"
#include <algorithm>
#include <assert.h>


Node* Node::create()
{
	Node* node = new Node();

	if (node && node->init())
	{
		return node;
	}

	delete node;

	return nullptr;
}

bool Node::init()
{
	return true;
}


Node::Node()
{
    _name = "";

    _z_ord = 0;
    _tag = 0;

    _position = Pos(1, 1);
    _contentSize = Size(0, 0);

    _parent = nullptr;
}

Node::~Node()
{

}


void Node::draw(WINDOW* win)
{
    sort(_children.begin(), _children.end(), [] (const Node* a, const Node* b) {

            return a->_z_ord < b->_z_ord;
        }); 

   for (Node* node: _children)
   {
       node->draw(win);
   }
}

void Node::update(float delta)
{

}

string Node::getName() const
{
    return _name;
}

void Node::setName(string name)
{
    this->_name = name;
}


int Node::getZOrd() const
{
    return _z_ord;
}

void Node::setZOrd(int z_ord)
{
    this->_z_ord = z_ord;
}


int Node::getTag() const
{
    return _tag;
}

void Node::setTag(int tag)
{
    this->_tag = tag;
}


Pos Node::getPosition() const
{
	return _position;
}

int Node::getPositionX() const
{
	return _position.x;
}

int Node::getPositionY() const
{
	return _position.y;
}

void Node::setPosition(Pos p)
{
	this->_position = p;
}

void Node::setPosition(int x, int y)
{
    this->setPosition(Pos(x, y));
}

void Node::setPositionX(int x)
{
    this->setPosition(Pos(x, _position.y));
}

void Node::setPositionY(int y)
{
    this->setPosition(Pos(_position.x, y));
}


Size Node::getContentSize() const
{
    return _contentSize;
}

void Node::setContentSize(Size s)
{
    this->_contentSize = s;
}

void Node::setContentSize(int w, int h)
{
    this->setContentSize(Size(w, h));
}

void Node::setContentSize(int s)
{
    this->setContentSize(Size(s));
}


Node* Node::getParent()
{
    return _parent;
}

void Node::removeFromParent()
{
    assert(_parent == nullptr);

    _parent->removeChild(this);
}


vector<Node*> Node::getChildren()
{
    return _children;
}

void Node::addChild(Node* n)
{
    assert(n->_parent == nullptr);

    _children.push_back(n);
    n->_parent = this;
}

void Node::addChild(Node* n, int z_ord)
{
    Node::addChild(n);

    n->setZOrd(z_ord);
}

void Node::removeChild(Node* n)
{
    for (auto it = _children.begin(); it != _children.end(); it++)
    {
        auto child = *it;

        if (child == n)
        {
            _children.erase(it);
            _children.shrink_to_fit();

            n->_parent = nullptr;

            return;
        }
    }
}

void Node::removeChildByName(string name)
{

}

void Node::removeChildByTag(int tag)
{

}
















