/***********************************************************************
Program name: MessHall.cpp
Author: Esther Fatehi
Date: Mar 13, 2017
Description: Implementation file for Mess Hall child class
***********************************************************************/

#include "MessHall.hpp"

//default constructor
MessHall::MessHall()
{
	location = "Mess Hall";
}

//method for special action - check if there are weapons and if there are aliens
void MessHall::specialAction()
{
	cout << "One attacks! You fire and it goes down with a screeching sound!" << endl;
	cout << "The other two attack at the same time! You hit one while you roll " << endl;
	cout << "on the floor, barely escaping the other one. From the floor, you shoot " << endl;
	cout << "at the third one and splatter its guts all over the wall of the mess hall." << endl;
}