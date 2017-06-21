/***********************************************************************
Program name: MessHall.hpp
Author: Esther Fatehi
Date: Mar 13, 2017
Description: Header file for Mess Hall child class
***********************************************************************/

#include "Space.hpp"

#ifndef MESSHALL_HPP
#define MESSHALL_HPP

class MessHall : public Space
{
public:
	//default constructor
	MessHall();

	//special action
	void specialAction();
};

#endif