#pragma once
#include <string>
#include "Declension.h"
#include "Case.h"
#include "Gender.h"
#include "Number.h"
#include "Macrons.h"


class VocativeCase
{
private:

	Case vocCase;
	Gender gender;
	Number number;
	Declension dec;

	std::string explanation = "";

public:

	VocativeCase(int declension);
	~VocativeCase();

	void ApplyDeclension(const int& _declension);

	std::string Explanation() const;


	void SetExplanation(std::string info);


};

