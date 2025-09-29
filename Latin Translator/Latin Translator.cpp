// Latin Translator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Noun.h"
int main()
{
	Noun port("First", "F", "Both", "Porta", "Portae", "gate, entrance");
	port.Display();

	std::cout << "------------------------" << std::endl;

	Noun gladius("Second", "M", "Both", "Gladius", "Gladii", "sword");
	gladius.Display();
}

