#include "AblativeCase.h"

AblativeCase::AblativeCase()
{
	dec = Declension();
	ablCase = Case();
	ApplyDeclension(dec.GetDeclensionNumber());
}

//Constructor
AblativeCase::AblativeCase(int declension) {
	dec = Declension(declension);
	ablCase = Case();
	ApplyDeclension(dec.GetDeclensionNumber());
}

AblativeCase::~AblativeCase()
{
	Dispose();
}

void AblativeCase::Dispose()
{
	ablCase.Dispose();
	gender.Dispose();
	number.Dispose();
	dec.Dispose();
	explanation.clear();
}

void AblativeCase::ApplyDeclension(const int& _declension) {

	if (dec.GetDeclensionNumber() == 1) {
		ablCase.SetSingularEnding("a");
		ablCase.SetSingularEnding_w_Macron(lower_a);
		ablCase.SetPluralEnding("is");
		ablCase.SetPluralEnding_w_Macron(lower_i, 's');
	}
	else if (dec.GetDeclensionNumber() == 2) {
		ablCase.SetSingularEnding("o");
		ablCase.SetSingularEnding_w_Macron(lower_o);
		ablCase.SetPluralEnding("is");
		ablCase.SetPluralEnding_w_Macron(lower_i, 's');
	}
	else if (dec.GetDeclensionNumber() == 3) {
		ablCase.SetSingularEnding("e");
		ablCase.SetSingularEnding_w_Macron(lower_e);
		ablCase.SetPluralEnding("ibus");
		ablCase.SetPluralEnding_w_Macron(lower_i, 'bus');
	}
	else if (dec.GetDeclensionNumber() == 4) {
		ablCase.SetSingularEnding("u");
		ablCase.SetSingularEnding_w_Macron(lower_u);
		ablCase.SetPluralEnding("ibus");
		ablCase.SetPluralEnding_w_Macron(lower_i, 'bus');
	}
	else if (dec.GetDeclensionNumber() == 5) {
		ablCase.SetSingularEnding("e");
		ablCase.SetSingularEnding_w_Macron(lower_e);
		ablCase.SetPluralEnding("ebus");
		ablCase.SetPluralEnding_w_Macron(lower_e, 'bus');
	}
	else {
		ablCase.SetSingularEnding("ERROR");
		ablCase.SetPluralEnding("ERROR");
		ablCase.AddToSingularTranslations("ERROR");
		ablCase.AddToPluralTranslations("ERROR");
	}

	ablCase.AddToSingularTranslations("by the");
	ablCase.AddToSingularTranslations("by a");
	ablCase.AddToSingularTranslations("with a");
	ablCase.AddToSingularTranslations("with the");
	ablCase.AddToSingularTranslations("from a");
	ablCase.AddToSingularTranslations("from the");

	ablCase.AddToPluralTranslations("by the");
	ablCase.AddToPluralTranslations("with the");
	ablCase.AddToPluralTranslations("from the");

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

std::string AblativeCase::SingularEnding() const
{
	return ablCase.SingularEnding();
}

int AblativeCase::SingularEndingLength() const
{
	return ablCase.SingularEnding().length();
}

std::string AblativeCase::PluralEnding() const
{
	return ablCase.PluralEnding();
}

int AblativeCase::PluralEndingLength() const
{
	return ablCase.PluralEnding().length();
}
