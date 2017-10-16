/* This file is part of cim.
 * 
 * cim: A VIM-like text editor implementation in C
 * Copyright (C) 2017 Wouter Franken <wouter.franken@gmail.com>
 *
 * cim is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * cim is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; See the GNU General Public License 
 * for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with cim.  If not, see <http://www.gnu.org/licenses/>.
*/


#include <ncurses.h>

int main()
{	
	initscr();			/* Start curses mode 		  */
	printw("Hello World !!!");	/* Print Hello World		  */
	refresh();			/* Print it on to the real screen */
	getch();			/* Wait for user input */
	endwin();			/* End curses mode		  */

	return 0;
}
