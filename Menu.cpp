/*****************************************************************************
Program Name: Menu.cpp
Author: Esther Fatehi
Date: Mar 02, 2017
Description: Implementation file for Menu class
******************************************************************************/

#include "Menu.hpp"

//displayMainMenu - print out the main menu
void Menu::displayMainMenu()
{
	cout << endl;
	cout << "You are captain of the Federation starship Enterprise." << endl;
	cout << "You are returning from an away mission and no one is " << endl;
	cout << "responding to your hails. The computer detects that no one" << endl;
	cout << "is aboard the Enterprise. Your mission is to find out what" << endl;
	cout << "happened to your crew and rescue them." << endl;
	cout << endl;
	cout << "Please choose from the following: " << endl;
	cout << "1) Play game." << endl;
	cout << "2) Exit program." << endl << endl;
}

//shuttleBayMenu - prints out menu when in shuttle bay
void Menu::shuttleBayMenu()
{
	cout << endl;
	cout << "1) Check environmental controls" << endl;
	cout << "2) Grab tricorder (scanning device) " << endl;
	cout << "3) Go up to engineering" << endl;
	cout << "4) Go down to sick bay" << endl;
	cout << "5) Go right to bridge" << endl << endl;
}

//engineeringMenu - prints out menu when in engineering
void Menu::engineeringMenu()
{
	cout << endl;
	cout << "1) Talk to computer" << endl;
	cout << "2) Grab weapons " << endl;
	cout << "3) Go down to the shuttle bay" << endl << endl;
}

//sickBayMenu - prints out menu when in sick bay
void Menu::sickBayMenu()
{
	cout << endl;
	cout << "1) Talk to holographic doctor" << endl;
	cout << "2) Grab antigen bomb" << endl;
	cout << "3) Go up to the shuttle bay" << endl << endl;
}

//bridgeMenu - prints out menu when in bridge
void Menu::bridgeMenu()
{
	cout << endl;
	cout << "1) Scan bug bite with tricorder" << endl;
	cout << "2) Go left to shuttle bay" << endl << endl;
}

//bridgeMenuTwo - prints out menu when in bridge after scanning bug bite
void Menu::bridgeMenuTwo()
{
	cout << endl;
	cout << "1) Go up to mess hall" << endl;
	cout << "2) Go left to shuttle bay." << endl << endl;
}

void Menu::messHallMenu()
{
	cout << endl;
	cout << "1) Fight aliens (caution: only proceed if you have weapons)" << endl;
	cout << "2) Run away back to the bridge" << endl << endl;
}

void Menu::messHallMenuTwo()
{
	cout << endl;
	cout << "1) Go right to environmental control." << endl;
	cout << "2) Go down to bridge" << endl << endl;
}

void Menu::environConMenu()
{
	cout << endl;
	cout << "1) Turn on radiator and set off antigen bomb." << endl;
	cout << "2) Go left to mess hall" << endl << endl;
}

//getChoice - This function provides input validation for range of numbers
int Menu::getChoice(int minimum, int maximum)
{

	string input;
	char val;
	int asciiVal;
	int output;
	getline(cin, input);
	int flag;

	//while true until value returned
	while (1 == 1)
		//boolean flag
	{	flag = 1;
		//for all integers user inputs, check to see if it is integer 0-9
		for (int i = 0; i < input.length(); i++)
		{	val = input.at(i);
			asciiVal = val;
			if (asciiVal > 47 && asciiVal < 58)
			{	flag *= 1;  }
			else
			{	flag *= 0;  }
		}
		//if inputs are integers, then check to see that it is in range and return
		if (flag == 1 && input.length() > 0)
		{	
			output = std::stoi(input);
			if (output >= minimum && output <= maximum)
			{	return output;
			}
		}
			//if integer is not an integer or out of range, error message and re-enter
		if (input.length() > 0)	
		{	cout << "Number must be an integer within the range ";
			cout << minimum << " - " << maximum << "."  << endl;
		}
			getline(cin, input);
		
	}

} 
