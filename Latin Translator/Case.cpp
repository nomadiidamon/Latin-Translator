#include "Case.h"

// Constructor
Case::Case() {}

// Getters
std::string Case::SingularEnding() const {
	return singularEnding;
}
std::wstring Case::SingularEnding_w_Macron() const {
	return singularEnding_w_macron;
}
std::string Case::PluralEnding() const {
	return pluralEnding;
}
std::wstring Case::PluralEnding_w_Macron() const {
	return pluralEnding_w_macron;
}
std::string Case::SingularTranslation1() const {
	return singularTranslation1;
}
std::string Case::SingularTranslation2() const {
	return singularTranslation2;
}
std::string Case::SingularTranslation3() const {
	return singularTranslation3;
}
std::string Case::SingularTranslation4() const {
	return singularTranslation4;
}
std::string Case::SingularTranslation5() const {
	return singularTranslation5;
}
std::string Case::SingularTranslation6() const {
	return singularTranslation6;
}
std::string Case::SingularTranslation7() const {
	return singularTranslation7;
}
std::string Case::PluralTranslation1() const {
	return pluralTranslation1;
}
std::string Case::PluralTranslation2() const {
	return pluralTranslation2;
}
std::string Case::PluralTranslation3() const {
	return pluralTranslation3;
}
std::string Case::PluralTranslation4() const {
	return pluralTranslation4;
}
std::string Case::PluralTranslation5() const {
	return pluralTranslation5;
}
std::string Case::PluralTranslation6() const {
	return pluralTranslation6;
}
std::string Case::PluralTranslation7() const {
	return pluralTranslation7;
}
std::string Case::Explanation() const {
	return explanation;
}

// Setters
void Case::SetSingularEnding(const char* thing) {
	singularEnding = thing;
}
void Case::SetSingularEnding_w_Macron(wchar_t thing1, const char thing2) {
	singularEnding_w_macron += thing1;
	singularEnding_w_macron += thing2;
}
void Case::SetSingularEnding_w_Macron(const wchar_t thing) {
	singularEnding_w_macron += thing;
}
void Case::SetPluralEnding(const char* thing) {
	pluralEnding = thing;
}
void Case::SetPluralEnding_w_Macron(wchar_t thing1, const char thing2) {
	pluralEnding_w_macron += thing1;
	pluralEnding_w_macron += thing2;
}
void Case::SetPluralEnding_w_Macron(const wchar_t thing) {
	pluralEnding_w_macron += thing;
}
void Case::SetSingularTranslation1(std::string addition) {
	singularTranslation1 = addition;
}
void Case::SetSingularTranslation2(std::string addition) {
	singularTranslation2 = addition;
}
void Case::SetSingularTranslation3(std::string addition) {
	singularTranslation3 = addition;
}
void Case::SetSingularTranslation4(std::string addition) {
	singularTranslation4 = addition;
}
void Case::SetSingularTranslation5(std::string addition) {
	singularTranslation5 = addition;
}
void Case::SetSingularTranslation6(std::string addition) {
	singularTranslation6 = addition;
}
void Case::SetSingularTranslation7(std::string addition) {
	singularTranslation7 = addition;
}
void Case::SetPluralTranslation1(std::string addition) {
	pluralTranslation1 = addition;
}
void Case::SetPluralTranslation2(std::string addition) {
	pluralTranslation2 = addition;
}
void Case::SetPluralTranslation3(std::string addition) {
	pluralTranslation3 = addition;
}
void Case::SetPluralTranslation4(std::string addition) {
	pluralTranslation4 = addition;
}
void Case::SetPluralTranslation5(std::string addition) {
	pluralTranslation5 = addition;
}
void Case::SetPluralTranslation6(std::string addition) {
	pluralTranslation6 = addition;
}
void Case::SetPluralTranslation7(std::string addition) {
	pluralTranslation7 = addition;
}
void Case::SetExplanation(std::string info) {
	explanation = info;
}






