#include "VocativeCase.h"

VocativeCase::VocativeCase()
{
	dec = Declension();
	vocCase = Case();
	ApplyDeclension(dec.GetDeclensionNumber());
}

//Constructor
VocativeCase::VocativeCase(int declension) {
	dec = Declension(declension);
	vocCase = Case();
	ApplyDeclension(dec.GetDeclensionNumber());
}

VocativeCase::~VocativeCase()
{
	Dispose();
}

void VocativeCase::Dispose()
{
	vocCase.Dispose();
	gender.Dispose();
	number.Dispose();
	dec.Dispose();
	explanation.clear();
}

void VocativeCase::ApplyDeclension(const int& _declension) {

	if (dec.GetDeclensionNumber() == 1) {
		vocCase.SetSingularEnding("a");
		vocCase.SetSingularEnding_w_Macron('a');
		vocCase.SetPluralEnding("ae");
		vocCase.SetPluralEnding_w_Macron('ae');

	}
	else if (dec.GetDeclensionNumber() == 2) {
		vocCase.SetSingularEnding("e");
		vocCase.SetSingularEnding_w_Macron('e');
		vocCase.SetPluralEnding("i");
		vocCase.SetPluralEnding_w_Macron('i');
	}
	else if (dec.GetDeclensionNumber() == 3) {
		vocCase.SetSingularEnding("");
		//vocCase.SetSingularEnding_w_Macron(L'');
		vocCase.SetPluralEnding("es");
		vocCase.SetPluralEnding_w_Macron(lower_e, 's');
	}
	else if (dec.GetDeclensionNumber() == 4) {
		vocCase.SetSingularEnding("us");
		vocCase.SetSingularEnding_w_Macron('u', 's');
		vocCase.SetPluralEnding("us");
		vocCase.SetPluralEnding_w_Macron('u', 's');
	}
	else if (dec.GetDeclensionNumber() == 5) {
		vocCase.SetSingularEnding("es");
		vocCase.SetSingularEnding_w_Macron('e', 's');
		vocCase.SetPluralEnding("es");
		vocCase.SetPluralEnding_w_Macron('e', 's');
	}
	else {
		vocCase.SetSingularEnding("ERROR");
		vocCase.SetPluralEnding("ERROR");
		vocCase.AddToSingularTranslations("ERROR");
		vocCase.AddToPluralTranslations("ERROR");
	}

	vocCase.AddToSingularTranslations("oh");
	vocCase.AddToSingularTranslations("Oh");

	vocCase.AddToPluralTranslations("oh");
	vocCase.AddToPluralTranslations("Oh");

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

std::string VocativeCase::SingularEnding() const
{
	return vocCase.SingularEnding();
}

int VocativeCase::SingularEndingLength() const
{
	return vocCase.SingularEnding().length();
}

std::string VocativeCase::PluralEnding() const
{
	return vocCase.PluralEnding();
}

int VocativeCase::PluralEndingLength() const
{
	return vocCase.PluralEnding().length();
}
