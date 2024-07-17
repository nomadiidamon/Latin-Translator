#include "NominativeCase.h"
#include "Macrons.h"

//Constructor
NominativeCase::NominativeCase() {
	Declension _dec;
	dec = _dec;
	ApplyDeclension(dec.GetDeclension());
}

void NominativeCase::ApplyDeclension(const std::string& _declension) {

	if (dec.GetDeclension() == "First") {
		SetSingularEnding("a");
		SetSingularEnding_w_Macron('a');
		SetPluralEnding("ae");
		SetPluralEnding_w_Macron('ae');
		SetSingularTranslation1("the");
		SetSingularTranslation2("a");
		SetPluralTranslation1("the");
		SetPluralTranslation2("s");
		SetExplanation("This case has two distinct uses:\n1.)The Subject of a verb- When a noun is used in this manner it is typically the person or thing performing the actions in the sentence.\n2.) A Predicate Nominative- This typically involves a sentence with two nouns in the Nominative Case, where one is used to provide further information about the other. This grammatical construction typically involves some form of the verb Sum(to be/exist)");

	}
	else if (dec.GetDeclension() == "Second") {

	}
	else if (dec.GetDeclension() == "Third") {

	}
	else if (dec.GetDeclension() == "Fourth") {

	}
	else if (dec.GetDeclension() == "Fifth") {

	}
	else {

	}

}

//Getters

std::string NominativeCase::SingularEnding() const {
	return singularEnding;
}
std::wstring NominativeCase::SingularEnding_w_Macron() const {
	return singularEnding_w_macron;
}
std::string NominativeCase::PluralEnding() const {
	return pluralEnding;
}
std::wstring NominativeCase::PluralEnding_w_Macron() const {
	return pluralEnding_w_macron;
}
std::string NominativeCase::SingularTranslation1() const {
	return singularTranslation1;
}
std::string NominativeCase::SingularTranslation2() const {
	return singularTranslation2;
}
std::string NominativeCase::PluralTranslation1() const {
	return pluralTranslation1;
}
std::string NominativeCase::PluralTranslation2() const {
	return pluralTranslation2;
}
std::string NominativeCase::Explanation() const {
	return explanation;
}


//Setters
void NominativeCase::SetSingularEnding(const char* thing) {
	singularEnding = thing;
}
void NominativeCase::SetSingularEnding_w_Macron(wchar_t thing1, const char thing2) {
	singularEnding_w_macron += thing1;
	singularEnding_w_macron += thing2;
}
void NominativeCase::SetSingularEnding_w_Macron(const wchar_t thing) {
	singularEnding_w_macron += thing;
}
void NominativeCase::SetPluralEnding(const char* thing) {
	pluralEnding = thing;
}
void NominativeCase::SetPluralEnding_w_Macron(wchar_t thing1, const char thing2) {
	pluralEnding_w_macron += thing1;
	pluralEnding_w_macron += thing2;
}
void NominativeCase::SetPluralEnding_w_Macron(const wchar_t thing) {
	pluralEnding_w_macron += thing;
}
void NominativeCase::SetSingularTranslation1(std::string addition) {
	singularTranslation1 = addition;
}
void NominativeCase::SetSingularTranslation2(std::string addition) {
	singularTranslation2 = addition;
}
void NominativeCase::SetPluralTranslation1(std::string addition) {
	pluralTranslation1 = addition;
}
void NominativeCase::SetPluralTranslation2(std::string addition) {
	pluralTranslation2 = addition;
}
void NominativeCase::SetExplanation(std::string info) {
	explanation = info;
}