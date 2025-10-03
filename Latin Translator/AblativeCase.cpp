#include "AblativeCase.h"

AblativeCase::AblativeCase()
{
	dec = Declension();
	ApplyDeclension(dec.GetDeclensionNumber());
}

//Constructor
AblativeCase::AblativeCase(int declension) {
	ApplyDeclension(declension);
}

AblativeCase::~AblativeCase()
{
	Dispose();
}

void AblativeCase::Dispose()
{
	Case::Dispose();
	gender.Dispose();
	number.Dispose();
	dec.Dispose();
	explanation.clear();
}

void AblativeCase::ApplyDeclension(const int& _declension) {

	if (dec.GetDeclensionNumber() == 1) {
		SetSingularEnding("a");
		SetSingularEnding_w_Macron(lower_a);
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
		SetSingularEnding("e");
		SetSingularEnding_w_Macron(lower_e);
		SetPluralEnding("ibus");
		SetPluralEnding_w_Macron(lower_i, (char)'bus');
	}
	else if (dec.GetDeclensionNumber() == 4) {
		SetSingularEnding("u");
		SetSingularEnding_w_Macron(lower_u);
		SetPluralEnding("ibus");
		SetPluralEnding_w_Macron(lower_i, (char)'bus');
	}
	else if (dec.GetDeclensionNumber() == 5) {
		SetSingularEnding("e");
		SetSingularEnding_w_Macron(lower_e);
		SetPluralEnding("ebus");
		SetPluralEnding_w_Macron(lower_e, (char)'bus');
	}
	else {
		SetSingularEnding("ERROR");
		SetPluralEnding("ERROR");
		AddToSingularTranslations("ERROR");
		AddToPluralTranslations("ERROR");
	}

	AddToSingularTranslations_Articles("by the");
	AddToSingularTranslations_Articles("by a");
	AddToSingularTranslations_Articles("with a");
	AddToSingularTranslations_Articles("with the");
	AddToSingularTranslations_Articles("from a");
	AddToSingularTranslations_Articles("from the");

	AddToPluralTranslations_Articles("by the");
	AddToPluralTranslations_Articles("with the");
	AddToPluralTranslations_Articles("from the");

	SetExplanation("");
}

//Getters
std::string AblativeCase::Explanation() const {
	return explanation;
}

//Setters
void AblativeCase::SetExplanation(std::string info) {
	explanation = info;
}
