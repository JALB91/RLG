#ifndef SIZE_H
#define SIZE_H 

#include "Macros.h"

NS_JALB_BEGIN

class Size
{
    public:
        Size(int w, int h);
        Size(int s);
        Size();

        ~Size();

        int width;
        int height;

    protected:

    private:

};

NS_JALB_END

#endif /* SIZE_H */
