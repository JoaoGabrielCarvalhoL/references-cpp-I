#include <ncurses.h>

int main(int argc, char const *argv[])
{
	initscr();	//init screen
	printw("Hello, ncurses!"); 
	refresh();	//update terminal window

	getch();
	endwin();

	return 0;
}
//sudo apt-get install libncurses5-dev libncursesw5-dev
//Compiling: g++ example_basic_ncurses.cpp -lncurses -ltinfo