#include <ncurses.h>
#include "GameManager.h"

using namespace std;

int main(int argc, char *argv[])
{
	initscr();
    refresh();
    
    GameManager::getInstance()->gameLoop();

    getch();
    endwin();

    return 0;
}
