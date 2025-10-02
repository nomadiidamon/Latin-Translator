#include "NominativeCase.h"
#include "Macrons.h"


NominativeCase::NominativeCase()
{
	dec = Declension();
	nomCase = Case();
	ApplyDeclension(dec.GetDeclensionNumber());
}

//Constructor
NominativeCase::NominativeCase(int declension) {
	nomCase = Case();
	ApplyDeclension(declension);
}

NominativeCase::~NominativeCase()
{
	Dispose();
}

void NominativeCase::Dispose()
{
	nomCase.Dispose();
	gender.Dispose();
	number.Dispose();
	dec.Dispose();
	explanation.clear();
}

void NominativeCase::ApplyDeclension(const int& _declension) {
	
	dec = Declension(_declension);
	if (dec.GetDeclensionNumber() == 1) {
		nomCase.SetSingularEnding("a");
		nomCase.SetSingularEnding_w_Macron('a');
		nomCase.SetPluralEnding("ae");
		nomCase.SetPluralEnding_w_Macron('ae');
	}
	else if (dec.GetDeclensionNumber() == 2) {
		nomCase.SetSingularEnding("us");
		nomCase.SetSingularEnding_w_Macron('u', 's');
		nomCase.SetPluralEnding("i");
		nomCase.SetPluralEnding_w_Macron('i');
	}
	else if (dec.GetDeclensionNumber() == 3) {
		nomCase.SetSingularEnding("");
		//nomCase.SetSingularEnding_w_Macron(L'');
		nomCase.SetPluralEnding("es");
		nomCase.SetPluralEnding_w_Macron(lower_e, 's');
	}
	else if (dec.GetDeclensionNumber() == 4) {
		nomCase.SetSingularEnding("us");
		nomCase.SetSingularEnding_w_Macron('u', 's');
		nomCase.SetPluralEnding("us");
		nomCase.SetPluralEnding_w_Macron('u', 's');
	}
	else if (dec.GetDeclensionNumber() == 5) {
		nomCase.SetSingularEnding("es");
		nomCase.SetSingularEnding_w_Macron('e', 's');
		nomCase.SetPluralEnding("es");
		nomCase.SetPluralEnding_w_Macron('e', 's');
	}
	else {
		nomCase.SetSingularEnding("ERROR");
		nomCase.SetPluralEnding("ERROR");
		nomCase.AddToSingularTranslations("ERROR");
		nomCase.AddToPluralTranslations("ERROR");
	}

	nomCase.AddToSingularTranslations("the");
	nomCase.AddToSingularTranslations("a");
	nomCase.AddToSingularTranslations("one");

	nomCase.AddToPluralTranslations("the");
	nomCase.AddToPluralTranslations("some");
	nomCase.AddToPluralTranslations("many");

	SetExplanation("This case has two distinct uses:\n1.)The Subject of a verb- When a noun is used in this manner it is typically the person or thing performing the actions in the sentence.\n2.) A Predicate Nominative- This typically involves a sentence with two nouns in the Nominative Case, where one is used to provide further information about the other. This grammatical construction typically involves some form of the verb Sum(to be/exist)");
}

// Getters
std::string NominativeCase::Explanation() const {
	return explanation;
}


// Setters
void NominativeCase::SetExplanation(std::string info) {
	explanation = info;
}

std::string NominativeCase::SingularEnding()
{
	return nomCase.SingularEnding();
}

int NominativeCase::SingularEndingLength()
{
	return nomCase.SingularEnding().length();
}

std::string NominativeCase::PluralEnding()
{
	return nomCase.PluralEnding();
}

int NominativeCase::PluralEndingLength()
{
	return nomCase.PluralEnding().length();
}

std::vector<std::string> NominativeCase::SingularTranslation(std::string base)
{
	return std::vector<std::string>();
}

std::vector<std::string> NominativeCase::PluralTranslation(std::string base)
{
	return std::vector<std::string>();
}
