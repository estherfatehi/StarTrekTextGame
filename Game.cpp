/***********************************************************************
Program name: Game.cpp
Author: Esther Fatehi
Date: Mar 13, 2017
Description: Implementation file for class to play the game
***********************************************************************/

#include "Game.hpp"

//default constructor
Game::Game()
{
	//make rooms
	engr = new Engineering;
	shuttle = new ShuttleBay;
	sickBay = new SickBay;
	bridge = new Bridge;
	messHall = new MessHall;
	envCon = new EnvironCon;

	//link rooms
	shuttle->linkRoom('U', engr);
	shuttle->linkRoom('D', sickBay);
	shuttle->linkRoom('R', bridge);
	engr->linkRoom('D', shuttle);
	sickBay->linkRoom('U', shuttle);
	bridge->linkRoom('L', shuttle);
	bridge->linkRoom('U', messHall);
	messHall->linkRoom('D', bridge);
	messHall->linkRoom('R', envCon);
	envCon->linkRoom('L', messHall);

	//captain starts in shuttle bay
	captain = shuttle;

	//items declared as false
	tricorder = false;
	weapons = false;
	bomb = false;

	//aliens start off alive
	aliens = true;

	//bite hasn't been scanned yet
	scanBite = false;
	
	//set oxygen level 
	oxygenLevel = 105;
}

//destructor
Game::~Game()
{
	delete engr;
	delete shuttle;
	delete sickBay;
	delete bridge;
	delete messHall;
	delete envCon;
}

//method for game play inside shuttle bay
void Game::playShuttleBay()
{
	printBreak();
	int choice;			//user choice for shuttle bay
	//decrease oxygen
	decreaseOxygen();

	do
	{	printOxygen();
		printItems();
		cout << endl;
		cout << "You are in the shuttle bay. What would you like to do?" << endl;
		m.shuttleBayMenu();
		choice = m.getChoice(1, 5);
		printBreak();
		//check environmental controls
		if (choice == 1)
			{captain->specialAction();}
		//pick up tricorder
		else if (choice == 2)
		{
			//if tricorder has not been picked up yet
			if (!tricorder)
			{
				cout << "Tricorder has been added to your backpack." << endl;
				backpack.push_back("tricorder");
				tricorder = true;
			}
			//print message that tricorder has already been picked up
			else
				{cout << "Tricorder is already in your backpack." << endl;}
		}
		//go up to engineering
		else if (choice == 3)
			{captain = captain->moveRoom('U');
				playEngineering();}
		//go down to sick bay
		else if (choice == 4)
			{captain = captain->moveRoom('D');
				playSickBay();}
		//go right to bridge
		else
			{captain = captain->moveRoom('R');
				playBridge();}
		printBreak();
	} while (choice != 3 && choice != 4 && choice != 5);
}

//method for game play inside engineering
void Game::playEngineering()
{
	printBreak();
	int choice;			//user choice for engineering
	//decrease oxygen
	decreaseOxygen();

	do
	{
		printOxygen();
		printItems();
		cout << endl;
		cout << "You are in engineering. What would you like to do?" << endl;
		m.engineeringMenu();
		choice = m.getChoice(1, 3);
		printBreak();
		//talk to computer
		if (choice == 1)
			{captain->specialAction();}
		//pick up weapons
		else if (choice == 2)
		{
			//if weapons have not been picked up yet
			if (!weapons)
			{
				cout << "Weapons have been added to your backpack." << endl;
				backpack.push_back("weapons");
				weapons = true;
			}
			//print message that weapons have already been picked up
			else
				{cout << "Weapons are already in your backpack." << endl;}
		}
		//go back to shuttle bay
		else
			{captain = captain->moveRoom('D');
				playShuttleBay();}
		printBreak();
	} while (choice != 3);
}

//method for game play inside sick bay
void Game::playSickBay()
{
	printBreak();
	int choice;			//user choice for sick bay
	//decrease oxygen
	decreaseOxygen();

	do
	{
		printOxygen();
		printItems();
		cout << endl;
		cout << "You are in sick bay. What would you like to do?" << endl;
		m.sickBayMenu();
		choice = m.getChoice(1, 3);
		printBreak();
		//talk to computer
		if (choice == 1)
			{captain->specialAction();}
		//pick up bomb
		else if (choice == 2)
		{
			//if bomb have not been picked up yet
			if (!bomb)
			{
				backpack.push_back("antigen bomb");
				cout << "An antigen bomb has been added to your backpack" << endl;
				bomb = true;
			}
			//print message that bomb have already been picked up
			else
				{cout << "The antigen bomb is already in your backpack." << endl;}
		}
		//go up to shuttle bay
		else
			{captain = captain->moveRoom('U');
				playShuttleBay();}
		printBreak();
	} while (choice != 3);
}

