#include "GenitiveCase.h"
#include "Macrons.h"

GenitiveCase::GenitiveCase(int declension) {
	dec = Declension(declension);
	genCase = Case();
	ApplyDeclension(dec.GetDeclensionNumber());
}

GenitiveCase::~GenitiveCase()
{
	genCase.Dispose();
	gender.Dispose();
	number.Dispose();
	dec.Dispose();
	explanation.clear();
}


void GenitiveCase::ApplyDeclension(const int& _declension) {

	if (dec.GetDeclensionNumber() == 1) {
		genCase.SetSingularEnding("ae");
		genCase.SetSingularEnding_w_Macron('ae');
		genCase.SetPluralEnding("arum");
		genCase.SetPluralEnding_w_Macron(lower_a, (char)'rum');
	}
	else if (dec.GetDeclensionNumber() == 2) {
		genCase.SetSingularEnding("i");
		genCase.SetSingularEnding_w_Macron('i');
		genCase.SetPluralEnding("orum");
		genCase.SetPluralEnding_w_Macron(lower_o, (char)'rum');
	}
	else if (dec.GetDeclensionNumber() == 3) {
		genCase.SetSingularEnding("is");
		genCase.SetSingularEnding_w_Macron('i', 's');
		genCase.SetPluralEnding("um");
		genCase.SetPluralEnding_w_Macron(lower_u, 'm');
	}
	else if (dec.GetDeclensionNumber() == 4) {
		genCase.SetSingularEnding("us");
		genCase.SetSingularEnding_w_Macron('u', 's');
		genCase.SetPluralEnding("uum");
		genCase.SetPluralEnding_w_Macron(lower_u, (char)'um');
	}
	else if (dec.GetDeclensionNumber() == 5) {
		genCase.SetSingularEnding("ei");
		genCase.SetSingularEnding_w_Macron('ei');
		genCase.SetPluralEnding("erum");
		genCase.SetPluralEnding_w_Macron(lower_e, (char)'rum');
	}
	else {
		genCase.SetSingularEnding("ERROR");
		genCase.SetPluralEnding("ERROR");
		genCase.AddToSingularTranslations("ERROR");
		genCase.AddToPluralTranslations("ERROR");
	}

	genCase.AddToSingularTranslations("of the");
	genCase.AddToSingularTranslations("of a");
	genCase.AddToSingularTranslations("the __'s");

	genCase.AddToSingularTranslations("a __'s");
	genCase.AddToPluralTranslations("of the");
	genCase.AddToPluralTranslations("__'s");

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