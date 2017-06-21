# Star Trek Text Based Game
March 2017

You are captain of the Federation starship Enterprise. You are returning from an away mission and no one is responding to your hails. The computer detects that no one is aboard the Enterprise. Your mission is to find out what happened to your crew and rescue them. Can you complete your mission before you run out of oxygen? 

About the project: <br />
Text based game was created in C++. The game was made using the concepts of polymorphism, inheritance, and pointers. There are six rooms in the game that are connected by direction pointers. There is a pointer to the player, who moves through the rooms, interacting with the environment by speaking to someone or picking something up to add to their inventory. There is a main Space class, and each room is a derived class from this Space class. The interactions in the environment in each room is a derived virtual function from the parent Space class using polymorphism. 
