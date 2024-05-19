#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

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
	void SetSingularEnding(const char* thing) {
		singularEnding = thing;
	}
	void SetSingularEnding_w_Macron(wchar_t thing1, const char thing2) {
		singularEnding_w_macron += thing1;
		singularEnding_w_macron += thing2;
	}
	void SetSingularEnding_w_Macron(const wchar_t thing) {
		singularEnding_w_macron += thing;
	}
	void SetPluralEnding(const char* thing) {
		pluralEnding = thing;
	}
	void SetPluralEnding_w_Macron(wchar_t thing1, const char thing2) {
		pluralEnding_w_macron += thing1;
		pluralEnding_w_macron += thing2;
	}
	void SetPluralEnding_w_Macron(const wchar_t thing) {
		pluralEnding_w_macron += thing;
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


class NominativeCase : public Declension {
private:
	std::string singularEnding = "";
	std::wstring singularEnding_w_macron = L"";
	std::string pluralEnding = "";
	std::wstring pluralEnding_w_macron = L"";
	std::string explanation = "";

	std::string singularTranslation1 = "";
	std::string singularTranslation2 = "";
	std::string pluralTranslation1 = "";
	std::string pluralTranslation2 = "";
	Declension dec;
public:
	//Constructor
	NominativeCase() {
		ApplyDeclension(dec.GetDeclension());
	}

	void ApplyDeclension(std::string _declension) {

		if (declension == "First") {
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
		else if (declension == "Second") {

		}
		else if (declension == "Third") {

		}
		else if (declension == "Fourth") {

		}
		else if (declension == "Fifth") {

		}
		else {

		}

	}

	//Getters

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
	std::string PluralTranslation1() const {
		return pluralTranslation1;
	}
	std::string PluralTranslation2() const {
		return pluralTranslation2;
	}
	std::string Explanation() const {
		return explanation;
	}
	//Setters
	void SetSingularEnding(const char* thing) {
		singularEnding = thing;
	}
	void SetSingularEnding_w_Macron(wchar_t thing1, const char thing2) {
		singularEnding_w_macron += thing1;
		singularEnding_w_macron += thing2;
	}
	void SetSingularEnding_w_Macron(const wchar_t thing) {
		singularEnding_w_macron += thing;
	}
	void SetPluralEnding(const char* thing) {
		pluralEnding = thing;
	}
	void SetPluralEnding_w_Macron(wchar_t thing1, const char thing2) {
		pluralEnding_w_macron += thing1;
		pluralEnding_w_macron += thing2;
	}
	void SetPluralEnding_w_Macron(const wchar_t thing) {
		pluralEnding_w_macron += thing;
	}
	void SetSingularTranslation1(std::string addition) {
		singularTranslation1 = addition;
	}
	void SetSingularTranslation2(std::string addition) {
		singularTranslation2 = addition;
	}
	void SetPluralTranslation1(std::string addition) {
		pluralTranslation1 = addition;
	}
	void SetPluralTranslation2(std::string addition) {
		pluralTranslation2 = addition;
	}
	void SetExplanation(std::string info) {
		explanation = info;
	}
};

class GenitiveCase : public Declension {
private:
	std::string singularEnding = "";
	std::wstring singularEnding_w_macron = L"";
	std::string pluralEnding = "";
	std::wstring pluralEnding_w_macron = L"";
	std::string explanation = "";
	std::string singularTranslation1 = "";
	std::string singularTranslation2 = "";
	std::string singularTranslation3 = "";
	std::string singularTranslation4 = "";
	std::string pluralTranslation1 = "";
	std::string pluralTranslation2 = "";
	Declension dec;
public:
	//Constructor
	GenitiveCase() {
		ApplyDeclension(dec.GetDeclension());
	}

	void ApplyDeclension(std::string _declension) {

		if (declension == "First") {
			
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
		else if (declension == "Second") {

		}
		else if (declension == "Third") {

		}
		else if (declension == "Fourth") {

		}
		else if (declension == "Fifth") {

		}
		else {

		}

	}

	//Getters

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
	std::string PluralTranslation1() const {
		return pluralTranslation1;
	}
	std::string PluralTranslation2() const {
		return pluralTranslation2;
	}
	std::string Explanation() const {
		return explanation;
	}
	//Setters
	void SetSingularEnding(const char* thing) {
		singularEnding = thing;
	}
	void SetSingularEnding_w_Macron(wchar_t thing1, const char thing2) {
		singularEnding_w_macron += thing1;
		singularEnding_w_macron += thing2;
	}
	void SetSingularEnding_w_Macron(const wchar_t thing) {
		singularEnding_w_macron += thing;
	}
	void SetPluralEnding(const char* thing) {
		pluralEnding = thing;
	}
	void SetPluralEnding_w_Macron(wchar_t thing1, const char thing2) {
		pluralEnding_w_macron += thing1;
		pluralEnding_w_macron += thing2;
	}
	void SetPluralEnding_w_Macron(const wchar_t thing) {
		pluralEnding_w_macron += thing;
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
	void SetPluralTranslation1(std::string addition) {
		pluralTranslation1 = addition;
	}
	void SetPluralTranslation2(std::string addition) {
		pluralTranslation2 = addition;
	}
	void SetExplanation(std::string info) {
		explanation = info;
	}

};

class DativeCase : public Declension{
private:
	std::string singularEnding = "";
	std::wstring singularEnding_w_macron = L"";
	std::string pluralEnding = "";
	std::wstring pluralEnding_w_macron = L"";
	std::string explanation = "";
	std::string singularTranslation1 = "";
	std::string singularTranslation2 = "";
	std::string singularTranslation3 = "";
	std::string singularTranslation4 = "";
	std::string singularTranslation5 = "";
	std::string singularTranslation6 = "";
	std::string pluralTranslation1 = "";
	std::string pluralTranslation2 = "";
	std::string pluralTranslation3 = "";
	std::string pluralTranslation4 = "";
	Declension dec;
public:
	//Constructor
	DativeCase() {
		ApplyDeclension(dec.GetDeclension());
	}
	void ApplyDeclension(std::string _declension) {

		if (declension == "First") {

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
		else if (declension == "Second") {

		}
		else if (declension == "Third") {

		}
		else if (declension == "Fourth") {

		}
		else if (declension == "Fifth") {

		}
		else {

		}

	}
	//Getters

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

	std::string Explanation() const {
		return explanation;
	}
	//Setters
	void SetSingularEnding(const char* thing) {
		singularEnding = thing;
	}
	void SetSingularEnding_w_Macron(wchar_t thing1, const char thing2) {
		singularEnding_w_macron += thing1;
		singularEnding_w_macron += thing2;
	}
	void SetSingularEnding_w_Macron(const wchar_t thing) {
		singularEnding_w_macron += thing;
	}
	void SetPluralEnding(const char* thing) {
		pluralEnding = thing;
	}
	void SetPluralEnding_w_Macron(wchar_t thing1, const char thing2) {
		pluralEnding_w_macron += thing1;
		pluralEnding_w_macron += thing2;
	}
	void SetPluralEnding_w_Macron(const wchar_t thing) {
		pluralEnding_w_macron += thing;
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
	void SetExplanation(std::string info) {
		explanation = info;
	}
};


class AccusativeCase : public Declension{
private:
	std::string singularEnding = "";
	std::wstring singularEnding_w_macron = L"";
	std::string pluralEnding = "";
	std::wstring pluralEnding_w_macron = L"";
	std::string explanation = "";
	std::string singularTranslation1 = "";
	std::string singularTranslation2 = "";
	std::string pluralTranslation1 = "";
	std::string pluralTranslation2 = "";

	Declension dec;
public:
	//Constructor
	AccusativeCase() {
		ApplyDeclension(dec.GetDeclension());
	}
	void ApplyDeclension(std::string _declension) {

		if (declension == "First") {
			

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
		else if (declension == "Second") {

		}
		else if (declension == "Third") {

		}
		else if (declension == "Fourth") {

		}
		else if (declension == "Fifth") {

		}
		else {

		}

	}
	//Getters

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
	std::string PluralTranslation1() const {
		return pluralTranslation1;
	}
	std::string PluralTranslation2() const {
		return pluralTranslation2;
	}
	std::string Explanation() const {
		return explanation;
	}
	//Setters
	void SetSingularEnding(const char* thing) {
		singularEnding = thing;
	}
	void SetSingularEnding_w_Macron(wchar_t thing1, const char thing2) {
		singularEnding_w_macron += thing1;
		singularEnding_w_macron += thing2;
	}
	void SetSingularEnding_w_Macron(const wchar_t thing) {
		singularEnding_w_macron += thing;
	}
	void SetPluralEnding(const char* thing) {
		pluralEnding = thing;
	}
	void SetPluralEnding_w_Macron(wchar_t thing1, const char thing2) {
		pluralEnding_w_macron += thing1;
		pluralEnding_w_macron += thing2;
	}
	void SetPluralEnding_w_Macron(const wchar_t thing) {
		pluralEnding_w_macron += thing;
	}
	void SetSingularTranslation1(std::string addition) {
		singularTranslation1 = addition;
	}
	void SetSingularTranslation2(std::string addition) {
		singularTranslation2 = addition;
	}
	void SetPluralTranslation1(std::string addition) {
		pluralTranslation1 = addition;
	}
	void SetPluralTranslation2(std::string addition) {
		pluralTranslation2 = addition;
	}
	void SetExplanation(std::string info) {
		explanation = info;
	}

};

class AblativeCase : Declension{
private:
	std::string singularEnding = "";
	std::wstring singularEnding_w_macron = L"";
	std::string pluralEnding = "";
	std::wstring pluralEnding_w_macron = L"";
	std::string explanation = "";
	std::string singularTranslation1 = "";
	std::string singularTranslation2 = "";
	std::string singularTranslation3 = "";
	std::string singularTranslation4 = "";
	std::string singularTranslation5 = "";
	std::string singularTranslation6 = "";
	std::string pluralTranslation1 = "";
	std::string pluralTranslation2 = "";
	std::string pluralTranslation3 = "";
	std::string pluralTranslation4 = "";
	std::string pluralTranslation5 = "";
	std::string pluralTranslation6 = "";

	Declension dec;
public:
	//Constructor
	AblativeCase() {
		ApplyDeclension(dec.GetDeclension());
	}
	void ApplyDeclension(std::string _declension) {

		if (declension == "First") {
			
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
		else if (declension == "Second") {

		}
		else if (declension == "Third") {

		}
		else if (declension == "Fourth") {

		}
		else if (declension == "Fifth") {

		}
		else {

		}

	}
	//Getters

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

	std::string Explanation() const {
		return explanation;
	}
	//Setters
	void SetSingularEnding(const char* thing) {
		singularEnding = thing;
	}
	void SetSingularEnding_w_Macron(wchar_t thing1, const char thing2) {
		singularEnding_w_macron += thing1;
		singularEnding_w_macron += thing2;
	}
	void SetSingularEnding_w_Macron(const wchar_t thing) {
		singularEnding_w_macron += thing;
	}
	void SetPluralEnding(const char* thing) {
		pluralEnding = thing;
	}
	void SetPluralEnding_w_Macron(wchar_t thing1, const char thing2) {
		pluralEnding_w_macron += thing1;
		pluralEnding_w_macron += thing2;
	}
	void SetPluralEnding_w_Macron(const wchar_t thing) {
		pluralEnding_w_macron += thing;
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
	void SetExplanation(std::string info) {
		explanation = info;
	}
};

class VocativeCase : Declension{
private:
	std::string singularEnding = "";
	std::wstring singularEnding_w_macron = L"";
	std::string pluralEnding = "";
	std::wstring pluralEnding_w_macron = L"";
	std::string explanation = "";
	std::string singularTranslation1 = "";
	std::string singularTranslation2 = "";
	std::string pluralTranslation1 = "";
	std::string pluralTranslation2 = "";

	Declension dec;
public:
	//Constructor
	VocativeCase() {
		ApplyDeclension(dec.GetDeclension());
	}
	void ApplyDeclension(std::string _declension) {

		if (declension == "First") {
			
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
		else if (declension == "Second") {

		}
		else if (declension == "Third") {

		}
		else if (declension == "Fourth") {

		}
		else if (declension == "Fifth") {

		}
		else {

		}

	}
	//Getters

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
	std::string PluralTranslation1() const {
		return pluralTranslation1;
	}
	std::string PluralTranslation2() const {
		return pluralTranslation2;
	}
	std::string Explanation() const {
		return explanation;
	}
	//Setters
	void SetSingularEnding(const char* thing) {
		singularEnding = thing;
	}
	void SetSingularEnding_w_Macron(wchar_t thing1, const char thing2) {
		singularEnding_w_macron += thing1;
		singularEnding_w_macron += thing2;
	}
	void SetSingularEnding_w_Macron(const wchar_t thing) {
		singularEnding_w_macron += thing;
	}
	void SetPluralEnding(const char* thing) {
		pluralEnding = thing;
	}
	void SetPluralEnding_w_Macron(wchar_t thing1, const char thing2) {
		pluralEnding_w_macron += thing1;
		pluralEnding_w_macron += thing2;
	}
	void SetPluralEnding_w_Macron(const wchar_t thing) {
		pluralEnding_w_macron += thing;
	}
	void SetSingularTranslation1(std::string addition) {
		singularTranslation1 = addition;
	}
	void SetSingularTranslation2(std::string addition) {
		singularTranslation2 = addition;
	}
	void SetPluralTranslation1(std::string addition) {
		pluralTranslation1 = addition;
	}
	void SetPluralTranslation2(std::string addition) {
		pluralTranslation2 = addition;
	}
	void SetExplanation(std::string info) {
		explanation = info;
	}

};
