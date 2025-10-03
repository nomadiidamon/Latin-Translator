#pragma once
#include <string>
#include "Declension.h"
#include "Case.h"
#include "Gender.h"
#include "Number.h"
#include "Macrons.h"

class DativeCase : public Case
{
private:

	Gender gender;
	Number number;
	Declension dec;

	std::string explanation = ""; 

public:

	DativeCase();
	DativeCase(int declension);
	~DativeCase();
	void Dispose();

	void ApplyDeclension(const int& _declension);

	std::string Explanation() const;

	void SetExplanation(std::string info);
};

