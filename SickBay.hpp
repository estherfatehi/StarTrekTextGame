/***********************************************************************
Program name: SickBay.hpp
Author: Esther Fatehi
Date: Mar 13, 2017
Description: Header file for Sick Bay child class
***********************************************************************/

#include "Space.hpp"

#ifndef SICKBAY_HPP
#define SICKBAY_HPP

class SickBay : public Space
{
public:
	//default constructor
	SickBay();

	//special action
	void specialAction();
};

#endif