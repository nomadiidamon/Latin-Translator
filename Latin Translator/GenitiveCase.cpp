#include "GenitiveCase.h"
#include "Macrons.h"

GenitiveCase::GenitiveCase() {
	Declension _dec;
	dec = _dec;
	ApplyDeclension(dec.GetDeclension());
}


void GenitiveCase::ApplyDeclension(std::string _declension) {

	if (dec.GetDeclension() == "First") {

		SetSingularEnding("ae");
		SetSingularEnding_w_Macron('ae');
		SetPluralEnding("arum");
		SetPluralEnding_w_Macron(lower_a, (char)'rum');
		SetSingularTranslation1("of the");
		SetSingularTranslation2("of a");
		SetSingularTranslation3("the __'s");
		SetSingularTranslation4("a __'s");
		SetPluralTranslation1("of the");
		SetPluralTranslation2("__'s");
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

std::string GenitiveCase::SingularEnding() const {
	return singularEnding;
}
std::wstring GenitiveCase::SingularEnding_w_Macron() const {
	return singularEnding_w_macron;
}
std::string GenitiveCase::PluralEnding() const {
	return pluralEnding;
}
std::wstring GenitiveCase::PluralEnding_w_Macron() const {
	return pluralEnding_w_macron;
}
std::string GenitiveCase::SingularTranslation1() const {
	return singularTranslation1;
}
std::string GenitiveCase::SingularTranslation2() const {
	return singularTranslation2;
}
std::string GenitiveCase::SingularTranslation3() const {
	return singularTranslation3;
}
std::string GenitiveCase::SingularTranslation4() const {
	return singularTranslation4;
}
std::string GenitiveCase::PluralTranslation1() const {
	return pluralTranslation1;
}
std::string GenitiveCase::PluralTranslation2() const {
	return pluralTranslation2;
}
std::string GenitiveCase::Explanation() const {
	return explanation;
}

//Setters
void GenitiveCase::SetSingularEnding(const char* thing) {
	singularEnding = thing;
}
void GenitiveCase::SetSingularEnding_w_Macron(wchar_t thing1, const char thing2) {
	singularEnding_w_macron += thing1;
	singularEnding_w_macron += thing2;
}
void GenitiveCase::SetSingularEnding_w_Macron(const wchar_t thing) {
	singularEnding_w_macron += thing;
}
void GenitiveCase::SetPluralEnding(const char* thing) {
	pluralEnding = thing;
}
void GenitiveCase::SetPluralEnding_w_Macron(wchar_t thing1, const char thing2) {
	pluralEnding_w_macron += thing1;
	pluralEnding_w_macron += thing2;
}
void GenitiveCase::SetPluralEnding_w_Macron(const wchar_t thing) {
	pluralEnding_w_macron += thing;
}
void GenitiveCase::SetSingularTranslation1(std::string addition) {
	singularTranslation1 = addition;
}
void GenitiveCase::SetSingularTranslation2(std::string addition) {
	singularTranslation2 = addition;
}
void GenitiveCase::SetSingularTranslation3(std::string addition) {
	singularTranslation3 = addition;
}
void GenitiveCase::SetSingularTranslation4(std::string addition) {
	singularTranslation4 = addition;
}
void GenitiveCase::SetPluralTranslation1(std::string addition) {
	pluralTranslation1 = addition;
}
void GenitiveCase::SetPluralTranslation2(std::string addition) {
	pluralTranslation2 = addition;
}
void GenitiveCase::SetExplanation(std::string info) {
	explanation = info;
}