/***********************************************************************
Program name: Engineering.hpp
Author: Esther Fatehi
Date: Mar 13, 2017
Description: Header file for Engineering child class
***********************************************************************/

#include "Space.hpp"

#ifndef ENGINEERING_HPP
#define ENGINEERING_HPP

class Engineering : public Space
{
public:
	//default constructor
	Engineering();

	//special action
	void specialAction();
};

#endif