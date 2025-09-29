#pragma once
#include <string>
#include "Declension.h"
#include "Case.h"
#include "Gender.h"
#include "Number.h"
#include "Macrons.h"

class AblativeCase
{
private:
	Case ablCase;
	Gender gender;
	Number number;
	Declension dec;

	std::string explanation = "";

public:

	AblativeCase();
	AblativeCase(int declension);
	~AblativeCase();
	void Dispose();

	void ApplyDeclension(const int& _declension);

	std::string Explanation() const;

	void SetExplanation(std::string info);

	std::string SingularEnding() const;
	int SingularEndingLength() const;
	std::string PluralEnding() const;
	int PluralEndingLength() const;

};

