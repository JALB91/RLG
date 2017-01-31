#ifndef NODE_H
#define NODE_H

#include "Pos.h"

class Node
{
public:
	Node* create();

	Pos getPosition();
	int getPositionX();
	int getPositionY();

	void setPosition(Pos p);
	void setPositionX(int x);
	void setPositionY(int y);

	~Node();

protected:
	Node();

	virtual bool init();

	Pos position;

private:

};

#endif