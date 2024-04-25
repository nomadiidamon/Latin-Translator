#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

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

	}
	std::string SingularEnding_w_Macron() const {

	}
	std::string PluralEnding() const {

	}
	std::string PluralEnding_w_Macron() const {

	}
	std::string SingularTranslation1() const {

	}
	std::string SingularTranslation2() const {

	}
	std::string SingularTranslation3() const {

	}
	std::string SingularTranslation4() const {

	}
	std::string SingularTranslation5() const {

	}
	std::string SingularTranslation6() const {

	}
	std::string SingularTranslation7() const {

	}
	std::string PluralTranslation1() const {

	}
	std::string PluralTranslation2() const {

	}
	std::string PluralTranslation3() const {

	}
	std::string PluralTranslation4() const {

	}
	std::string PluralTranslation5() const {

	}
	std::string PluralTranslation6() const {

	}
	std::string PluralTranslation7() const {

	}
	std::string Explanation() const {

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

	}
	void SetSingularTranslation2(std::string addition) {

	}
	void SetSingularTranslation3(std::string addition) {

	}
	void SetSingularTranslation4(std::string addition) {

	}	
	void SetSingularTranslation5(std::string addition) {

	}	
	void SetSingularTranslation6(std::string addition) {

	}	
	void SetSingularTranslation7(std::string addition) {

	}
	void SetPluralTranslation1(std::string addition) {

	}
	void SetPluralTranslation2(std::string addition) {

	}
	void SetPluralTranslation3(std::string addition) {

	}
	void SetPluralTranslation4(std::string addition) {

	}	
	void SetPluralTranslation5(std::string addition) {

	}
	void SetPluralTranslation6(std::string addition) {

	}
	void SetPluralTranslation7(std::string addition) {

	}
	void SetExplanation() {

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
		if (x == 10000)
			declension._Equal("First");
		else if (x == 1000)
			declension._Equal("Second");
		else if (x == 100)
			declension._Equal("Third");
		else if (x == 10)
			declension._Equal("Fourth");
		else if (x == 1)
			declension._Equal("Fifth");
		else
			declension._Equal("ERROR");
	}

	void SetEndings(std::string _declension) {

		if (declension == "First") {
			Nom.SetSingularEnding('a');
			Nom.SetSingularEnding_w_Macron();
			Nom.SetPluralEnding('ae');
			Nom.SetPluralEnding_w_Macron();
			Nom.SetSingularTranslation1("a");
			Nom.SetSingularTranslation2("an");
			Nom.SetSingularTranslation3("the");
			Nom.SetPluralTranslation1("the");
			Nom.SetPluralTranslation2("");
			Nom.SetPluralTranslation3("");
			Nom.SetExplanation();

			Gen.SetSingularEnding('ae');
			Gen.SetSingularEnding_w_Macron();
			Gen.SetPluralEnding('arum');
			Gen.SetPluralEnding_w_Macron();
			Nom.SetSingularTranslation1("of the");
			Nom.SetSingularTranslation2("of a");
			Nom.SetSingularTranslation3("'s");
			Nom.SetPluralTranslation1("of the");
			Nom.SetPluralTranslation2("'s");
			Nom.SetPluralTranslation3("");
			Gen.SetExplanation();

			Dat.SetSingularEnding('ae');
			Dat.SetSingularEnding_w_Macron();
			Dat.SetPluralEnding('is');
			Dat.SetPluralEnding_w_Macron();
			Nom.SetSingularTranslation1("to the");
			Nom.SetSingularTranslation2("for the");
			Nom.SetSingularTranslation3("to a");
			Nom.SetPluralTranslation1("for the");
			Nom.SetPluralTranslation2("to the");
			Nom.SetPluralTranslation3("");
			Dat.SetExplanation();

			Acc.SetSingularEnding('am');
			Acc.SetSingularEnding_w_Macron();
			Acc.SetPluralEnding();
			Acc.SetPluralEnding_w_Macron();
			Nom.SetSingularTranslation1("A");
			Nom.SetSingularTranslation2("An");
			Nom.SetSingularTranslation3("");
			Nom.SetPluralTranslation1("The");
			Nom.SetPluralTranslation2("");
			Nom.SetPluralTranslation3("");
			Acc.SetExplanation();

			Abl.SetSingularEnding('a');
			Abl.SetSingularEnding_w_Macron();
			Abl.SetPluralEnding();
			Abl.SetPluralEnding_w_Macron();
			Nom.SetSingularTranslation1("A");
			Nom.SetSingularTranslation2("An");
			Nom.SetSingularTranslation3("");
			Nom.SetPluralTranslation1("The");
			Nom.SetPluralTranslation2("");
			Nom.SetPluralTranslation3("");
			Abl.SetExplanation();

			Voc.SetSingularEnding('a');
			Voc.SetSingularEnding_w_Macron();
			Voc.SetPluralEnding();
			Voc.SetPluralEnding_w_Macron();
			Nom.SetSingularTranslation1("A");
			Nom.SetSingularTranslation2("An");
			Nom.SetSingularTranslation3("");
			Nom.SetPluralTranslation1("The");
			Nom.SetPluralTranslation2("");
			Nom.SetPluralTranslation3("");
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
