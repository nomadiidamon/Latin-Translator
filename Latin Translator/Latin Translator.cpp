// Latin Translator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Number.h"
#include "Noun.h"
int main()
{
	/// placing items in a file
	Noun port("First", "F", "Both", "Porta", "Portae", "gate, entrance");
	port.SerializeToJson("./Nouns/noun.txt");
	port.Display();

	Noun puer("Second", "M", "Both", "Puer", "Pueri", "boy, child");
	puer.SerializeToJson("./Nouns/noun.txt");
	puer.Display();

	Noun gladius("Second", "M", "Both", "Gladius", "Gladii", "sword");
	gladius.SerializeToJson("./Nouns/noun.txt");
	gladius.Display();

	Noun rex("Third", "M", "Both", "Rex", "Regis", "king");
	rex.SerializeToJson("./Nouns/noun.txt");
	rex.Display();

	Noun mater("Third", "F", "Both", "Mater", "Matris", "mother");
	mater.SerializeToJson("./Nouns/noun.txt");
	mater.Display();

	std::cout << "\n\n<-----------------End of Serialization------------------>" << std::endl;

	///// taking them out
	std::vector<Noun> nouns;

	Noun::DeserializeNounsFromJson("./Nouns/noun.txt", nouns);

	for (int i = 0; i < nouns.size(); i++) {
		nouns[i].Display();
	}

}

