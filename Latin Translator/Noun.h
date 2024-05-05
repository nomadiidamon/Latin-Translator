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
		if (_gender == "Masculine") {
			SetMasculine();
		}
		else if (_gender == "Feminine") {
			SetFeminine();
		}
		else if (_gender == "Neuter") {
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

	const Declension& getDeclension() const;
	void SetDeclension(const Declension& newDeclension);

	const char* Definition() const;
	void SetDefinition(const std::string& newLatinDefinition);

	// Display function
	void display() const;

	// Serialize function to write the object to a file
	void serialize(const std::string& filename) const;

	// Deserialize function to read the object from a file
	void deserialize(const std::string& filename);

	// Function to get the base of the noun
	std::string GetBase() const;
	void SetBase();
};
