#pragma once
#include <string>
#include "Declension.h"
#include "Case.h"
#include "Gender.h"
#include "Number.h"
#include "Macrons.h"

class GenitiveCase
{
private:

	Case genCase;
	Gender gender;
	Number number;
	Declension dec;

	std::string explanation = "";

public:

	GenitiveCase(int declension);
	~GenitiveCase();

	void ApplyDeclension(const int& _declension);

	std::string Explanation() const;

	void SetExplanation(std::string info);







};

