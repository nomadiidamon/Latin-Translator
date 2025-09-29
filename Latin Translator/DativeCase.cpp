#include "DativeCase.h"

//Constructor
DativeCase::DativeCase(int declension) {
	dec = Declension(declension);
	datCase = Case();
	ApplyDeclension(dec.GetDeclensionNumber());
}

DativeCase::~DativeCase()
{
	datCase.Dispose();
	gender.Dispose();
	number.Dispose();
	dec.Dispose();
	explanation.clear();
}

void DativeCase::ApplyDeclension(const int& _declension) {

	if (dec.GetDeclensionNumber() == 1) {
		datCase.SetSingularEnding("ae");
		datCase.SetSingularEnding_w_Macron('ae');
		datCase.SetPluralEnding("is");
		datCase.SetPluralEnding_w_Macron(lower_i, 's');
	}
	else if (dec.GetDeclensionNumber() == 2) {
		datCase.SetSingularEnding("o");
		datCase.SetSingularEnding_w_Macron(lower_o);
		datCase.SetPluralEnding("is");
		datCase.SetPluralEnding_w_Macron(lower_i, 's');
	}
	else if (dec.GetDeclensionNumber() == 3) {
		datCase.SetSingularEnding("i");
		datCase.SetSingularEnding_w_Macron(lower_i);
		datCase.SetPluralEnding("ibus");
		datCase.SetPluralEnding_w_Macron(lower_i, 'bus');
	}
	else if (dec.GetDeclensionNumber() == 4) {
		datCase.SetSingularEnding("ui");
		datCase.SetSingularEnding_w_Macron(lower_u, 'i');
		datCase.SetPluralEnding("ibus");
		datCase.SetPluralEnding_w_Macron(lower_i, 'bus');
	}
	else if (dec.GetDeclensionNumber() == 5) {
		datCase.SetSingularEnding("ei");
		datCase.SetSingularEnding_w_Macron(lower_e, 'i');
		datCase.SetPluralEnding("ebus");
		datCase.SetPluralEnding_w_Macron(lower_e, 'bus');
	}
	else {
		datCase.SetSingularEnding("ERROR");
		datCase.SetPluralEnding("ERROR");
		datCase.AddToSingularTranslations("ERROR");
		datCase.AddToPluralTranslations("ERROR");
	}

	datCase.AddToSingularTranslations("to the");
	datCase.AddToSingularTranslations("for the");
	datCase.AddToSingularTranslations("to a");
	datCase.AddToSingularTranslations("for a");
	datCase.AddToSingularTranslations("to ");
	datCase.AddToSingularTranslations("for");

	datCase.AddToPluralTranslations("to the");
	datCase.AddToPluralTranslations("for the");
	datCase.AddToPluralTranslations("to");
	datCase.AddToPluralTranslations("for");

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