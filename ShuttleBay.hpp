/***********************************************************************
Program name: ShuttleBay.hpp
Author: Esther Fatehi
Date: Mar 13, 2017
Description: Header file for ShuttleBay child class
***********************************************************************/

#include "Space.hpp"

#ifndef SHUTTLEBAY_HPP
#define SHUTTLEBAY_HPP

class ShuttleBay : public Space
{
public:
	//default constructor
	ShuttleBay();

	//special action
	void specialAction();
};

#endif