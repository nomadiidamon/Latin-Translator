#include "Parser.h"



int Parser::ParseWord(std::string word)
{
	if (IsSavedNoun(word)) {
		int result = ParseNoun(word);
		return 1; // Noun
	}

	if (IsSavedVerb(word)) {
		int result = ParseVerb(word);
		return 2; // verb

	}

	if (IsSavedAdjective(word)) {
		int result = ParseAdjective(word);
		return 3; // adjective
	}


	return -1; // Unknown
}

#pragma region NounParsing

Parser::Parser()
{
	dict = NounDictionary();
}

Parser::~Parser()
{
	dict.Dispose();
}

bool Parser::IsSavedNoun(std::string word)
{
	std::vector<Noun> nouns;
	nouns = Noun::DeserializeNounsFromJson(firstDeclensionNounsFile);
	for (const auto& noun : nouns) {
		if (noun.NominativeSingular() == word || noun.NominativePlural() == word) {
			return true;
		}
	}
	nouns.clear();
	nouns = Noun::DeserializeNounsFromJson(secondDeclensionNounsFile);
	for (const auto& noun : nouns) {
		if (noun.NominativeSingular() == word || noun.NominativePlural() == word) {
			return true;
		}
	}
	nouns.clear();
	nouns = Noun::DeserializeNounsFromJson(thirdDeclensionNounsFile);
	for (const auto& noun : nouns) {
		if (noun.NominativeSingular() == word || noun.NominativePlural() == word) {
			return true;
		}
	}
	nouns.clear();
	nouns = Noun::DeserializeNounsFromJson(fourthDeclensionNounsFile);
	for (const auto& noun : nouns) {
		if (noun.NominativeSingular() == word || noun.NominativePlural() == word) {
			return true;
		}
	}
	nouns.clear();
	nouns = Noun::DeserializeNounsFromJson(fifthDeclensionNounsFile);
	for (const auto& noun : nouns) {
		if (noun.NominativeSingular() == word || noun.NominativePlural() == word) {
			return true;
		}
	}

	return false;
}

int Parser::ParseNoun(std::string word)
{

	return 0;
}

Declension Parser::GetNounDeclension(std::string word)
{

	Noun* noun = dict.GetNoun(word);
	if (noun != nullptr) {
		return noun->GetDeclension();
	}
}

std::string Parser::GetNounCase(std::string word)
{
	Noun* noun = dict.GetNoun(word);

	if (noun != nullptr) {

		return noun->GetCaseFromForm(word);
	}
}

Number Parser::GetNounNumber(std::string word)
{
	Noun* noun = dict.GetNoun(word);

	if (noun != nullptr) {

		if (noun->GetNumber() == "Singular") {
			delete noun;
			return Number("Singular");
		}
		else if (noun->GetNumber() == "Plural") {
			delete noun;
			return Number("Plural");
		}
		else if (noun->GetNumber() == "Both") {
			delete noun;
			return Number("Both");
		}
		else {
			delete noun;
			return Number("Unknown");
		}
	}
}
#pragma endregion

#pragma region AdjectiveParsing

bool Parser::IsSavedAdjective(std::string word)
{
	return false;
}

int Parser::ParseAdjective(std::string word)
{
	return 0;
}

Declension Parser::GetAdjectiveDeclension(std::string word)
{
	return Declension();
}

std::string Parser::GetAdjectiveCase(std::string word)
{
	return std::string();
}

Number Parser::GetAdjectiveNumber(std::string word)
{
	return Number();
}


#pragma endregion

#pragma region VerbParsing

bool Parser::IsSavedVerb(std::string word)
{
	return false;
}

int Parser::ParseVerb(std::string word)
{
	return 0;
}
#pragma endregion
