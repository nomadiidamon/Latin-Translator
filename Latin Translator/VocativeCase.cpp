#include "VocativeCase.h"

VocativeCase::VocativeCase()
{
	dec = Declension();
	ApplyDeclension(dec.GetDeclensionNumber());
}

//Constructor
VocativeCase::VocativeCase(int declension) {
	ApplyDeclension(declension);
}

VocativeCase::~VocativeCase()
{
	Dispose();
}

void VocativeCase::Dispose()
{
	Case::Dispose();
	gender.Dispose();
	number.Dispose();
	dec.Dispose();
	explanation.clear();
}

void VocativeCase::ApplyDeclension(const int& _declension) {
	dec = Declension(_declension);
	if (dec.GetDeclensionNumber() == 1) {
		SetSingularEnding("a");
		SetSingularEnding_w_Macron('a');
		SetPluralEnding("ae");
		SetPluralEnding_w_Macron('ae');

	}
	else if (dec.GetDeclensionNumber() == 2) {
		SetSingularEnding("e");
		SetSingularEnding_w_Macron('e');
		SetPluralEnding("i");
		SetPluralEnding_w_Macron('i');
	}
	else if (dec.GetDeclensionNumber() == 3) {
		SetSingularEnding("");
		//SetSingularEnding_w_Macron(L'');
		SetPluralEnding("es");
		SetPluralEnding_w_Macron(lower_e, 's');
	}
	else if (dec.GetDeclensionNumber() == 4) {
		SetSingularEnding("us");
		SetSingularEnding_w_Macron('u', 's');
		SetPluralEnding("us");
		SetPluralEnding_w_Macron('u', 's');
	}
	else if (dec.GetDeclensionNumber() == 5) {
		SetSingularEnding("es");
		SetSingularEnding_w_Macron('e', 's');
		SetPluralEnding("es");
		SetPluralEnding_w_Macron('e', 's');
	}
	else {
		SetSingularEnding("ERROR");
		SetPluralEnding("ERROR");
		AddToSingularTranslations("ERROR");
		AddToPluralTranslations("ERROR");
	}

	AddToSingularTranslations_Articles("oh");
	AddToSingularTranslations_Articles("Oh");

	AddToPluralTranslations_Articles("oh");
	AddToPluralTranslations_Articles("Oh");

	SetExplanation("");
}



//Getters
std::string VocativeCase::Explanation() const {
	return explanation;
}

//Setters
void VocativeCase::SetExplanation(std::string info) {
	explanation = info;
}

