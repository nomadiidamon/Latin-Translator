#include "DativeCase.h"

DativeCase::DativeCase()
{
	dec = Declension();
	ApplyDeclension(dec.GetDeclensionNumber());
}

//Constructor
DativeCase::DativeCase(int declension) {
	ApplyDeclension(declension);
}

DativeCase::~DativeCase()
{
	Dispose();
}

void DativeCase::Dispose()
{
	Case::Dispose();
	gender.Dispose();
	number.Dispose();
	dec.Dispose();
	explanation.clear();
}

void DativeCase::ApplyDeclension(const int& _declension) {

	if (dec.GetDeclensionNumber() == 1) {
		SetSingularEnding("ae");
		SetSingularEnding_w_Macron('ae');
		SetPluralEnding("is");
		SetPluralEnding_w_Macron(lower_i, (char)'s');
	}
	else if (dec.GetDeclensionNumber() == 2) {
		SetSingularEnding("o");
		SetSingularEnding_w_Macron(lower_o);
		SetPluralEnding("is");
		SetPluralEnding_w_Macron(lower_i, (char)'s');
	}
	else if (dec.GetDeclensionNumber() == 3) {
		SetSingularEnding("i");
		SetSingularEnding_w_Macron(lower_i);
		SetPluralEnding("ibus");
		SetPluralEnding_w_Macron(lower_i, (char)'bus');
	}
	else if (dec.GetDeclensionNumber() == 4) {
		SetSingularEnding("ui");
		SetSingularEnding_w_Macron(lower_u, (char)'i');
		SetPluralEnding("ibus");
		SetPluralEnding_w_Macron(lower_i, (char)'bus');
	}
	else if (dec.GetDeclensionNumber() == 5) {
		SetSingularEnding("ei");
		SetSingularEnding_w_Macron(lower_e, (char)'i');
		SetPluralEnding("ebus");
		SetPluralEnding_w_Macron(lower_e, (char)'bus');
	}
	else {
		SetSingularEnding("ERROR");
		SetPluralEnding("ERROR");
		AddToSingularTranslations("ERROR");
		AddToPluralTranslations("ERROR");
	}

	AddToSingularTranslations_Articles("to the");
	AddToSingularTranslations_Articles("for the");
	AddToSingularTranslations_Articles("to a");
	AddToSingularTranslations_Articles("for a");
	AddToSingularTranslations_Articles("to ");
	AddToSingularTranslations_Articles("for");

	AddToPluralTranslations_Articles("to the");
	AddToPluralTranslations_Articles("for the");
	AddToPluralTranslations_Articles("to");
	AddToPluralTranslations_Articles("for");

	SetExplanation("");
}

//Getters
std::string DativeCase::Explanation() const {
	return explanation;
}

//Setters
void DativeCase::SetExplanation(std::string info) {
	explanation = info;
}


