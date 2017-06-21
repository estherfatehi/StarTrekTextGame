/*****************************************************************************
Program Name: Menu.hpp
Author: Esther Fatehi
Date: Mar 02, 2017
Description: Header file for Menu class
******************************************************************************/

#ifndef MENU_HPP
#define MENU_HPP

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

class Menu
{
public:
	//function prototype to display menu
	void displayMainMenu();

	//method to print out menu when in shuttle bay
	void shuttleBayMenu();

	//method to print out menu when in engineering
	void engineeringMenu();

	//method to print out menu when in sick bay
	void sickBayMenu();

	//method to print out menu when in bridge
	void bridgeMenu();

	//method to print out menu when in bridge after scanning bug bite
	void bridgeMenuTwo();

	//method to print out menu when in mess hall
	void messHallMenu();

	//method to print out menu when in mess hall after killing aliens
	void messHallMenuTwo();

	//method to print out menu when in environmental control
	void environConMenu();
	
	//function prototype for input validation for integers
	int getChoice(int, int);
};

#endif