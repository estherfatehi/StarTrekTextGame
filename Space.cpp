/***********************************************************************
Program name: Space.cpp
Author: Esther Fatehi
Date: Mar 13, 2017
Description: Header file for Space abstract parent class
***********************************************************************/

#include "Space.hpp"

//default constructor
Space::Space()
{
	up = NULL;
	down = NULL;
	right = NULL;
	left = NULL;

	item = "";
	location = "";
}

//constructor
Space::Space(string l)
{
	location = l;
}

//method to get location name
string Space::getLocation()
{
	return location;
}

void Space::linkRoom(char dir, Space *room)
{
	if (dir == 'U')
		{this->up = room;}
	else if (dir == 'D')
		{this->down = room;}
	else if (dir == 'R')
		{this->right = room;}
	else if (dir == 'L')
		{this->left = room;}
}

Space* Space::moveRoom(char dir)
{
	if (dir == 'U')
		{return this->up;}
	else if (dir == 'D')
		{return this->down;}
	else if (dir == 'R')
		{return this->right;}
	else if (dir == 'L')
		{return this->left;}
}

void Space::noItem(string i)
{
	cout << "You need " << i << " to perform this action." << endl;
}