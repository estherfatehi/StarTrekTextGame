/***********************************************************************
Program name: Engineering.cpp
Author: Esther Fatehi
Date: Mar 13, 2017
Description: Implementation file for Engineering child class
***********************************************************************/

#include "Engineering.hpp"

//default constructor
Engineering::Engineering()
{
	location = "Engineering";
}

//method for special action
void Engineering::specialAction()
{
	//talk to computer
	cout << "You: Computer, are there any life signs on board?" << endl;
	cout << "Computer: There are no life signs on board." << endl;
	cout << "You: Where is the crew?" << endl;
	cout << "Computer: Crew whereabouts are unknown" << endl;
}