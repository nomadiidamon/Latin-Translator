#include "Noun.h"

Noun::Noun()
{

}

Noun::Noun(std::string _declension, std::string _gender, std::string _number, std::string _nominative, std::string _genitive, std::string _definition)
	: declension(_declension), gender(_gender), number(_number), nominative_singular(_nominative), genitive_singular(_genitive), definition(_definition)
{
	int decNum = declension.GetDeclensionNumber();
	nom = NominativeCase(decNum);
	gen = GenitiveCase(decNum);
	dat = DativeCase(decNum);
	acc = AccusativeCase(decNum);
	abl = AblativeCase(decNum);
	voc = VocativeCase(decNum);

	nominative_singular = _nominative;
	genitive_singular = _genitive;
	definition = _definition;

	SetBase();
	SetForms();

	Display();
	std::cout << "--------------------->" << std::endl;

}

Noun::~Noun()
{
	Dispose();
}

void Noun::Dispose()
{
	declension.Dispose();
	gender.Dispose();
	number.Dispose();

	nom.Dispose();
	gen.Dispose();
	dat.Dispose();
	acc.Dispose();
	abl.Dispose();
	voc.Dispose();

	nominative_singular.clear();
	genitive_singular.clear();
	dative_singular.clear();
	accusative_singular.clear();
	ablative_singular.clear();
	vocative_singular.clear();

	nominative_plural.clear();
	genitive_plural.clear();
	dative_plural.clear();
	accusative_plural.clear();
	ablative_plural.clear();
	vocative_plural.clear();

	definition.clear();
	base.clear();
}

std::string Noun::NominativeSingular() const {
	return nominative_singular;
}

std::string Noun::NominativePlural() const
{
	return nominative_plural;
}

void Noun::SetNominative(const std::string& newWord, bool singular) {
	if (singular)
		nominative_singular = newWord;
	else
		nominative_plural = newWord;
}

void Noun::SetNominative()
{
	nominative_singular = base;
	nominative_singular = base + nom.SingularEnding();
	nominative_plural = base;
	nominative_plural = base + nom.PluralEnding();
}

std::string Noun::GenitiveSingular() const
{
	return genitive_singular;
}

std::string Noun::GenitivePlural() const
{
	return genitive_plural;
}

void Noun::SetGenitive(const std::string& newWord, bool singular)
{
	if (singular)
		genitive_singular = newWord;
	else
		genitive_plural = newWord;
}

void Noun::SetGenitive()
{
	genitive_singular = base;
	genitive_singular += gen.SingularEnding();
	genitive_plural = base;
	genitive_plural += gen.PluralEnding();

}

std::string Noun::DativeSingular() const
{
	return dative_singular;
}

std::string Noun::DativePlural() const
{
	return genitive_plural;
}

void Noun::SetDative(const std::string& newWord, bool singular)
{
	if (singular)
		dative_singular = newWord;
	else
		dative_plural = newWord;
}

void Noun::SetDative()
{
	dative_singular = GetBase() + dat.SingularEnding();
	//dative_singular += dat.SingularEnding();
	dative_plural = GetBase() + dat.PluralEnding();
	//dative_plural += dat.PluralEnding();
}

std::string Noun::AccusativeSingular() const
{
	return accusative_singular;
}

std::string Noun::AccusativePlural() const
{
	return genitive_plural;
}

void Noun::SetAccusative(const std::string& newWord, bool singular)
{
	if (singular)
		accusative_singular = newWord;
	else
		accusative_plural = newWord;
}

void Noun::SetAccusative()
{
	accusative_singular = GetBase();
	accusative_singular += acc.SingularEnding();
	accusative_plural = GetBase();
	accusative_plural += acc.PluralEnding();
}

std::string Noun::AblativeSingular() const
{
	return ablative_singular;
}

std::string Noun::AblativePlural() const
{
	return genitive_plural;
}

void Noun::SetAblative(const std::string& newWord, bool singular)
{
	if (singular)
		ablative_singular = newWord;
	else
		ablative_plural = newWord;
}

void Noun::SetAblative()
{
	ablative_singular = GetBase();
	ablative_singular += abl.SingularEnding();
	ablative_plural = GetBase();
	ablative_plural += abl.PluralEnding();
}

std::string Noun::VocativeSingular() const
{
	return vocative_singular;
}

std::string Noun::VocativePlural() const
{
	return genitive_plural;
}

void Noun::SetVocative(const std::string& newWord, bool singular)
{
	if (singular)
		vocative_singular = newWord;
	else
		vocative_plural = newWord;
}

void Noun::SetVocative()
{
	vocative_singular = GetBase();
	vocative_singular += voc.SingularEnding();
	vocative_plural = GetBase();
	vocative_plural += voc.PluralEnding();
}


void Noun::SetForms()
{
	SetNominative();
	SetGenitive();
	SetDative();
	SetAccusative();
	SetAblative();
	SetVocative();
}

bool Noun::FindForm(std::string toFind, std::string& outFoundCase)
{
	if (toFind == NominativeSingular() || toFind == NominativePlural()) {
		outFoundCase = "Nominative";
		return true;
	}
	else if (toFind == GenitiveSingular() || toFind == GenitivePlural()) {
		outFoundCase = "Genitive";
		return true;
	}
	else if (toFind == DativeSingular() || toFind == DativePlural()) {
		outFoundCase = "Dative";
		return true;
	}
	else if (toFind == AccusativeSingular() || toFind == AccusativePlural()) {
		outFoundCase = "Accusative";
		return true;
	}
	else if (toFind == AblativeSingular() || toFind == AblativePlural()) {
		outFoundCase = "Ablative";
		return true;
	}
	else if (toFind == VocativeSingular() || toFind == VocativePlural()) {
		outFoundCase = "Vocative";
		return true;
	}
	return false;
}

