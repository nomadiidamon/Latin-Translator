#include "NounDictionary.h"

NounDictionary::NounDictionary()
{
	LoadNouns();
}

NounDictionary::~NounDictionary()
{
	Dispose();
}

void NounDictionary::Dispose()
{
	SaveNouns();
}

void NounDictionary::LoadNouns()
{
	std::vector<Noun> nouns;
	nouns = Noun::DeserializeNounsFromJson(firstDeclensionNounsFile);
	for (const auto& noun : nouns) {
		AddNoun(noun);
	}

	nouns.clear();
	nouns = Noun::DeserializeNounsFromJson(secondDeclensionNounsFile);
	for (const auto& noun : nouns) {
		AddNoun(noun);
	}

	nouns.clear();
	nouns = Noun::DeserializeNounsFromJson(thirdDeclensionNounsFile);
	for (const auto& noun : nouns) {
		AddNoun(noun);
	}

	nouns.clear();
	nouns = Noun::DeserializeNounsFromJson(fourthDeclensionNounsFile);
	for (const auto& noun : nouns) {
		AddNoun(noun);
	}

	nouns.clear();
	nouns = Noun::DeserializeNounsFromJson(fifthDeclensionNounsFile);
	for (const auto& noun : nouns) {
		AddNoun(noun);
	}
}

void NounDictionary::SaveNouns()
{
	for (const auto& pair : nounMap) {
		const Noun& noun = pair.second;
		const int num = noun.GetDeclension().GetDeclensionNumber();

		if (num == 1) {
			noun.SerializeToJson(firstDeclensionNounsFile, "FirstDeclensionNouns");
		}
		else if (num == 2) {
			noun.SerializeToJson(secondDeclensionNounsFile, "SecondDeclensionNouns");
		}
		else if (num == 3) {
			noun.SerializeToJson(thirdDeclensionNounsFile, "ThirdDeclensionNouns");
		}
		else if (num == 4) {
			noun.SerializeToJson(fourthDeclensionNounsFile, "FourthDeclensionNouns");
		}
		else if (num == 5) {
			noun.SerializeToJson(fifthDeclensionNounsFile, "FifthDeclensionNouns");
		}
	}
}

void NounDictionary::AddNoun(const Noun& noun)
{
	if (nounMap.find(noun.NominativeSingular()) != nounMap.end()) {
		// Noun already exists, do not add
		return;
	}

	nounMap.insert({ noun.NominativeSingular(), noun });
}

Noun* NounDictionary::GetNoun(const std::string& latinWord)
{
	if (latinWord.empty()) {
		return nullptr;
	}

	for (const auto& pair : nounMap) {
		const Noun& noun = pair.second;
		int baseLength = (int)noun.GetBase().length();
		// if the word is shorter than the base, skip
		if (latinWord.length() <= baseLength) continue;
		// if the base is longer than the word, skip
		if (baseLength > latinWord.length()) continue;
		// if the base doesn't match the start of the word, skip
		if (latinWord.substr(0, baseLength) != noun.GetBase()) continue;

		// skip if it's just the base word, possibly a verb or adjective
		if (latinWord == noun.GetBase()) continue;

		// might be the word, check all forms
		std::string caseFound = "";
		
		if (noun.FindForm(latinWord, caseFound)) {
			Noun* foundNoun = new Noun(noun);
			return foundNoun;
		}
	}
	return nullptr;
}
