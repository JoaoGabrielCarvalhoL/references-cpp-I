#include <ncurses.h>
#include <string>
#include <unistd.h>

int main(int argc, char const *argv[])
{

	const int delay = 40000; 
	int x{0}, y{0};

	initscr();
	noecho();
	curs_set(false);	

	while(true) {
		clear();
		mvprintw(y, x, "---->");
		//getch();
		refresh();
		usleep(delay); 
		x++;
	}
 
	refresh();	

	getch();
	endwin();

	return 0;
}
//sudo apt-get install libncurses5-dev libncursesw5-dev
//Compiling: g++ example_ncurses.cpp -lncurses -ltinfo