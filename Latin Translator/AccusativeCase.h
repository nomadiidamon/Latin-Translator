#pragma once
#include <string>
#include "Declension.h"
#include "Case.h"
#include "Gender.h"
#include "Number.h"
#include "Macrons.h"

class AccusativeCase
{
private:
	Case accCase;
	Gender gender;
	Number number;
	Declension dec;

	std::string explanation = "";

public:

	AccusativeCase(int declension);
	~AccusativeCase();

	void ApplyDeclension(const int& _declension);

	std::string Explanation() const;

	void SetExplanation(std::string info);






};

