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
    initscr();

    mainWin = stdscr;

    keypad(mainWin, TRUE);
    curs_set(0);
    noecho();
    cbreak();
    refresh();

    setFps(TICKRATE);
}

Director::~Director()
{
    endwin();
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


void Director::addWindow(WINDOW* win)
{
    _windows.insert(win);
}

void Director::removeWindow(WINDOW* win)
{
    for (auto it = _windows.begin(); it != _windows.end(); it++)
    {
        if (*it == win)
        {
            _windows.erase(it);
            break;
        }
    }
}


void Director::schedulePreUpdate(const jFunc0& callback, Node* target, string name /* "" */)
{
    schedule(_preUpdates, callback, target, name);
}


void Director::scheduleUpdate(const jFunc1<float>& callback, Node* target, string name /* "" */)
{
    schedule(_updates, callback, target, name);
}


void Director::schedulePostUpdate(const jFunc0& callback, Node* target, string name /* "" */)
{
    schedule(_postUpdates, callback, target, name);
}


void Director::addListener(const jFunc1<int>& callback, Node* target, string name /* "" */)
{
    schedule(_listeners, callback, target, name);
}


template<typename T>
void Director::schedule(std::vector<Listener<T>>& vec, const T& callback, Node* target, string name)
{
    if (!callback || !target)
    {
        return;
    }

    for (auto listener: vec)
    {
        if (listener._target == target)
        {
            return;
        }
    }

    Listener<T> listener(callback, target, name);
    vec.push_back(listener);
}

template<typename T>
void Director::unschedule(std::vector<Listener<T>>& vec, Node* target)
{
    for (auto it = vec.begin(); it != vec.end(); it++)
    {
        Listener<T> listener = *it;

        if (listener._target == target)
        {
            vec.erase(it);
            vec.shrink_to_fit();
            return;
        }
    }
}

template<typename T>
void Director::unschedule(std::vector<Listener<T>>& vec, string name)
{
    for (auto it = vec.begin(); it != vec.end(); it++)
    {
        Listener<T> listener = *it;

        if (listener._name == name)
        {
            vec.erase(it);
            vec.shrink_to_fit();
            return;
        }
    }
}


void Director::mainLoop()
{
    while (int ch = getch())
    {
        if (ch == 'q')
        {
            break;
        }

        preUpdate();

        for (auto listener: _listeners)
        {
            listener._callback(ch);
        }
        
        update();
        postUpdate();
    }
}

void Director::preUpdate()
{
    for (auto win: _windows)
    {
        wclear(win);
        box(win, 0, 0);
    }

    for (auto preUpdate: _preUpdates)
    {
        preUpdate._callback();
    }
}

void Director::update()
{
    _time += _fps * 0.001f;

    for (auto update: _updates)
    {
        update._callback(_fps * 0.001f);
    }
}

void Director::postUpdate()
{
    for (auto postUpdate: _postUpdates)
    {
        postUpdate._callback();
    }

    for (auto win: _windows)
    {
        wrefresh(win);
    }
}


NS_JALB_END