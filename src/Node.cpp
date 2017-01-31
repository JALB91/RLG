#include "Node.h"

Node* Node::create()
{
	Node* node = new Node();

	if (node->init())
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

}

Node::~Node()
{

}

Pos Node::getPosition()
{
	return position;
}

int Node::getPositionX()
{
	return position.x;
}

int Node::getPositionY()
{
	return position.y;
}

void Node::setPosition(Pos p)
{
	this->position = p;
}

void Node::setPositionX(int x)
{
	this->position.x = x;
}

void Node::setPositionY(int y)
{
	this->position.y = y;
}
