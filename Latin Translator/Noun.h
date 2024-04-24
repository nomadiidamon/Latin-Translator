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
	std::string ending = "";
	std::string Translation1 = "";
	std::string Translation2 = "";
	std::string Translation3 = "";
	std::string explanation = "";

	Case() {

	}


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

	Declension() : Nom(), Gen(), Dat(), Acc(), Abl, Voc, first(false),
		second(false), third(false), fourth(false), fifth(false)
		
		//,nom_ending(""), gen_ending(""), dat_ending(""), acc_ending(""), abl_ending(""), voc_ending("")
	{

	}


	void SetDeclension() const {
		std::string answer = "00000";
		answer[0] = first;
		answer[1] = second;
		answer[2] = third;
		answer[3] = fourth;
		answer[4] = fifth;


		declension == answer;


	}

	void SetEndings(std::string declinsion) {



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
