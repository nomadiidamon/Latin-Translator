#include "AccusativeCase.h"


AccusativeCase::AccusativeCase()
{
	dec = Declension();
	ApplyDeclension(dec.GetDeclensionNumber());
}

//Constructor
AccusativeCase::AccusativeCase(int declension) {
	ApplyDeclension(declension);
}

AccusativeCase::~AccusativeCase()
{
	Dispose();
}

void AccusativeCase::Dispose()
{
	Case::Dispose();
	gender.Dispose();
	number.Dispose();
	dec.Dispose();
	explanation.clear();
}

void AccusativeCase::ApplyDeclension(const int& _declension) {

	if (dec.GetDeclensionNumber() == 1) {
		SetSingularEnding("am");
		SetSingularEnding_w_Macron('am');
		SetPluralEnding("as");
		SetPluralEnding_w_Macron(lower_a, 's');
	}
	else if (dec.GetDeclensionNumber() == 2) {
		SetSingularEnding("um");
		SetSingularEnding_w_Macron('u', 'm');
		SetPluralEnding("os");
		SetPluralEnding_w_Macron(lower_o, 's');
	}
	else if (dec.GetDeclensionNumber() == 3) {
		SetSingularEnding("em");
		SetSingularEnding_w_Macron('e', 'm');
		SetPluralEnding("es");
		SetPluralEnding_w_Macron(lower_e, 's');
	}
	else if (dec.GetDeclensionNumber() == 4) {
		SetSingularEnding("um");
		SetSingularEnding_w_Macron('u', 'm');
		SetPluralEnding("us");
		SetPluralEnding_w_Macron('u', 's');
	}
	else if (dec.GetDeclensionNumber() == 5) {
		SetSingularEnding("em");
		SetSingularEnding_w_Macron('e', 'm');
		SetPluralEnding("es");
		SetPluralEnding_w_Macron('e', 's');
	}
	else {
		SetSingularEnding("ERROR");
		SetPluralEnding("ERROR");
		AddToSingularTranslations("ERROR");
		AddToPluralTranslations("ERROR");
	}
	AddToSingularTranslations_Articles("the");
	AddToSingularTranslations_Articles("a");
	AddToPluralTranslations_Articles("the");
	AddToPluralTranslations_Articles("s");

	SetExplanation("");
}

//Getters
std::string AccusativeCase::Explanation() const {
	return explanation;
}

//Setters
void AccusativeCase::SetExplanation(std::string info) {
	explanation = info;
}
