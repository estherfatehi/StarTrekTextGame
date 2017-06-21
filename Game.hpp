/***********************************************************************
Program name: Game.hpp
Author: Esther Fatehi
Date: Mar 13, 2017
Description: Header file for class to play the game
***********************************************************************/

#ifndef GAME_HPP
#define GAME_HPP

#include <vector>
#include "Menu.hpp"
#include "ShuttleBay.hpp"
#include "Engineering.hpp"
#include "SickBay.hpp"
#include "MessHall.hpp"
#include "Bridge.hpp"
#include "EnvironCon.hpp"

using std::vector;

class Game
{
private:
	//menu object
	Menu m;
	//Space location objects
	Space *engr;
	Space *shuttle;
	Space *sickBay;
	Space *bridge;
	Space *messHall;
	Space *envCon;
	Space *captain; 		//pointer to current location
	//items
	bool tricorder;
	bool weapons;
	bool bomb;
	//alien status
	bool aliens;
	//bug bite scanned status
	bool scanBite;		
	//backpack vector
	vector<string> backpack;
	//oxygen level
	int oxygenLevel;
	
public: 
	//default constructor
	Game();

	//destructor
	~Game();

	//method for game play inside shuttle bay
	void playShuttleBay();

	//method for game play inside engineering
	void playEngineering();

	//method for game play inside sick bay
	void playSickBay();

	//method for game play inside bridge
	void playBridge();

	//method for game play inside mess hall
	void playMessHall();

	//method for game play inside environmental control
	void playEnvironCon();

	//method to print out backpack contents
	void printItems();

	//method to decrease oxygen 
	void decreaseOxygen();

	//method to print oxygen level
	void printOxygen();

	//method to show divide of game
	void printBreak();
};

#endif