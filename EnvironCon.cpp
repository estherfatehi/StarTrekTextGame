/***********************************************************************
Program name: EnvironCon.cpp
Author: Esther Fatehi
Date: Mar 13, 2017
Description: Implementation file for Environmental Control child class
***********************************************************************/

#include "EnvironCon.hpp"

//default constructor
EnvironCon::EnvironCon()
{
	location = "Environmental Control";
}

//method for special action
void EnvironCon::specialAction()
{
	cout << "You turn on the radiator as quickly as you can to attract the aliens." << endl;
	cout << "You set the antigen bomb timer for 30 seconds and hide behind a thick metal bench." << endl;
	cout << "You hear the aliens swarm in, and you wait as your heart thumps loudly in your ears." << endl;
	cout << "BOOM! You peek over the bench and there are alien pieces everywhere." << endl;
	cout << "You hurry to the computer and turn environmental controls back on." << endl;
	cout << "Congratulations. You have rescued your crew. You win." << endl << endl;
}