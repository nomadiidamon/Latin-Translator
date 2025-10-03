#pragma once

#include <string>
#include "Noun.h"
#include "NounDictionary.h"

class Parser {

private:
	NounDictionary dict;

public:
	Parser();
	~Parser();

	bool IsSavedNoun(std::string word);
	bool IsSavedAdjective(std::string word);
	bool IsSavedVerb(std::string word);


	int ParseWord(std::string word);

	int ParseNoun(std::string word);
	Declension GetNounDeclension(std::string word);
	std::string GetNounCase(std::string word);
	Number GetNounNumber(std::string word);

	int ParseAdjective(std::string word);
	Declension GetAdjectiveDeclension(std::string word);
	std::string GetAdjectiveCase(std::string word);
	Number GetAdjectiveNumber(std::string word);

	int ParseVerb(std::string word);

};