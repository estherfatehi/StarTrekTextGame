/***********************************************************************
Program name: EnvironCon.hpp
Author: Esther Fatehi
Date: Mar 13, 2017
Description: Header file for Environmental Control child class
***********************************************************************/

#include "Space.hpp"

#ifndef ENVIRONCON_HPP
#define ENVIRONCON_HPP

class EnvironCon : public Space
{
public:
	//default constructor
	EnvironCon();

	//special action
	void specialAction();
};

#endif