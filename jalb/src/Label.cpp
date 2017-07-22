#include "Label.h"


NS_JALB_BEGIN

Label* Label::createWithText(string text)
{
	Label* label = new Label(text);

	if (label && label->init())
	{
		return label;
	}

	delete label;

	return nullptr;
}

Label* Label::create()
{
	return Label::createWithText("");
}

bool Label::init()
{
	if (!Node::init())
	{
		return false;
	}

	return true;
}

Label::Label(string text) : Node(), _text(text)
{

}

Label::Label() : Label("")
{

}

Label::~Label()
{

}


void Label::draw()
{
	Node::draw();

	mvwprintw(_win, getPositionY(), getPositionX(), "%s", _text.c_str());
}

NS_JALB_END