#include "jalb.h"
#include "GameManager.h"

USING_NS_JALB;

int main(int argc, char *argv[])
{
    initscr();

    keypad(stdscr, TRUE);
    curs_set(0);
    noecho();
    cbreak();

    refresh();

    GameManager::getInstance();

    Director::getInstance()->runWithMainNode(nullptr);

    endwin();

    return 0;
}
