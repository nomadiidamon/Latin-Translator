#include "IuvoLatin.h"

std::string IuvoLatin::TranslateNoun(std::string latinWord) {

	NounDictionary dict = NounDictionary();
	Noun* noun = dict.GetNoun(latinWord);
	if (noun != nullptr) {
		Formatter formatter = Formatter();
		return formatter.FormatTranslation(*noun);
	}
	else {
		return "Translation not found.";
	}

}

bool Formatter::IsWordPlural(std::string noun)
{
	return false;
}

std::string Formatter::WordsPluralForm(std::string englishWord)
{
	int len = (int)englishWord.length();
	std::string ending = englishWord.substr(len - 1, 1);
	if (ending == "s" || ending == "x" || ending == "o") {
		return englishWord + "es";
	}

	ending.clear();
	ending = englishWord.substr(len - 2, 2);

	if (ending == "ch" || ending == "sh" || ending == "ss" || ending == "zz") {
		return englishWord + "es";
	}
	else if (ending[1] == 'y' && !(ending[0] == 'a' || ending[0] == 'e' || ending[0] == 'i' || ending[0] == 'o' || ending[0] == 'u')) {
		return englishWord.substr(0, len - 1) + "ies";
	}
	else if (ending[1] == 'f') {
		return englishWord.substr(0, len - 1) + "ves";
	}
	else if (ending == "fe") {
		return englishWord.substr(0, len - 2) + "ves";
	}
	else {
		return englishWord + "s";
	}


}

std::string Formatter::WordsSingularForm(std::string englishWord)
{
	int len = (int)englishWord.length();
	std::string ending = englishWord.substr(len - 2, 2);
	if (ending == "es") {
		std::string testEnding = englishWord.substr(len - 4, 2);
		if (testEnding == "ch" || testEnding == "sh" || testEnding == "ss" || testEnding == "zz" || englishWord.substr(len - 3, 1) == "o") {
			return englishWord.substr(0, len - 2);
		}
		else if (englishWord.substr(len - 3, 1) == "i") {
			return englishWord.substr(0, len - 2) + "y";
		}
		else if (englishWord.substr(len - 3, 1) == "v") {
			return englishWord.substr(0, len - 3) + "f";
		}
		else {
			return englishWord.substr(0, len - 2);
		}
	}
	else if (ending == "s") {
		return englishWord.substr(0, len - 1);
	}
	else {
		return englishWord;
	}

}

std::string Formatter::FormatTranslation(std::string englishWord, Gender _gender, Declension _dec, Number _number, Case _case)
{
	std::string retval;




	return retval;
}

std::string Formatter::FormatTranslation(Noun noun)
{
	std::string definition = noun.Definition();

	return definition;
}

std::vector<std::string> Formatter::FormatTranslations(std::vector<Noun> nouns)
{
	return std::vector<std::string>();
}
