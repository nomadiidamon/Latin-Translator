#pragma once
#include "NominativeCase.h"
#include "GenitiveCase.h"
#include "DativeCase.h"
#include "AccusativeCase.h"
#include "AblativeCase.h"
#include "VocativeCase.h"
#include <fstream>
#include <iostream>


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

	NominativeCase nom;
	GenitiveCase gen;
	DativeCase dat;
	AccusativeCase acc;
	AblativeCase abl;
	VocativeCase voc;


public:
	std::vector<std::string> forms;
	std::vector<std::string> translations;
	std::vector<std::string> definitions;

	Noun();
	Noun(std::string _declension, std::string _gender, std::string _nominative, std::string _genitive, std::string _definition, bool onlySingular = false, bool onlyPlural = false);

	// Getters and setters
	std::string Nominative() const;
	//void SetNominative(const std::string& newWord);
	void SetNominative();

	std::string Genitive() const;
	//void SetGenitive(const std::string& newWord);
	void SetGenitive();

	std::string Dative() const;
	//void SetDative(const std::string& newWord);
	void SetDative();

	std::string Accusative() const;
	//void SetAccusative(const std::string& newWord);
	void SetAccusative();

	std::string Ablative() const;
	//void SetAblative(const std::string& newWord);
	void SetAblative();

	std::string Vocative() const;
	//void SetVocative(const std::string& newWord);
	void SetVocative();

	std::string Definition() const;
	void SetDefinition(const std::string& newLatinDefinition);
	void ParseDefinitions();
	void StoreDefinitions(std::string def);

	//void SetTranslations();
	//void StoreTranslation(std::string input);
	//void CleanUpTranslations();
	//bool FindTranslation(std::string toFind);

	void SetForms();
	void StoreForms();
	bool FindForm(std::string toFind);

	const Declension& getDeclension() const;
	void SetDeclension(const Declension& newDeclension);


	// Display functions
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
