#pragma once
#include "NominativeCase.h"
#include "GenitiveCase.h"
#include "DativeCase.h"
#include "AccusativeCase.h"
#include "AblativeCase.h"
#include "VocativeCase.h"
#include <fstream>
#include <iostream>
#include "json.hpp"
using json = nlohmann::json;


class Noun {
private:
	Declension declension;
	Gender gender;
	Number number;

	NominativeCase nom;
	GenitiveCase gen;
	DativeCase dat;
	AccusativeCase acc;
	AblativeCase abl;
	VocativeCase voc;

	std::string nominative_singular;
	std::string genitive_singular;
	std::string dative_singular;
	std::string accusative_singular;
	std::string ablative_singular;
	std::string vocative_singular;

	std::string nominative_plural;
	std::string genitive_plural;
	std::string dative_plural;
	std::string accusative_plural;
	std::string ablative_plural;
	std::string vocative_plural;

	std::string definition;
	std::string base;



public:

	Noun();
	Noun(std::string _declension, std::string _gender, std::string _number, std::string _nominative, std::string _genitive, std::string _definition);
	~Noun();
	void Dispose();

	// Getters and setters
	std::string NominativeSingular() const;
	std::string NominativePlural() const;
	void SetNominative(const std::string& newWord, bool singular = true);
	void SetNominative();

	std::string GenitiveSingular() const;
	std::string GenitivePlural() const;
	void SetGenitive(const std::string& newWord, bool singular = true);
	void SetGenitive();

	std::string DativeSingular() const;
	std::string DativePlural() const;
	void SetDative(const std::string& newWord, bool singular = true);
	void SetDative();

	std::string AccusativeSingular() const;
	std::string AccusativePlural() const;
	void SetAccusative(const std::string& newWord, bool singular = true);
	void SetAccusative();

	std::string AblativeSingular() const;
	std::string AblativePlural() const;
	void SetAblative(const std::string& newWord, bool singular = true);
	void SetAblative();

	std::string VocativeSingular() const;
	std::string VocativePlural() const;
	void SetVocative(const std::string& newWord, bool singular = true);
	void SetVocative();

	std::string Definition() const;
	void SetDefinition(const std::string& newLatinDefinition);

	void SetForms();
	bool FindForm(std::string toFind, std::string& outFoundCase);

	const Declension& getDeclension() const;
	void SetDeclension(const Declension& newDeclension);

	void SetNumber(const Number& newNumber);
	void SetNumber(const std::string& newNumber);
	std::string GetNumber() const;


	// Display functions
	void ShowSingular();
	void ShowPlural();
	void SimpleDisplay()const;
	void Display();

	// Serialize function to write the object to a file
	void Serialize(const std::string& filename) const;
	void SerializeToJson(const std::string& filename) const;

	// Deserialize function to read the object from a file
	void Deserialize(const std::string& filename);
	void DeserializeFromJson(const std::string& filename);

	// Function to get the base of the noun
	std::string GetBase() const;
	void SetBase();
};
