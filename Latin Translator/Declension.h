#pragma once
#include "Case.h"
#include "Macrons.h"

#define FIR_ENDS

#define SEC_ENDS

#define THI_ENDS

#define FRT_ENDS

#define FIF_ENDS

struct Declension {
	bool first;
	bool second;
	bool third;
	bool fourth;
	bool fifth;
	std::string declension;
	Case Nom;
	Case Gen;
	Case Dat;
	Case Acc;
	Case Abl;
	Case Voc;

	Declension() : Nom(), Gen(), Dat(), Acc(), Abl(), Voc(), first(false),
		second(false), third(false), fourth(false), fifth(false)
	{	}

	Declension(std::string _declension)
		: Nom(), Gen(), Dat(), Acc(), Abl(), Voc(), first(false),
		second(false), third(false), fourth(false), fifth(false), declension(_declension)
	{
		if (_declension == "First" || _declension == "first" || _declension == "1") {
			declension = _declension;
			SetFirst();
		}
		else if (_declension == "Second" || _declension == "second" || _declension == "2") {
			declension = _declension;
			SetSecond();
		}
		else if (_declension == "Third" || _declension == "third" || _declension == "3") {
			declension = _declension;
			SetThird();
		}
		else if (_declension == "Fourth" || _declension == "fourth" || _declension == "4") {
			declension = _declension;
			SetFourth();
		}
		else if (_declension == "Fifth" || _declension == "fifth" || _declension == "5") {
			declension = _declension;
			SetFifth();
		}
		else {
			declension = "ERROR";
		}
	}

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

	void SetDeclension() {
		if (first) {
			declension = "First";
		}
		else if (second) {
			declension = "Second";
		}
		else if (third) {
			declension = "Third";
		}
		else if (fourth) {
			declension = "Fourth";
		}
		else if (fifth) {
			declension = "Fifth";
		}
		else
		{
			declension = "ERROR";
		}
	}

	std::string GetDeclension() const {
		return declension;
	}

	void SetEndings(std::string _declension) {

		if (declension == "First") {
			Nom.SetSingularEnding("a");
			Nom.SetSingularEnding_w_Macron('a');
			Nom.SetPluralEnding("ae");
			Nom.SetPluralEnding_w_Macron('ae');
			Nom.SetSingularTranslation1("the");
			Nom.SetSingularTranslation2("a");
			Nom.SetPluralTranslation1("the");
			Nom.SetPluralTranslation2("s");
			Nom.SetExplanation("This case has two distinct uses:\n1.)The Subject of a verb- When a noun is used in this manner it is typically the person or thing performing the actions in the sentence.\n2.) A Predicate Nominative- This typically involves a sentence with two nouns in the Nominative Case, where one is used to provide further information about the other. This grammatical construction typically involves some form of the verb Sum(to be/exist)");

			Gen.SetSingularEnding("ae");
			Gen.SetSingularEnding_w_Macron('ae');
			Gen.SetPluralEnding("arum");
			Gen.SetPluralEnding_w_Macron(lower_a, (char)'rum');
			Gen.SetSingularTranslation1("of the");
			Gen.SetSingularTranslation2("of a");
			Gen.SetSingularTranslation3("the __'s");
			Gen.SetSingularTranslation4("a __'s");
			Gen.SetPluralTranslation1("of the");
			Gen.SetPluralTranslation2("__'s");
			Gen.SetExplanation("");

			Dat.SetSingularEnding("ae");
			Dat.SetSingularEnding_w_Macron('ae');
			Dat.SetPluralEnding("is");
			Dat.SetPluralEnding_w_Macron(lower_i, 's');
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
			Dat.SetExplanation("");

			Acc.SetSingularEnding("am");
			Acc.SetSingularEnding_w_Macron('am');
			Acc.SetPluralEnding("as");
			Acc.SetPluralEnding_w_Macron(lower_a, 's');
			Acc.SetSingularTranslation1("the");
			Acc.SetSingularTranslation2("a");
			Acc.SetPluralTranslation1("the");
			Acc.SetPluralTranslation2("s");
			Acc.SetExplanation("");

			Abl.SetSingularEnding("a");
			Abl.SetSingularEnding_w_Macron(lower_a);
			Abl.SetPluralEnding("is");
			Abl.SetPluralEnding_w_Macron(lower_i, 's');
			Abl.SetSingularTranslation1("by the");
			Abl.SetSingularTranslation2("by a");
			Abl.SetSingularTranslation3("with a");
			Abl.SetSingularTranslation4("with the");
			Abl.SetSingularTranslation5("from a");
			Abl.SetSingularTranslation6("from the");
			Abl.SetPluralTranslation1("by the");
			Abl.SetPluralTranslation2("with the");
			Abl.SetPluralTranslation3("from the");
			Abl.SetExplanation("");

			Voc.SetSingularEnding("a");
			Voc.SetSingularEnding_w_Macron('a');
			Voc.SetPluralEnding("ae");
			Voc.SetPluralEnding_w_Macron('ae');
			Voc.SetSingularTranslation1("oh");
			Voc.SetSingularTranslation2("Oh");
			Voc.SetPluralTranslation1("oh");
			Voc.SetPluralTranslation2("Oh");
			Voc.SetExplanation("");
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