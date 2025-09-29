#include "AccusativeCase.h"


//Constructor
AccusativeCase::AccusativeCase(int declension) {
	Declension _dec;
	dec = _dec;
	ApplyDeclension(dec.GetDeclensionNumber());
}

AccusativeCase::~AccusativeCase()
{
	accCase.Dispose();
	gender.Dispose();
	number.Dispose();
	dec.Dispose();
	explanation.clear();
}

void AccusativeCase::ApplyDeclension(const int& _declension) {

	if (dec.GetDeclensionNumber() == 1) {
		accCase.SetSingularEnding("am");
		accCase.SetSingularEnding_w_Macron('am');
		accCase.SetPluralEnding("as");
		accCase.SetPluralEnding_w_Macron(lower_a, 's');
	}
	else if (dec.GetDeclensionNumber() == 2) {
		accCase.SetSingularEnding("um");
		accCase.SetSingularEnding_w_Macron('u', 'm');
		accCase.SetPluralEnding("os");
		accCase.SetPluralEnding_w_Macron(lower_o, 's');
	}
	else if (dec.GetDeclensionNumber() == 3) {
		accCase.SetSingularEnding("em");
		accCase.SetSingularEnding_w_Macron('e', 'm');
		accCase.SetPluralEnding("es");
		accCase.SetPluralEnding_w_Macron(lower_e, 's');
	}
	else if (dec.GetDeclensionNumber() == 4) {
		accCase.SetSingularEnding("um");
		accCase.SetSingularEnding_w_Macron('u', 'm');
		accCase.SetPluralEnding("us");
		accCase.SetPluralEnding_w_Macron('u', 's');
	}
	else if (dec.GetDeclensionNumber() == 5) {
		accCase.SetSingularEnding("em");
		accCase.SetSingularEnding_w_Macron('e', 'm');
		accCase.SetPluralEnding("es");
		accCase.SetPluralEnding_w_Macron('e', 's');
	}
	else {
		accCase.SetSingularEnding("ERROR");
		accCase.SetPluralEnding("ERROR");
		accCase.AddToSingularTranslations("ERROR");
		accCase.AddToPluralTranslations("ERROR");
	}
	accCase.AddToSingularTranslations("the");
	accCase.AddToSingularTranslations("a");
	accCase.AddToPluralTranslations("the");
	accCase.AddToPluralTranslations("s");

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