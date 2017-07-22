#include "Node.h"
#include "Director.h"
#include <algorithm>
#include <assert.h>

NS_JALB_BEGIN

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

    _position = Pos(0, 0);
    _contentSize = Size(0, 0);

    _parent = nullptr;
}

Node::~Node()
{

}


void Node::draw()
{
    sort(_children.begin(), _children.end(), [] (const Node* a, const Node* b) {

            return a->_z_ord < b->_z_ord;
        }); 

   for (Node* node: _children)
   {
       node->draw();
   }
}

void Node::update(float delta)
{

}


Pos Node::transformToNodePos(Node* node)
{
    if (!getParent() || !node->getParent())
    {
        return Pos(0, 0);
    }

    Pos nodePos = node->getPosition();
    Node* curr = node;

    while (curr->getParent() != getParent())
    {
        curr = curr->getParent();
        nodePos -= curr->getPosition(); 
    }

    return nodePos + getPosition();
}


void Node::removeFromParent()
{
    assert(_parent == nullptr);

    _parent->removeChild(this);
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


void Node::scheduleUpdate()
{
    Director::getInstance()->schedule(std::bind(&Node::update, this, std::placeholders::_1), this, "update");
}

NS_JALB_END
