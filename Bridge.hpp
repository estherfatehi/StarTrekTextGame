/***********************************************************************
Program name: Bridge.hpp
Author: Esther Fatehi
Date: Mar 13, 2017
Description: Header file for Bridge child class
***********************************************************************/

#include "Space.hpp"

#ifndef BRIDGE_HPP
#define BRIDGE_HPP

class Bridge : public Space
{
public:
	//default constructor
	Bridge();

	//special action
	void specialAction();
};

#endif