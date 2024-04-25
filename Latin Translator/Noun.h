#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

namespace Macrons {
	char32_t lower_a = '\u0101';
	char32_t upper_A = '\u0100';

	char32_t lower_e = '\u0113';
	char32_t upper_E = '\u0112';

	char32_t lower_i = '\u012B';
	char32_t upper_I = '\u012A';

	char32_t lower_o = '\u014D';
	char32_t upper_O = '\u014C';

	char32_t lower_u = '\u016B';
	char32_t upper_U = '\u016A';
}

#define FIR_ENDS


#define SEC_ENDS

#define THI_ENDS

#define FRT_ENDS

#define FIF_ENDS

struct Case {
public:
	// Constructor
	Case() {}

	// Getters
	std::string SingularEnding() const {
		return singularEnding;
	}
	std::string SingularEnding_w_Macron() const {

	}
	std::string PluralEnding() const {
		return pluralEnding;
	}
	std::string PluralEnding_w_Macron() const {

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
	void SetSingularEnding_w_Macron() {

	}
	void SetPluralEnding(const char thing) {
		pluralEnding = thing;
	}
	void SetPluralEnding_w_Macron() {

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

	// Add four more translations for sing and plural

	std::string singularEnding = "";
	std::string singularEnding_w_macron = "";
	std::string pluralEnding = "";
	std::string pluralEnding_w_macron = "";
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

struct Declension {
	bool first;
	bool second;
	bool third;
	bool fourth;
	bool fifth;
	std::string declension = "";
	Case Nom;
	Case Gen;
	Case Dat;
	Case Acc;
	Case Abl;
	Case Voc;

	Declension() : Nom(), Gen(), Dat(), Acc(), Abl(), Voc(), first(false),
		second(false), third(false), fourth(false), fifth(false)
	{	}

	void SetFirst() {
		first = true;
		second = false;
		third = false;
		fourth = false;
		fifth = false;
		Apply();
	}

	void SetSecond() {
		first = false;
		second = true;
		third = false;
		fourth = false;
		fifth = false;
		Apply();
	}
	void SetThird() {
		first = false;
		second = false;
		third = true;
		fourth = false;
		fifth = false;
		Apply();
	}
	void SetFourth() {
		first = false;
		second = false;
		third = false;
		fourth = true;
		fifth = false;
		Apply();
	}
	void SetFifth() {
		first = false;
		second = false;
		third = false;
		fourth = false;
		fifth = true;
		Apply();
	}
	void Apply() {
		SetDeclension();
		SetEndings(declension);
	}

	void SetDeclension() const {
		std::string answer = "00000";
		answer[0] = first;
		answer[1] = second;
		answer[2] = third;
		answer[3] = fourth;
		answer[4] = fifth;
		int x = std::stoi(answer);
		if (x == 10000) {
			std::string answer = "First";
			declension == answer;
		}
		else if (x == 1000){
			std::string answer = "Second";
			declension == answer;
		}
		else if (x == 100) {
			std::string answer = "Third";
			declension == answer;
		}
		else if (x == 10) {
			std::string answer = "Fourth";
			declension == answer;
		}
		else if (x == 1) {
			std::string answer = "Fifth";
			declension == answer;
		}
		else
		{
			std::string answer = "ERROR";
			declension == answer;
		}
	}

	void SetEndings(std::string _declension) {

		if (declension == "First") {
			Nom.SetSingularEnding('a');
			Nom.SetSingularEnding_w_Macron('a');
			Nom.SetPluralEnding('ae');
			Nom.SetPluralEnding_w_Macron('ae');
			Nom.SetSingularTranslation1("the");
			Nom.SetSingularTranslation2("a");
			Nom.SetPluralTranslation1("the");
			Nom.SetPluralTranslation2("s");
			Nom.SetExplanation("This case has two distinct uses:\n1.)The Subject of a verb- When a noun is used in this manner it is typically the person or thing performing the actions in the sentence. 2.) A Predicate Nominative- This typically involves a sentence with two nouns in the Nominative Case, where one is used to provide further information about the other. This grammatical construction typically involves some form of the verb Sum(to be/exist)");

			Gen.SetSingularEnding('ae');
			Gen.SetSingularEnding_w_Macron('ae');
			Gen.SetPluralEnding('arum');
			Gen.SetPluralEnding_w_Macron(Macrons::lower_a + 'rum');
			Gen.SetSingularTranslation1("of the");
			Gen.SetSingularTranslation2("of a");
			Gen.SetSingularTranslation3("the __'s");
			Gen.SetSingularTranslation4("a __'s");
			Gen.SetPluralTranslation1("of the");
			Gen.SetPluralTranslation2("__'s");
			Gen.SetExplanation();

			Dat.SetSingularEnding('ae');
			Dat.SetSingularEnding_w_Macron('ae');
			Dat.SetPluralEnding('is');
			Dat.SetPluralEnding_w_Macron(Macrons::lower_i + 's');
			Dat.SetSingularTranslation1("to the");
			Dat.SetSingularTranslation2("for the");
			Dat.SetSingularTranslation3("to a");
			Dat.SetSingularTranslation4("for a");
			Dat.SetSingularTranslation5("to ");
			Dat.SetSingularTranslation6("for");
			Dat.SetPluralTranslation1("to the");
			Dat.SetPluralTranslation2("for the");
			Dat.SetPluralTranslation3("to");
			Dat.SetPluralTranslation4("for");
			Dat.SetExplanation();

			Acc.SetSingularEnding('am');
			Acc.SetSingularEnding_w_Macron(am);
			Acc.SetPluralEnding('as');
			Acc.SetPluralEnding_w_Macron(Macrons::lower_a + 's');
			Acc.SetSingularTranslation1("the");
			Acc.SetSingularTranslation2("a");
			Acc.SetPluralTranslation1("the");
			Acc.SetPluralTranslation2("s");
			Acc.SetExplanation();

			Abl.SetSingularEnding('a');
			Abl.SetSingularEnding_w_Macron(Macrons::lower_a);
			Abl.SetPluralEnding('is');
			Abl.SetPluralEnding_w_Macron(Macrons::lower_i + 's');
			Abl.SetSingularTranslation1("by the");
			Abl.SetSingularTranslation2("by a");
			Abl.SetSingularTranslation3("with a");
			Abl.SetSingularTranslation4("with the");
			Abl.SetSingularTranslation5("from a");
			Abl.SetSingularTranslation6("from the");
			Abl.SetPluralTranslation1("by the");
			Abl.SetPluralTranslation2("with the");
			Abl.SetPluralTranslation3("from the");
			Abl.SetExplanation();

			Voc.SetSingularEnding('a');
			Voc.SetSingularEnding_w_Macron('a');
			Voc.SetPluralEnding('ae');
			Voc.SetPluralEnding_w_Macron('ae');
			Voc.SetSingularTranslation1("oh");
			Voc.SetSingularTranslation2("Oh");
			Voc.SetPluralTranslation1("oh");
			Voc.SetPluralTranslation2("Oh");
			Voc.SetExplanation();
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

};

struct Gender {
	bool masculine;
	bool feminine;
	bool neuter;

	Gender() : masculine(false), feminine(false), neuter(false) {}

	std::string getGender() const {
		if (masculine)
			return "Masculine";
		else if (feminine)
			return "Feminine";
		else if (neuter)
			return "Neuter";
		return "Unknown";
	}
};

class Noun {
private:
	std::string word;
	std::string latinDefinition;
	std::string englishDefinition;
	std::vector<std::string> synonyms;
	Declension declension;
	Gender gender;

public:
	Noun();
	Noun(const std::string& word, const Declension& declension, const std::string& latinDefinition, const std::string& englishDefinition,
		const Gender& gender);

	// Getters and setters
	const char* getWord() const;
	void setWord(const std::string& newWord);

	const Declension& getDeclension() const;
	void setDeclension(const Declension& newDeclension);

	const char* getLatinDefinition() const;
	void setLatinDefinition(const std::string& newLatinDefinition);

	const char* getEnglishDefinition() const;
	void setEnglishDefinition(const std::string& newEnglishDefinition);

	Gender getGender() const;
	void setGender(const Gender& newGender);

	// Display function
	void display() const;

	// Serialize function to write the object to a file
	void serialize(const std::string& filename) const;

	// Deserialize function to read the object from a file
	void deserialize(const std::string& filename);

	// Function to get the base of the noun
	std::string GetBase() const;
};
