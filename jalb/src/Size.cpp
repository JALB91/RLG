#include "Size.h"

NS_JALB_BEGIN

Size::Size(int w, int h) : width(w), height(h)
{

}

Size::Size(int s) : Size(s, s)
{

}

Size::Size() : Size(0)
{

}

Size::~Size()
{

}

NS_JALB_END
