#include "Size.h"


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
