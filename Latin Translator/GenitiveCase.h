#pragma once
#include <string>
#include "Declension.h"
#include "Case.h"
#include "Gender.h"
#include "Number.h"
#include "Macrons.h"

class GenitiveCase : public Case
{
private:

	Gender gender;
	Number number;
	Declension dec;

	std::string explanation = "";

public:

	GenitiveCase();
	GenitiveCase(int declension);
	~GenitiveCase();
	virtual void Dispose() override;

	void ApplyDeclension(const int& _declension);

	std::string Explanation() const;

	void SetExplanation(std::string info);

};

