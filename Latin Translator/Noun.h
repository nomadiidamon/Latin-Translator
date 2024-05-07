#pragma once
#include "Declension.h"

struct Gender {
	bool masculine;
	bool feminine;
	bool neuter;

	Gender() : masculine(false), feminine(false), neuter(false) {}
	Gender(std::string _gender) : masculine(false), feminine(false), neuter(false) 
	{
		SetGender(_gender);
	}

	void SetGender(std::string _gender) {
		if (_gender == "Masculine" || _gender == "Masc" || _gender == "M") {
			SetMasculine();
		}
		else if (_gender == "Feminine" || _gender == "Fem" || _gender == "F") {
			SetFeminine();
		}
		else if (_gender == "Neuter" || _gender == "Neut" || _gender == "N") {
			SetNeuter();
		}
		else {
			SetUnknown();
		}
	}

	std::string getGender() const {
		if (masculine)
			return "Masculine";
		else if (feminine)
			return "Feminine";
		else if (neuter)
			return "Neuter";
		return "Unknown";
	}

	void SetMasculine() {
		masculine = true;
		feminine = false;
		neuter = false;
	}
	void SetFeminine() {
		masculine = false;
		feminine = true;
		neuter = false;
	}
	void SetNeuter() {
		masculine = false;
		feminine = false;
		neuter = true;
	}
	void SetUnknown() {
		masculine = false;
		feminine = false;
		neuter = false;
	}
};

class Noun {
private:
	Declension declension;
	Gender gender;
	std::string nominative;
	std::string genitive;
	std::string dative;
	std::string accusative;
	std::string ablative;
	std::string vocative;
	std::string definition;
	std::string base;
	std::vector<Noun> synonyms;
	std::vector<std::string> forms;


public:
	Noun();
	Noun(std::string _declension, std::string _gender, std::string _nominative, std::string _genitive, std::string _definition);


	// Getters and setters
	const char* Nominative() const;
	void SetNominative(const std::string& newWord);

	const char* Genitive() const;
	void SetGenitive(const std::string& newWord);

	const char* Dative() const;
	void SetDative(const std::string& newWord);

	const char* Accusative() const;
	void SetAccusative(const std::string& newWord);

	const char* Ablative() const;
	void SetAblative(const std::string& newWord);

	const char* Vocative() const;
	void SetVocative(const std::string& newWord);

	const Declension& getDeclension() const;
	void SetDeclension(const Declension& newDeclension);

	const char* Definition() const;
	void SetDefinition(const std::string& newLatinDefinition);

	// Display functions
	void ShowSingular_w_Macrons() const;
	void ShowPlural_w_Macrons()const;
	void ShowSingular() const;
	void ShowPlural()const;
	void SimpleDisplay()const;
	void Display() const;

	// Serialize function to write the object to a file
	void serialize(const std::string& filename) const;

	// Deserialize function to read the object from a file
	void deserialize(const std::string& filename);

	// Function to get the base of the noun
	std::string GetBase() const;
	void SetBase();
};
