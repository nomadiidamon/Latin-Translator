#include "AblativeCase.h"

//Constructor
AblativeCase::AblativeCase() {
	Declension _dec;
	dec = _dec;
	ApplyDeclension(dec.GetDeclension());
}
void AblativeCase::ApplyDeclension(std::string _declension) {

	if (dec.GetDeclension() == "First") {

		SetSingularEnding("a");
		SetSingularEnding_w_Macron(lower_a);
		SetPluralEnding("is");
		SetPluralEnding_w_Macron(lower_i, 's');
		SetSingularTranslation1("by the");
		SetSingularTranslation2("by a");
		SetSingularTranslation3("with a");
		SetSingularTranslation4("with the");
		SetSingularTranslation5("from a");
		SetSingularTranslation6("from the");
		SetPluralTranslation1("by the");
		SetPluralTranslation2("with the");
		SetPluralTranslation3("from the");
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

std::string AblativeCase::SingularEnding() const {
	return singularEnding;
}
std::wstring AblativeCase::SingularEnding_w_Macron() const {
	return singularEnding_w_macron;
}
std::string AblativeCase::PluralEnding() const {
	return pluralEnding;
}
std::wstring AblativeCase::PluralEnding_w_Macron() const {
	return pluralEnding_w_macron;
}
std::string AblativeCase::SingularTranslation1() const {
	return singularTranslation1;
}
std::string AblativeCase::SingularTranslation2() const {
	return singularTranslation2;
}
std::string AblativeCase::SingularTranslation3() const {
	return singularTranslation3;
}
std::string AblativeCase::SingularTranslation4() const {
	return singularTranslation4;
}
std::string AblativeCase::SingularTranslation5() const {
	return singularTranslation5;
}
std::string AblativeCase::SingularTranslation6() const {
	return singularTranslation6;
}
std::string AblativeCase::PluralTranslation1() const {
	return pluralTranslation1;
}
std::string AblativeCase::PluralTranslation2() const {
	return pluralTranslation2;
}
std::string AblativeCase::PluralTranslation3() const {
	return pluralTranslation3;
}
std::string AblativeCase::PluralTranslation4() const {
	return pluralTranslation4;
}
std::string AblativeCase::PluralTranslation5() const {
	return pluralTranslation5;
}
std::string AblativeCase::PluralTranslation6() const {
	return pluralTranslation6;
}

std::string AblativeCase::Explanation() const {
	return explanation;
}

//Setters
void AblativeCase::SetSingularEnding(const char* thing) {
	singularEnding = thing;
}
void AblativeCase::SetSingularEnding_w_Macron(wchar_t thing1, const char thing2) {
	singularEnding_w_macron += thing1;
	singularEnding_w_macron += thing2;
}
void AblativeCase::SetSingularEnding_w_Macron(const wchar_t thing) {
	singularEnding_w_macron += thing;
}
void AblativeCase::SetPluralEnding(const char* thing) {
	pluralEnding = thing;
}
void AblativeCase::SetPluralEnding_w_Macron(wchar_t thing1, const char thing2) {
	pluralEnding_w_macron += thing1;
	pluralEnding_w_macron += thing2;
}
void AblativeCase::SetPluralEnding_w_Macron(const wchar_t thing) {
	pluralEnding_w_macron += thing;
}
void AblativeCase::SetSingularTranslation1(std::string addition) {
	singularTranslation1 = addition;
}
void AblativeCase::SetSingularTranslation2(std::string addition) {
	singularTranslation2 = addition;
}
void AblativeCase::SetSingularTranslation3(std::string addition) {
	singularTranslation3 = addition;
}
void AblativeCase::SetSingularTranslation4(std::string addition) {
	singularTranslation4 = addition;
}
void AblativeCase::SetSingularTranslation5(std::string addition) {
	singularTranslation5 = addition;
}
void AblativeCase::SetSingularTranslation6(std::string addition) {
	singularTranslation6 = addition;
}
void AblativeCase::SetPluralTranslation1(std::string addition) {
	pluralTranslation1 = addition;
}
void AblativeCase::SetPluralTranslation2(std::string addition) {
	pluralTranslation2 = addition;
}
void AblativeCase::SetPluralTranslation3(std::string addition) {
	pluralTranslation3 = addition;
}
void AblativeCase::SetPluralTranslation4(std::string addition) {
	pluralTranslation4 = addition;
}
void AblativeCase::SetPluralTranslation5(std::string addition) {
	pluralTranslation5 = addition;
}
void AblativeCase::SetPluralTranslation6(std::string addition) {
	pluralTranslation6 = addition;
}
void AblativeCase::SetExplanation(std::string info) {
	explanation = info;
}