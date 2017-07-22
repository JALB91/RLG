#ifndef LABEL_H
#define LABEL_H

#include "string.h"
#include "Node.h"
#include "ncurses.h"

using namespace std;

NS_JALB_BEGIN

class Label : public Node
{
	public:
		static Label* createWithText(string text);
		static Label* create();

		virtual ~Label();

		virtual void draw() override;

		virtual inline void setText(const string& text) { this->_text = text; };
		virtual inline string getText() const { return _text; };

	protected:
		Label(string text);
		Label();

		virtual bool init() override;

	private:
		string _text = "";

};

NS_JALB_END

#endif