//method for game play inside bridge
void Game::playBridge()
{
	printBreak();
	int choice;			//user choice for bridge
	//decrease oxygen
	decreaseOxygen();
	printOxygen();
	printItems();
	cout << endl;
	//if bite has not been scanned yet
	if (!scanBite)
	{
		cout << "You are in the bridge. All of a sudden, you feel a sharp sting on your arm!" << endl;
		cout << "It looks like you have been bitten by a virus in it's early life cycle." << endl;
		cout << "What would you like to do?" << endl;
		m.bridgeMenu();
		choice = m.getChoice(1, 2);
		printBreak();
		//scan bug bite
		if (choice == 1)
		{
			//scan bug bite if you have a tricorder
			if (tricorder)
				{captain->specialAction();
					scanBite = true;
					playBridge();}
			//can't scan bug bite if no tricorder
			else
				{captain->noItem("a tricorder");
					playBridge();}
		}
		//go left to shuttle bay
		else
			{captain = captain->moveRoom('L');
				playShuttleBay();}
	}
	//if bite has been scanned
	else if (scanBite)
	{
		cout << "You are in the bridge. What would you like to do?" << endl;
		m.bridgeMenuTwo();
		choice = m.getChoice(1, 2);
		printBreak();
		//scan bug bite
		if (choice == 1)
		{
			captain = captain->moveRoom('U');
			playMessHall();
		}
		else
			{captain = captain->moveRoom('L');
				playShuttleBay();}
	}
	printBreak();
}

//method for game play inside mess hall
void Game::playMessHall()
{
	printBreak();
	int choice;		//user choice for mess hall
	//decrease oxygen
	decreaseOxygen();
	printOxygen();
	printItems();
	cout << endl;

	//if aliens are alive
	if (aliens)
	{
		cout << "Three aliens come flying right at you and they look angry!" << endl;
		cout << "What would you like to do?" << endl;
		m.messHallMenu();
		choice = m.getChoice(1, 2);
		printBreak();
		if (choice == 1)
		{
			//if you have weapons, fight aliens
			if (weapons)
			{
				captain->specialAction();
				aliens = false;
				oxygenLevel += 5;
				playMessHall();
			}
			//if no weapons, die
			else if (!weapons)
			{
				captain->noItem("weapons");
				cout << "You have foolishly chosen to fight aliens without any weapons" << endl;
				cout << "Your punishment is death!" << endl;
				this->~Game();
				exit(0);			
			}
		}
		else if (choice == 2)
			{captain = captain->moveRoom('D');
				playBridge();}
	}

	//if user has killed aliens already
	else if (!aliens)
	{
		cout << "You are in the mess hall. What would you like to do?" << endl;
		m.messHallMenuTwo();
		choice = m.getChoice(1, 2);
		printBreak();
		if (choice == 1)
			{captain = captain->moveRoom('R');
				playEnvironCon();}
		else
			{captain = captain->moveRoom('D');
				playBridge();}
	}

	printBreak();
}

//method for game play inside environmental control
void Game::playEnvironCon()
{
	printBreak();
	int choice;			//user choice for environmental control
	//decrease oxygen
	decreaseOxygen();
	printOxygen();
	printItems();
	cout << endl;
	cout << "You are in environmental control. What would you like to do?" << endl;
	m.environConMenu();
	choice = m.getChoice(1, 2);
	printBreak();
	//set off bomb
	if (choice == 1)
	{
		//if you have antigen bomb, win and end the game
		if (bomb)
		{
			captain->specialAction();
			this->~Game();
			exit(0);
		}
		else if (!bomb)
		{
			captain->noItem("an antigen bomb");
			oxygenLevel += 5;
			playEnvironCon();
		}
	}
	//go back to mess hall
	else if (choice == 2)
		{captain = captain->moveRoom('L');
			playMessHall();}

	printBreak();
}

//method to print out backpack contents
void Game::printItems()
{
	if (!backpack.empty())
	{
		cout << "Items in backpack: " << endl;
		for (int i = 0; i < backpack.size(); i++)
			{cout << backpack[i] << endl;}
	}
	else
		{cout << "Backpack is empty." << endl;}
}

//method to decrease oxygen
void Game::decreaseOxygen()
{
	oxygenLevel -= 5;
	//if oxygen level reaches 0, player dies and program ends
	if (oxygenLevel == 0)
	{
		cout << "You have run out of oxygen and have failed your mission." << endl;
		cout << "You and the crew are now dead. (cue sad music)." << endl;
		//free memory and exit program
		this->~Game();
		exit(0);
	}
}

//method to print oxygen level
void Game::printOxygen()
{
	cout << "Oxygen level: " << endl << oxygenLevel << endl;
}

//method to show divide of game
void Game::printBreak()
{
	cout << endl << "-------------------------------------------------------------------" << endl << endl;
}