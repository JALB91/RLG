#include <ncurses.h>
#include "GameManager.h"

using namespace std;

int main(int argc, char *argv[])
{
    initscr();
    curs_set(0);
    noecho();
    cbreak();

    refresh();

    GameManager::getInstance()->mainLoop();

    endwin();

    return 0;
}
