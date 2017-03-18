#ifndef SCHEDULED_H
#define SCHEDULED_H 

#include "Macros.h"
#include "Node.h"

NS_JALB_BEGIN

typedef std::function<void(float)> jFFunc;
typedef std::function<void(int)> jIFunc;

struct Timer
{
    jFFunc _callback;
    Node* _target;
    string _name;

    Timer(const jFFunc& callback, Node* target, string name) :
        _callback(callback),
        _target(target),
        _name(name)
    {

    }
};

struct Listener
{
    jIFunc _callback;
    Node* _target;

    Listener(const jIFunc& callback, Node* target) :
        _callback(callback),
        _target(target)
    {

    }
};

NS_JALB_END

#endif /* SCHEDULED_H */
