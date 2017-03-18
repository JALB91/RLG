#include "Director.h"

NS_JALB_BEGIN

Director* Director::_instance = nullptr;

Director* Director::getInstance()
{
    if (!_instance)
    {
        _instance = new Director();
    }

    return _instance;
}


Director::Director()
{
    setFps(TICKRATE);
}

Director::~Director()
{

}


void Director::runWithMainNode(Node* node)
{
    mainLoop();
}


void Director::setFps(float fps)
{
    _fps = fps;

    timeout(_fps);
}

void Director::schedule(const jFFunc& callback, Node* target, string name)
{
    for (auto timer: _timers)
    {
        if (timer._target == target)
        {
            return;
        }
    }

    Timer timer(callback, target, name);

    _timers.push_back(timer);
}

void Director::unschedule(Node* target)
{
    for (auto it = _timers.begin(); it != _timers.end(); it++)
    {
        Timer timer = *it;

        if (timer._target == target)
        {
            _timers.erase(it);
            _timers.shrink_to_fit();
            return;
        }
    }
}

void Director::unschedule(std::string name)
{
    for (auto it = _timers.begin(); it != _timers.end(); it++)
    {
        Timer timer = *it;

        if (timer._name == name)
        {
            _timers.erase(it);
            _timers.shrink_to_fit();
            return;
        }
    }
}


void Director::addListener(const jIFunc& callback, Node* target)
{
    if (!callback || !target)
    {
        return;
    }

    for (auto listener: _listeners)
    {
        if (listener._target == target)
        {
            return;
        }
    }

    Listener listener(callback, target);

    _listeners.push_back(listener);
}

void Director::removeListener(Node* target)
{
    for (auto it = _listeners.begin(); it != _listeners.end(); it++)
    {
        Listener listener = *it;

        if (listener._target == target)
        {
            _listeners.erase(it);
            _listeners.shrink_to_fit();
            return;
        }
    }
}


void Director::mainLoop()
{
    int ch;

    while ((ch = getch()) != 'q')
    {
        for (auto listener: _listeners)
        {
            if (listener._callback)
            {
                listener._callback(ch);
            }
        }

        for (auto timer: _timers)
        {
            if (timer._callback)
            {
                timer._callback(_fps * 0.001f);
            }
        }
    }
}

NS_JALB_END
