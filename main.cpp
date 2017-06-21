/***********************************************************************
Program name: main.cpp
Author: Esther Fatehi
Date: Mar 13, 2017
Description: main program to run final project
***********************************************************************/

#include "Menu.hpp"
#include "Game.hpp"

int main()
{
	Game g;
	Menu m;

	int choice;

	//display main menu
	m.displayMainMenu();

	//get user choice
	choice = m.getChoice(1, 2);

	//play game for choice one
	if (choice == 1)
	{
		g.playShuttleBay();
		g.printItems();
	}

	//else, exit
	else
		{exit(0);}

	return 0;
}