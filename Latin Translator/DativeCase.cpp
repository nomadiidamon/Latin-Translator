#include "DativeCase.h"

//Constructor
DativeCase::DativeCase() {
	Declension _dec;
	dec = _dec;
	ApplyDeclension(dec.GetDeclension());
}

void DativeCase::ApplyDeclension(std::string _declension) {

	if (dec.GetDeclension() == "First") {
		SetSingularEnding("ae");
		SetSingularEnding_w_Macron('ae');
		SetPluralEnding("is");
		SetPluralEnding_w_Macron(lower_i, 's');
		SetSingularTranslation1("to the");
		SetSingularTranslation2("for the");
		SetSingularTranslation3("to a");
		SetSingularTranslation4("for a");
		SetSingularTranslation5("to ");
		SetSingularTranslation6("for");
		SetPluralTranslation1("to the");
		SetPluralTranslation2("for the");
		SetPluralTranslation3("to");
		SetPluralTranslation4("for");
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
std::string DativeCase::SingularEnding() const {
	return singularEnding;
}
std::wstring DativeCase::SingularEnding_w_Macron() const {
	return singularEnding_w_macron;
}
std::string DativeCase::PluralEnding() const {
	return pluralEnding;
}
std::wstring DativeCase::PluralEnding_w_Macron() const {
	return pluralEnding_w_macron;
}
std::string DativeCase::SingularTranslation1() const {
	return singularTranslation1;
}
std::string DativeCase::SingularTranslation2() const {
	return singularTranslation2;
}
std::string DativeCase::SingularTranslation3() const {
	return singularTranslation3;
}
std::string DativeCase::SingularTranslation4() const {
	return singularTranslation4;
}
std::string DativeCase::SingularTranslation5() const {
	return singularTranslation5;
}
std::string DativeCase::SingularTranslation6() const {
	return singularTranslation6;
}
std::string DativeCase::PluralTranslation1() const {
	return pluralTranslation1;
}
std::string DativeCase::PluralTranslation2() const {
	return pluralTranslation2;
}
std::string DativeCase::PluralTranslation3() const {
	return pluralTranslation3;
}
std::string DativeCase::PluralTranslation4() const {
	return pluralTranslation4;
}
std::string DativeCase::Explanation() const {
	return explanation;
}

//Setters
void DativeCase::SetSingularEnding(const char* thing) {
	singularEnding = thing;
}
void DativeCase::SetSingularEnding_w_Macron(wchar_t thing1, const char thing2) {
	singularEnding_w_macron += thing1;
	singularEnding_w_macron += thing2;
}
void DativeCase::SetSingularEnding_w_Macron(const wchar_t thing) {
	singularEnding_w_macron += thing;
}
void DativeCase::SetPluralEnding(const char* thing) {
	pluralEnding = thing;
}
void DativeCase::SetPluralEnding_w_Macron(wchar_t thing1, const char thing2) {
	pluralEnding_w_macron += thing1;
	pluralEnding_w_macron += thing2;
}
void DativeCase::SetPluralEnding_w_Macron(const wchar_t thing) {
	pluralEnding_w_macron += thing;
}
void DativeCase::SetSingularTranslation1(std::string addition) {
	singularTranslation1 = addition;
}
void DativeCase::SetSingularTranslation2(std::string addition) {
	singularTranslation2 = addition;
}
void DativeCase::SetSingularTranslation3(std::string addition) {
	singularTranslation3 = addition;
}
void DativeCase::SetSingularTranslation4(std::string addition) {
	singularTranslation4 = addition;
}
void DativeCase::SetSingularTranslation5(std::string addition) {
	singularTranslation5 = addition;
}
void DativeCase::SetSingularTranslation6(std::string addition) {
	singularTranslation6 = addition;
}
void DativeCase::SetPluralTranslation1(std::string addition) {
	pluralTranslation1 = addition;
}
void DativeCase::SetPluralTranslation2(std::string addition) {
	pluralTranslation2 = addition;
}
void DativeCase::SetPluralTranslation3(std::string addition) {
	pluralTranslation3 = addition;
}
void DativeCase::SetPluralTranslation4(std::string addition) {
	pluralTranslation4 = addition;
}
void DativeCase::SetExplanation(std::string info) {
	explanation = info;
}