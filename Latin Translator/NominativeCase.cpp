#include "NominativeCase.h"
#include "Macrons.h"


NominativeCase::NominativeCase()
{
	dec = Declension();
	ApplyDeclension(dec.GetDeclensionNumber());
}

//Constructor
NominativeCase::NominativeCase(int declension) {
	ApplyDeclension(declension);
}

NominativeCase::~NominativeCase()
{
	Dispose();
}

void NominativeCase::Dispose()
{
	Case::Dispose();
	gender.Dispose();
	number.Dispose();
	dec.Dispose();
	explanation.clear();
}

void NominativeCase::ApplyDeclension(const int& _declension) {
	
	dec = Declension(_declension);
	if (dec.GetDeclensionNumber() == 1) {
		SetSingularEnding("a");
		SetSingularEnding_w_Macron('a');
		SetPluralEnding("ae");
		SetPluralEnding_w_Macron('ae');
	}
	else if (dec.GetDeclensionNumber() == 2) {
		SetSingularEnding("us");
		SetSingularEnding_w_Macron('u', 's');
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

	AddToSingularTranslations_Articles("the");
	AddToSingularTranslations_Articles("a");
	AddToSingularTranslations_Articles("one");

	AddToPluralTranslations_Articles("the");
	AddToPluralTranslations_Articles("some");
	AddToPluralTranslations_Articles("many");

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

