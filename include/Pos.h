#ifndef POS_H
#define POS_H 

class Pos
{
public:
    Pos(const Pos &p);
    Pos(int x, int y);
    Pos();

    ~Pos();

    int x;
    int y;

protected:

private:

};

#endif /* POS_H */
