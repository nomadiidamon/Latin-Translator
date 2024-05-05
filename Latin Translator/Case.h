#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

namespace Macrons {
	wchar_t lower_a = L'\u0101';
	wchar_t upper_A = L'\u0100';
	wchar_t lower_e = L'\u0113';
	wchar_t upper_E = L'\u0112';
	wchar_t lower_i = L'\u012B';
	wchar_t upper_I = L'\u012A';
	wchar_t lower_o = L'\u014D';
	wchar_t upper_O = L'\u014C';
	wchar_t lower_u = L'\u016B';
	wchar_t upper_U = L'\u016A';
}

struct Case {
public:
	// Constructor
	Case() {}

	// Getters
	std::string SingularEnding() const {
		return singularEnding;
	}
	std::wstring SingularEnding_w_Macron() const {
		return singularEnding_w_macron;
	}
	std::string PluralEnding() const {
		return pluralEnding;
	}
	std::wstring PluralEnding_w_Macron() const {
		return pluralEnding_w_macron;
	}
	std::string SingularTranslation1() const {
		return singularTranslation1;
	}
	std::string SingularTranslation2() const {
		return singularTranslation2;
	}
	std::string SingularTranslation3() const {
		return singularTranslation3;
	}
	std::string SingularTranslation4() const {
		return singularTranslation4;
	}
	std::string SingularTranslation5() const {
		return singularTranslation5;
	}
	std::string SingularTranslation6() const {
		return singularTranslation6;
	}
	std::string SingularTranslation7() const {
		return singularTranslation7;
	}
	std::string PluralTranslation1() const {
		return pluralTranslation1;
	}
	std::string PluralTranslation2() const {
		return pluralTranslation2;
	}
	std::string PluralTranslation3() const {
		return pluralTranslation3;
	}
	std::string PluralTranslation4() const {
		return pluralTranslation4;
	}
	std::string PluralTranslation5() const {
		return pluralTranslation5;
	}
	std::string PluralTranslation6() const {
		return pluralTranslation6;
	}
	std::string PluralTranslation7() const {
		return pluralTranslation7;
	}
	std::string Explanation() const {
		return explanation;
	}

	// Setters
	void SetSingularEnding(const char thing) {
		singularEnding = thing;
	}
	void SetSingularEnding_w_Macron(wchar_t thing) {
		singularEnding_w_macron = thing;
	}
	void SetPluralEnding(const char thing) {
		pluralEnding = thing;
	}
	void SetPluralEnding_w_Macron(wchar_t thing) {
		pluralEnding_w_macron = thing;
	}
	void SetSingularTranslation1(std::string addition) {
		singularTranslation1 = addition;
	}
	void SetSingularTranslation2(std::string addition) {
		singularTranslation2 = addition;
	}
	void SetSingularTranslation3(std::string addition) {
		singularTranslation3 = addition;
	}
	void SetSingularTranslation4(std::string addition) {
		singularTranslation4 = addition;
	}
	void SetSingularTranslation5(std::string addition) {
		singularTranslation5 = addition;
	}
	void SetSingularTranslation6(std::string addition) {
		singularTranslation6 = addition;
	}
	void SetSingularTranslation7(std::string addition) {
		singularTranslation7 = addition;
	}
	void SetPluralTranslation1(std::string addition) {
		pluralTranslation1 = addition;
	}
	void SetPluralTranslation2(std::string addition) {
		pluralTranslation2 = addition;
	}
	void SetPluralTranslation3(std::string addition) {
		pluralTranslation3 = addition;
	}
	void SetPluralTranslation4(std::string addition) {
		pluralTranslation4 = addition;
	}
	void SetPluralTranslation5(std::string addition) {
		pluralTranslation5 = addition;
	}
	void SetPluralTranslation6(std::string addition) {
		pluralTranslation6 = addition;
	}
	void SetPluralTranslation7(std::string addition) {
		pluralTranslation7 = addition;
	}
	void SetExplanation(std::string info) {
		explanation = info;
	}

private:
	std::string singularEnding = "";
	std::wstring singularEnding_w_macron = L"";
	std::string pluralEnding = "";
	std::wstring pluralEnding_w_macron = L"";
	std::string singularTranslation1 = "";
	std::string singularTranslation2 = "";
	std::string singularTranslation3 = "";
	std::string singularTranslation4 = "";
	std::string singularTranslation5 = "";
	std::string singularTranslation6 = "";
	std::string singularTranslation7 = "";

	std::string pluralTranslation1 = "";
	std::string pluralTranslation2 = "";
	std::string pluralTranslation3 = "";
	std::string pluralTranslation4 = "";
	std::string pluralTranslation5 = "";
	std::string pluralTranslation6 = "";
	std::string pluralTranslation7 = "";

	std::string explanation = "";
};