const Declension& Noun::getDeclension() const {
	return declension;
}

void Noun::SetDeclension(const Declension& newDeclension) {
	declension = newDeclension;
}

void Noun::SetNumber(const Number& newNumber)
{
	number = newNumber;
}

void Noun::SetNumber(const std::string& newNumber)
{
	number = Number(newNumber);
}

std::string Noun::GetNumber() const
{
	return number.GetNumber();
}

std::string Noun::Definition() const {
	return definition.c_str();
}

void Noun::SetDefinition(const std::string& newLatinDefinition) {
	definition = newLatinDefinition;
}

void Noun::ShowSingular() {
	//number.SetSingular();
	SetForms();
	std::cout << "Singular Forms:\n" << std::endl;
	std::cout << "Nominative: " << NominativeSingular() << std::endl;
	std::cout << "Genitive: " << GenitiveSingular() << std::endl;
	std::cout << "Dative: " << DativeSingular() << std::endl;
	std::cout << "Accusative: " << AccusativeSingular() << std::endl;
	std::cout << "Ablative: " << AblativeSingular() << std::endl;
	std::cout << "Vocative: " << VocativeSingular() << std::endl;
}

void Noun::ShowPlural() {
	//number.SetPlural();
	SetForms();
	std::cout << "Plural Forms:\n" << std::endl;
	std::cout << "Nominative: " << NominativePlural() << std::endl;
	std::cout << "Genitive: " << GenitivePlural() << std::endl;
	std::cout << "Dative: " << DativePlural() << std::endl;
	//std::cout << "Dative: " << GetBase() << dat.PluralEnding() << std::endl;

	std::cout << "Accusative: " << AccusativePlural() << std::endl;
	std::cout << "Ablative: " << AblativePlural() << std::endl;
	std::cout << "Vocative: " << VocativePlural() << std::endl;
}

void Noun::SimpleDisplay() const {
	std::cout << "Gender: " << gender.GetGender() << std::endl;
	std::cout << "Nominative & Genitive: " << NominativeSingular() << ", " << GenitiveSingular() << std::endl;
	std::cout << "Definition: " << Definition() << std::endl;
}

void Noun::Display() {
	std::cout << "Declension: " << declension.GetDeclensionNumber() << std::endl;
	std::cout << "Gender: " << gender.GetGender() << std::endl;
	std::cout << "Nominative & Genitive: " << NominativeSingular() << ", " << GenitiveSingular() << std::endl;
	std::cout << "Definition: " << Definition() << std::endl;
	std::cout << std::endl;

	ShowSingular();
	std::cout << std::endl;

	ShowPlural();
	std::cout << std::endl;

}

void Noun::Serialize(const std::string& filename) const {
	std::ofstream file;
	file.open(filename, std::ios::binary);
	if (file.is_open()) {
		file.write(filename.c_str(), sizeof(Noun));
		file.close();
	}
	else {
		std::cerr << "Error: Unable to open file for writing." << std::endl;
	}
}

void Noun::SerializeToJson(const std::string& filename) const
{
	json j;

	j["Noun"] = nominative_singular;
	j["Declension"] = declension.GetDeclensionString();
	j["Gender"] = gender.GetGender();
	if (number.IsBoth()) {
		j["Number"] = "Both";
	}
	else if (number.IsSingular()) {
		j["Number"] = "Singular";
	}
	else if (number.IsPlural()) {
		j["Number"] = "Plural";
	}
	else {
		j["Number"] = "Unknown";
	}
	j["Nominative"] = nominative_singular;
	j["Genitive"] = genitive_singular;
	j["Definition"] = definition;
	std::ofstream file(filename);
	if (file.is_open()) {
		file << j.dump(4); // Pretty print with 4 spaces indentation
		file.close();
	}
	else {
		std::cerr << "Error: Unable to open file for writing." << std::endl;
	}
}

void Noun::Deserialize(const std::string& filename) {
	std::ifstream file;
	file.open(filename, std::ios::binary);
	if (file.is_open()) {
		file.read((char*)this, sizeof(Noun));
		file.close();
	}
	else {
		std::cerr << "Error: Unable to open file for reading." << std::endl;
	}
}

void Noun::DeserializeFromJson(const std::string& filename)
{
	std::string json_string;
	std::ofstream file(filename);
	if (file.is_open()) {
		file << json_string;
		file.close();
		json j = json::parse(json_string);

		std::string dec = j["Declension"];
		std::string gender = j["Gender"];
		std::string number = j["Number"];
		std::string nom = j["Nominative"];
		std::string gen = j["Genitive"];
		std::string def = j["Definition"];

		Noun noun(dec, gender, number, nom, gen, def);
		*this = noun;
	}
	else {
		std::cerr << "Error: Unable to open file for reading." << std::endl;
		return;
	}


}

std::string Noun::GetBase() const {
	return base;
}

void Noun::SetBase()
{
	base = genitive_singular;
	size_t x = gen.SingularEndingLength();
	for (int i = 0; i < x; i++) {
		base.pop_back();
	}
}