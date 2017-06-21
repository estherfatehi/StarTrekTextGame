/***********************************************************************
Program name: Bridge.cpp
Author: Esther Fatehi
Date: Mar 13, 2017
Description: Implementation file for Bridge child class
***********************************************************************/

#include "Bridge.hpp"

//default constructor
Bridge::Bridge()
{
	location = "Bridge";
}

//method for special action if you have tricorder
void Bridge::specialAction()
{
	//scan bug bite 
	cout << "You scan the bug bite with your tricorder and input the information " << endl;
	cout << "into the computer. " << endl;
	cout << "You: Computer, locate this life form." << endl;
	cout << "Computer: The location of this life form is in the mess hall." << endl;
}
