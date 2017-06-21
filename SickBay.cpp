/***********************************************************************
Program name: SickBay.cpp
Author: Esther Fatehi
Date: Mar 13, 2017
Description: Implementation file for Sick Bay child class
***********************************************************************/

#include "SickBay.hpp"

//default constructor
SickBay::SickBay()
{
	location = "Sick Bay";
}

//method for special action
void SickBay::specialAction()
{
	//talk to holographic doctor
	cout << "You: Doctor, do you know what's going on here?" << endl;
	cout << "Doctor: There is a virus that has infected the crew." << endl;
	cout << "	This virus grows rapidly to about half a human's size and can fly." << endl;
	cout << "	I have made an antigen bomb that will kill all of them." << endl;
	cout << "	You must go to environmental control and turn on the radiator, " << endl;
	cout << "	which will attract them and then set off the bomb." << endl;
	cout << "You: Do you know where the crew is? " << endl;
	cout << "Doctor: I'm not sure but if you can scan the virus, you can find the crew." << endl;
	cout << endl;
}