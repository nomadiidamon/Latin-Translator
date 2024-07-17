#include "VocativeCase.h"

//Constructor
VocativeCase::VocativeCase() {
	Declension _dec;
	dec = _dec;
	ApplyDeclension(dec.GetDeclension());
}
void VocativeCase::ApplyDeclension(std::string _declension) {

	if (dec.GetDeclension() == "First") {

		SetSingularEnding("a");
		SetSingularEnding_w_Macron('a');
		SetPluralEnding("ae");
		SetPluralEnding_w_Macron('ae');
		SetSingularTranslation1("oh");
		SetSingularTranslation2("Oh");
		SetPluralTranslation1("oh");
		SetPluralTranslation2("Oh");
		SetExplanation("");
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
std::string VocativeCase::SingularEnding() const {
	return singularEnding;
}
std::wstring VocativeCase::SingularEnding_w_Macron() const {
	return singularEnding_w_macron;
}
std::string VocativeCase::PluralEnding() const {
	return pluralEnding;
}
std::wstring VocativeCase::PluralEnding_w_Macron() const {
	return pluralEnding_w_macron;
}
std::string VocativeCase::SingularTranslation1() const {
	return singularTranslation1;
}
std::string VocativeCase::SingularTranslation2() const {
	return singularTranslation2;
}
std::string VocativeCase::PluralTranslation1() const {
	return pluralTranslation1;
}
std::string VocativeCase::PluralTranslation2() const {
	return pluralTranslation2;
}
std::string VocativeCase::Explanation() const {
	return explanation;
}


//Setters
void VocativeCase::SetSingularEnding(const char* thing) {
	singularEnding = thing;
}
void VocativeCase::SetSingularEnding_w_Macron(wchar_t thing1, const char thing2) {
	singularEnding_w_macron += thing1;
	singularEnding_w_macron += thing2;
}
void VocativeCase::SetSingularEnding_w_Macron(const wchar_t thing) {
	singularEnding_w_macron += thing;
}
void VocativeCase::SetPluralEnding(const char* thing) {
	pluralEnding = thing;
}
void VocativeCase::SetPluralEnding_w_Macron(wchar_t thing1, const char thing2) {
	pluralEnding_w_macron += thing1;
	pluralEnding_w_macron += thing2;
}
void VocativeCase::SetPluralEnding_w_Macron(const wchar_t thing) {
	pluralEnding_w_macron += thing;
}
void VocativeCase::SetSingularTranslation1(std::string addition) {
	singularTranslation1 = addition;
}
void VocativeCase::SetSingularTranslation2(std::string addition) {
	singularTranslation2 = addition;
}
void VocativeCase::SetPluralTranslation1(std::string addition) {
	pluralTranslation1 = addition;
}
void VocativeCase::SetPluralTranslation2(std::string addition) {
	pluralTranslation2 = addition;
}
void VocativeCase::SetExplanation(std::string info) {
	explanation = info;
}