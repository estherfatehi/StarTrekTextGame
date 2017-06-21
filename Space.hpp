/***********************************************************************
Program name: Space.hpp
Author: Esther Fatehi
Date: Mar 13, 2017
Description: Header file for Space abstract parent class
***********************************************************************/

#ifndef SPACE_HPP
#define SPACE_HPP

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;
using std::cin;

class Space
{
protected:
	//direction pointers
	Space *up;
	Space *down;
	Space *right;
	Space *left;
	
	string item;
	string location;

public:
	//default constructor
	Space();

	//constructor
	Space(string);

	//method to get location name
	virtual string getLocation();

	//method to link room
	virtual void linkRoom(char, Space*);

	//method to move rooms and returns new room
	virtual Space* moveRoom(char);

	//pure abstract method to perform special action
	virtual void specialAction() = 0;

	//method for not having item'
	virtual void noItem(string);
};

#endif