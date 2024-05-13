// Latin Translator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Noun.h"
int main()
{
    Noun girl("First", "Fem", "Puella", "Puellae", "girl");
    Noun slavegirl("First", "Fem", "Ancilla", "Ancillae", "a female servant, slavegirl");
    slavegirl.SimpleDisplay();
    std::cout << "\n\n" << std::endl;
    slavegirl.Display();

    
    Noun farmer("First", "M", "Agricola", "Agricolae", "farmer");
    Noun poet("First", "M", "Poeta", "Poetae", "poet");
    Noun rose("First", "Fem", "Rosa", "Rosae", "rose");



}

