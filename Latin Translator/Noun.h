#pragma once
#include "Declension.h"
#include "Gender.h"
#include "Number.h"

class Noun {
private:
	Declension declension;
	Gender gender;
	Number number;
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
	Noun(std::string _declension, std::string _gender, std::string _nominative, std::string _genitive, std::string _definition, bool _macrons = false);

	//void SetMacrons(bool answer);
	//bool Macrons_R_True();

	// Getters and setters
	std::string Nominative() const;
	void SetNominative(const std::string& newWord);
	void SetNominative();

	std::string Genitive() const;
	void SetGenitive(const std::string& newWord);
	void SetGenitive();

	std::string Dative() const;
	void SetDative(const std::string& newWord);
	void SetDative();

	std::string Accusative() const;
	void SetAccusative(const std::string& newWord);
	void SetAccusative();

	std::string Ablative() const;
	void SetAblative(const std::string& newWord);
	void SetAblative();

	std::string Vocative() const;
	void SetVocative(const std::string& newWord);
	void SetVocative();

	void SetForms();

	const Declension& getDeclension() const;
	void SetDeclension(const Declension& newDeclension);

	std::string Definition() const;
	void SetDefinition(const std::string& newLatinDefinition);

	// Display functions
	//void ShowSingular_w_Macrons() const;
	//void ShowPlural_w_Macrons()const;
	void ShowSingular();
	void ShowPlural();
	void SimpleDisplay()const;
	void Display();

	// Serialize function to write the object to a file
	void serialize(const std::string& filename) const;

	// Deserialize function to read the object from a file
	void deserialize(const std::string& filename);

	// Function to get the base of the noun
	std::string GetBase() const;
	void SetBase();
};
