#include "GenitiveCase.h"
#include "Macrons.h"

GenitiveCase::GenitiveCase()
{
	dec = Declension();
	ApplyDeclension(dec.GetDeclensionNumber());
}

GenitiveCase::GenitiveCase(int declension) {
	ApplyDeclension(dec.GetDeclensionNumber());
}

GenitiveCase::~GenitiveCase()
{
	Dispose();
}

void GenitiveCase::Dispose()
{
	Case::Dispose();
	gender.Dispose();
	number.Dispose();
	dec.Dispose();
	explanation.clear();
}


void GenitiveCase::ApplyDeclension(const int& _declension) 
{
	dec = Declension(_declension);

	if (dec.GetDeclensionNumber() == 1) {
		SetSingularEnding("ae");
		SetSingularEnding_w_Macron('ae');
		SetPluralEnding("arum");
		SetPluralEnding_w_Macron(lower_a, (char)'rum');
	}
	else if (dec.GetDeclensionNumber() == 2) {
		SetSingularEnding("i");
		SetSingularEnding_w_Macron('i');
		SetPluralEnding("orum");
		SetPluralEnding_w_Macron(lower_o, (char)'rum');
	}
	else if (dec.GetDeclensionNumber() == 3) {
		SetSingularEnding("is");
		SetSingularEnding_w_Macron('i', 's');
		SetPluralEnding("um");
		SetPluralEnding_w_Macron(lower_u, 'm');
	}
	else if (dec.GetDeclensionNumber() == 4) {
		SetSingularEnding("us");
		SetSingularEnding_w_Macron('u', 's');
		SetPluralEnding("uum");
		SetPluralEnding_w_Macron(lower_u, (char)'um');
	}
	else if (dec.GetDeclensionNumber() == 5) {
		SetSingularEnding("ei");
		SetSingularEnding_w_Macron('ei');
		SetPluralEnding("erum");
		SetPluralEnding_w_Macron(lower_e, (char)'rum');
	}
	else {
		SetSingularEnding("ERROR");
		SetPluralEnding("ERROR");
		AddToSingularTranslations("ERROR");
		AddToPluralTranslations("ERROR");
	}

	AddToSingularTranslations_Articles("of the");
	AddToSingularTranslations_Articles("of a");
	AddToSingularTranslations_Articles("the __'s");

	AddToPluralTranslations_Articles("a __'s");
	AddToPluralTranslations_Articles("of the");
	AddToPluralTranslations_Articles("__'s");

	SetExplanation("");
}

// Getters
std::string GenitiveCase::Explanation() const {
	return explanation;
}

// Setters
void GenitiveCase::SetExplanation(std::string info) {
	explanation = info;
}