// Latin Translator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Number.h"
#include "Noun.h"
int main()
{
	Noun port("First", "F", "Both", "Porta", "Portae", "gate, entrance");


	port.SerializeToJson("./Nouns/noun.txt");

	
	port.Display();
}

