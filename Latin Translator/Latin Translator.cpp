// Latin Translator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Noun.h"
int main()
{
	Noun port("First", "F", "Porta", "Portae", "gate, entrance");

	//for (int i = 0; i < port.forms.size(); i++) {
	//	std::cout << port.forms[i] << "\n";
	//}

	port.ParseDefinitions();

	for (int i = 0; i < port.definitions.size(); i++) {
		std::cout << port.definitions[i] << "\n";
	}
	port.SetTranslations();

	for (int i = 0; i < port.translations.size(); i++) {
		std::cout << port.translations[i] << "\n";
	}
}

