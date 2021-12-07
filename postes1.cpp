#include <ncurses/ncurses.h>
using namespace std;

int main(){
	
	initscr();
	
	printw("hello world\n");
	
	getch();
	endwin();
}
