#include "AccusativeCase.h"


//Constructor
AccusativeCase::AccusativeCase() {
	Declension _dec;
	dec = _dec;
	ApplyDeclension(dec.GetDeclension());
}
void AccusativeCase::ApplyDeclension(std::string _declension) {

	if (dec.GetDeclension() == "First") {


		SetSingularEnding("am");
		SetSingularEnding_w_Macron('am');
		SetPluralEnding("as");
		SetPluralEnding_w_Macron(lower_a, 's');
		SetSingularTranslation1("the");
		SetSingularTranslation2("a");
		SetPluralTranslation1("the");
		SetPluralTranslation2("s");
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
std::string AccusativeCase::SingularEnding() const {
	return singularEnding;
}
std::wstring AccusativeCase::SingularEnding_w_Macron() const {
	return singularEnding_w_macron;
}
std::string AccusativeCase::PluralEnding() const {
	return pluralEnding;
}
std::wstring AccusativeCase::PluralEnding_w_Macron() const {
	return pluralEnding_w_macron;
}
std::string AccusativeCase::SingularTranslation1() const {
	return singularTranslation1;
}
std::string AccusativeCase::SingularTranslation2() const {
	return singularTranslation2;
}
std::string AccusativeCase::PluralTranslation1() const {
	return pluralTranslation1;
}
std::string AccusativeCase::PluralTranslation2() const {
	return pluralTranslation2;
}
std::string AccusativeCase::Explanation() const {
	return explanation;
}

//Setters
void AccusativeCase::SetSingularEnding(const char* thing) {
	singularEnding = thing;
}
void AccusativeCase::SetSingularEnding_w_Macron(wchar_t thing1, const char thing2) {
	singularEnding_w_macron += thing1;
	singularEnding_w_macron += thing2;
}
void AccusativeCase::SetSingularEnding_w_Macron(const wchar_t thing) {
	singularEnding_w_macron += thing;
}
void AccusativeCase::SetPluralEnding(const char* thing) {
	pluralEnding = thing;
}
void AccusativeCase::SetPluralEnding_w_Macron(wchar_t thing1, const char thing2) {
	pluralEnding_w_macron += thing1;
	pluralEnding_w_macron += thing2;
}
void AccusativeCase::SetPluralEnding_w_Macron(const wchar_t thing) {
	pluralEnding_w_macron += thing;
}
void AccusativeCase::SetSingularTranslation1(std::string addition) {
	singularTranslation1 = addition;
}
void AccusativeCase::SetSingularTranslation2(std::string addition) {
	singularTranslation2 = addition;
}
void AccusativeCase::SetPluralTranslation1(std::string addition) {
	pluralTranslation1 = addition;
}
void AccusativeCase::SetPluralTranslation2(std::string addition) {
	pluralTranslation2 = addition;
}
void AccusativeCase::SetExplanation(std::string info) {
	explanation = info;
}