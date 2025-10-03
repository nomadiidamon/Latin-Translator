#pragma once

#include "Parser.h"
#include "NounDictionary.h"


class IuvoLatin {

	static std::string TranslateNoun(std::string latinWord);

};




class Formatter 
{
public:

	static bool IsWordPlural(std::string noun);
	static std::string WordsPluralForm(std::string englishWord);
	static std::string WordsSingularForm(std::string englishWord);


	static std::string FormatTranslation(std::string englishWord, Gender _gender, Declension _dec, Number _number, Case _case);
	static std::string FormatTranslation(Noun noun);
	static std::vector<std::string> FormatTranslations(std::vector<Noun> nouns);
};