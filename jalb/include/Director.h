#ifndef DIRECTOR_H
#define DIRECTOR_H 

#include <set>
#include "Macros.h"
#include "Node.h"
#include "ncurses.h"
#include "Scheduled.h"

NS_JALB_BEGIN

class Director
{
    public:
        static Director* getInstance();

        virtual ~Director();

        void runWithMainNode(Node* node);

        void setFps(float fps);

        void addWindow(WINDOW* win);
        void removeWindow(WINDOW* win);

        void schedulePreUpdate(const jFunc0& callback, Node* target, string name = "");
        inline void unschedulePreUpdate(Node* target) { unschedule(_preUpdates, target); };
        inline void unschedulePreUpdate(string name) { unschedule(_preUpdates, name); };

        void scheduleUpdate(const jFunc1<float>& callback, Node* target, string name = "");
        inline void unscheduleUpdate(Node* target) { unschedule(_updates, target); };
        inline void unscheduleUpdate(string name) { unschedule(_updates, name); };

        void schedulePostUpdate(const jFunc0& callback, Node* target, string name = "");
        inline void unschedulePostUpdate(Node* target) { unschedule(_postUpdates, target); };
        inline void unschedulePostUpdate(string name) { unschedule(_postUpdates, name); };

        void addListener(const jFunc1<int>& callback, Node* target, string name = "");
        inline void removeListener(Node* target) { unschedule(_listeners, target); };
        inline void removeListener(string name) { unschedule(_listeners, name); };

    protected:
        Director();

        template<typename T>
        static void schedule(std::vector<Listener<T>>& vec, const T& callback, Node* target, string name);

        template<typename T>
        static void unschedule(std::vector<Listener<T>>& vec, Node* target);

        template<typename T>
        static void unschedule(std::vector<Listener<T>>& vec, string name);

        void mainLoop();

        void preUpdate();
        void update();
        void postUpdate();

    private:
        static Director* _instance;

        float _fps;

        WINDOW* mainWin = nullptr;

        std::set<WINDOW*> _windows;

        std::vector<Listener<jFunc0>> _preUpdates;
        std::vector<Listener<jFunc1<float>>> _updates;
        std::vector<Listener<jFunc0>> _postUpdates;
        std::vector<Listener<jFunc1<int>>> _listeners;

};

NS_JALB_END

#endif /* DIRECTOR_H */
