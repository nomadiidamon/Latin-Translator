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

	// Getters
	std::string NominativeSingular() const;
	std::string GenitiveSingular() const;
	std::string DativeSingular() const;
	std::string AccusativeSingular() const;
	std::string AblativeSingular() const;
	std::string VocativeSingular() const;

	std::string NominativePlural() const;
	std::string GenitivePlural() const;
	std::string DativePlural() const;
	std::string AccusativePlural() const;
	std::string AblativePlural() const;
	std::string VocativePlural() const;

	std::string Definition() const;
	const Declension& GetDeclension() const;

	std::string GetNumber() const;


	// Setters
	void SetNominativeSingular(const std::string& newNominativeSingular);
	void SetNominativeForms();
	void SetNominativeSingularForm();
	void SetNominativePluralForm();

	void SetGenitiveSingular(const std::string& newGenitiveSingular);
	void SetGenitiveForms();
	void SetGenitiveSingularForm();
	void SetGenitivePluralForm();

	void SetDativeForms();
	void SetDativeSingularForm();
	void SetDativePluralForm();

	void SetAccusativeForms();
	void SetAccusativeSingularForm();
	void SetAccusativePluralForm();

	void SetAblativeForms();
	void SetAblativeSingularForm();
	void SetAblativePluralForm();

	void SetVocativeForms();
	void SetVocativeSingularForm();
	void SetVocativePluralForm();

	void SetForms();
	bool FindForm(std::string toFind, std::string& outFoundCase);



	void SetDefinition(const std::string& newLatinDefinition);


	void SetDeclension(const Declension& newDeclension);

	void SetNumber(const Number& newNumber);
	void SetNumber(const std::string& newNumber);
	void SetGender(const Gender& newGender);
	void SetGender(const std::string& newGender);


	// Display functions
	void ShowSingular();
	void ShowPlural();
	void SimpleDisplay()const;
	void Display();

	// Serialize function to write the object to a file
	void Serialize(const std::string& filename) const;
	void SerializeToJson(const std::string& filename, const std::string& arrayName = "Nouns") const;
	bool QuickSerializeToJson(const std::string& filename, const std::string& arrayName = "Nouns") const;


	// Deserialize function to read the object from a file
	void Deserialize(const std::string& filename);
	void DeserializeFromJson(const std::string& filename);
	static bool DeserializeNounsFromJson(const std::string& filename, std::vector<Noun>& nouns);

	// Function to get the base of the noun
	std::string GetBase() const;
	void SetBase();
};
