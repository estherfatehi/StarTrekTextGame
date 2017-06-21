/***********************************************************************
Program name: ShuttleBay.cpp
Author: Esther Fatehi
Date: Mar 13, 2017
Description: Header file for ShuttleBay child class
***********************************************************************/

#include "ShuttleBay.hpp"

//default constructor
ShuttleBay::ShuttleBay()
{
	location = "ShuttleBay";
}

//method for special action
void ShuttleBay::specialAction()
{
	//check environmental controls
	cout << "You check the environmental controls." << endl;
	cout << "You: Computer, what is the status of environmental controls?" << endl;
	cout << "Computer: Environmental controls are non functional" << endl;
	cout << "The temperature is getting increasingly hotter." << endl;
	cout << "The oxygen level is decreasing. You must hurry." << endl;
	cout << "Each room you move through will decrease your oxygen." << endl;
}