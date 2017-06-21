#Program name: makefile
#Author: Esther Fatehi
#Date: Mar 13, 2017
#Description: makefile - executable is main

SRCS = Space.cpp Engineering.cpp ShuttleBay.cpp SickBay.cpp
SRCS += MessHall.cpp Bridge.cpp EnvironCon.cpp Game.cpp 
SRCS += Menu.cpp main.cpp

HEADERS = Space.hpp Engineering.hpp ShuttleBay.hpp SickBay.hpp
HEADERS += MessHall.hpp Bridge.hpp EnvironCon.hpp 
HEADERS += Game.hpp Menu.hpp

main: $(SRCS) $(HEADERS)
	g++ -std=c++0x $(SRCS) -g -o main

clean:
	rm *o main