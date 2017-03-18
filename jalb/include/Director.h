#ifndef DIRECTOR_H
#define DIRECTOR_H 

#include "Macros.h"
#include "Node.h"
#include "ncurses.h"
#include "Scheduled.h"

NS_JALB_BEGIN

class Director
{
    public:
        static Director* getInstance();

        void runWithMainNode(Node* node);

        void setFps(float fps);

        void schedule(const jFFunc& callback, Node* target, string name);
        void unschedule(Node* target);
        void unschedule(std::string name);

        void addListener(const jIFunc& callback, Node* target);
        void removeListener(Node* target);

    protected:
        Director();
        ~Director();

        void mainLoop();

    private:
        static Director* _instance;

        float _fps;

        std::vector<Timer> _timers;
        std::vector<Listener> _listeners;
};

NS_JALB_END

#endif /* DIRECTOR_H */
