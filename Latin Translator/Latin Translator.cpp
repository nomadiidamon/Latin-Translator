// Latin Translator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Noun.h"
int main()
{
    std::cout << "Hello World!\n";

    Noun girl("First", "Fem", "puella", "puellae", "girl");
    girl.Display();
}
