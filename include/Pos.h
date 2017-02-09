#ifndef POS_H
#define POS_H 

#include <cstddef>
#include <functional>

class Pos
{
    public:
        Pos(const Pos &p);
        Pos(int x, int y);
        Pos();

        ~Pos();

        bool operator==(const Pos& p) const;

        template<class T> Pos& operator+=(const T& t);
        template<class T> Pos& operator-=(const T& t);
        template<class T> Pos& operator*=(const T& t);
        template<class T> Pos& operator/=(const T& t);
        template<class T> Pos  operator+(const T& rt);
        template<class T> Pos  operator-(const T& rt);
        template<class T> Pos  operator*(const T& rt);
        template<class T> Pos  operator/(const T& rt);

        int x;
        int y;

    protected:

    private:

};


template<class T> Pos& Pos::operator+=(const T& t)
{
    this->x += t;
    this->y += t;
    return *this;
}

template<class T> Pos& Pos::operator-=(const T& t)
{
    this->x -= t;
    this->y -= t;
    return *this;
}

template<class T> Pos& Pos::operator*=(const T& t)
{
    this->x *= t;
    this->y *= t;
    return *this;
}

template<class T> Pos& Pos::operator/=(const T& t)
{
    this->x /= t;
    this->y /= t;
    return *this;
}

template<class T> Pos Pos::operator+(const T& t)
{
    *this += t;
    return *this;
}

template<class T> Pos Pos::operator-(const T& t)
{
    *this -= t;
    return *this;
}

template<class T> Pos Pos::operator*(const T& t)
{
    *this *= t;
    return *this;
}

template<class T> Pos Pos::operator/(const T& t)
{
    *this /= t;
    return *this;
}

struct PosHasher
{
    std::size_t operator()(const Pos& p) const
    {
        return ((std::hash<int>()(p.x)) ^ (std::hash<int>()(p.y)));
    }
};


#endif /* POS_H */
