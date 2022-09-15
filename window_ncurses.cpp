#include <ncurses.h>
#include <string>
#include <unistd.h>

int main(int argc, char const *argv[])
{
	int height {10}, width{100}, axis_y{10}, axis_x{10};

	initscr();

	WINDOW* window = newwin(height, width, axis_x, axis_y); 
	refresh();

	box(window, 0, 0);

	wprintw(window, "Hello"); 
	wrefresh(window);	
 
	endwin();

	return 0;
}