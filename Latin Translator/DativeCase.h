#pragma once
#include <string>
#include "Declension.h"
#include "Case.h"
#include "Gender.h"
#include "Number.h"
#include "Macrons.h"

class DativeCase
{
private:

	Case datCase;
	Gender gender;
	Number number;
	Declension dec;

	std::string explanation = ""; 

public:

	DativeCase();
	DativeCase(int declension);
	~DativeCase();

	void ApplyDeclension(const int& _declension);

	std::string Explanation() const;

	void SetExplanation(std::string info);

	std::string SingularEnding();
	int SingularEndingLength();
	std::string PluralEnding();
	int PluralEndingLength();
	

};

