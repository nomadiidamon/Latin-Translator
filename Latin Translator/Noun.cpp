#include "Noun.h"

Noun::Noun() 
{

}

Noun::Noun(std::string _declension, std::string _gender, std::string _number, std::string _nominative, std::string _genitive, std::string _definition)
	: declension(_declension), gender(_gender), number(_number), nominative(_nominative), genitive(_genitive), definition(_definition)
{
	int decNum = declension.GetDeclensionNumber();
	nom = NominativeCase(decNum);
	gen = GenitiveCase(decNum);
	dat = DativeCase(decNum);
	acc = AccusativeCase(decNum);
	abl = AblativeCase(decNum);
	voc = VocativeCase(decNum);


	nominative = _nominative;
	genitive = _genitive;
	definition = _definition;

	SetBase();
	SetForms();
}

std::string Noun::Nominative() const {
	return nominative;
}

void Noun::SetNominative(const std::string& newWord) {

	nominative = newWord;
}

void Noun::SetNominative()
{
	if (number.IsSingular()) {
		nominative = base + nom.SingularEnding();
	}
	else if (number.IsPlural()) {
		nominative = base + nom.PluralEnding();
	}
}

std::string Noun::Genitive() const
{
	return genitive;
}

void Noun::SetGenitive(const std::string& newWord)
{
	genitive = newWord;
}

void Noun::SetGenitive()
{
	genitive = base;

	if (number.IsSingular()) {
		genitive += gen.SingularEnding();
	}
	else if (number.IsPlural()) {
		genitive += gen.PluralEnding();
	}
}

std::string Noun::Dative() const
{
	return dative;
}

void Noun::SetDative(const std::string& newWord)
{
	dative = newWord;
}

void Noun::SetDative()
{
	dative = base;

	if (number.IsSingular()) {
		dative += dat.SingularEnding();
	}
	else if (number.IsPlural()) {
		dative += dat.PluralEnding();
	}
}

std::string Noun::Accusative() const
{
	return accusative;
}

void Noun::SetAccusative(const std::string& newWord)
{
	accusative = newWord;
}

void Noun::SetAccusative()
{
	accusative = base;

	if (number.IsSingular()) {
		accusative += acc.SingularEnding();
	}
	else if (number.IsPlural()) {
		accusative += acc.PluralEnding();
	}
}

std::string Noun::Ablative() const
{
	return ablative;
}

void Noun::SetAblative(const std::string& newWord)
{
	ablative = newWord;
}

void Noun::SetAblative()
{
	ablative = base;

	if (number.IsSingular()) {
		ablative += abl.SingularEnding();
	}
	else if (number.IsPlural()) {
		ablative += abl.PluralEnding();
	}
}

std::string Noun::Vocative() const
{
	return vocative;
}

void Noun::SetVocative(const std::string& newWord)
{
	vocative = newWord;
}

void Noun::SetVocative()
{
	vocative = base;

	if (number.IsSingular()) {
		vocative += voc.SingularEnding();
	}
	else if (number.IsPlural()) {
		vocative += voc.PluralEnding();
	}
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

const Declension& Noun::getDeclension() const {
	return declension;
}

void Noun::SetDeclension(const Declension& newDeclension) {
	declension = newDeclension;
}

std::string Noun::Definition() const {
	return definition.c_str();
}

void Noun::SetDefinition(const std::string& newLatinDefinition) {
	definition = newLatinDefinition;
}

void Noun::ShowSingular() {
	number.SetSingular();
	SetForms();
	std::cout << "Singular Forms:\n" << std::endl;
	std::cout << "Nominative: " << Nominative() << std::endl;
	std::cout << "Genitive: " << Genitive() << std::endl;
	std::cout << "Dative: " << Dative() << std::endl;
	std::cout << "Accusative: " << Accusative() << std::endl;
	std::cout << "Ablative: " << Ablative() << std::endl;
	std::cout << "Vocative: " << Vocative() << std::endl;
}

void Noun::ShowPlural(){
	number.SetPlural();
	SetForms();
	std::cout << "Plural Forms:\n" << std::endl;	
	std::cout << "Nominative: " << Nominative() << std::endl;
	std::cout << "Genitive: " << Genitive() << std::endl;
	std::cout << "Dative: " << Dative() << std::endl;
	std::cout << "Accusative: " << Accusative() << std::endl;
	std::cout << "Ablative: " << Ablative() << std::endl;
	std::cout << "Vocative: " << Vocative() << std::endl;
}

void Noun::SimpleDisplay() const {
	std::cout << "Gender: " << gender.GetGender() << std::endl;
	std::cout << "Nominative & Genitive: " << Nominative() << ", " << Genitive() << std::endl;
	std::cout << "Definition: " << Definition() << std::endl;
}

void Noun::Display()  {
	std::cout << "Declension: " << declension.GetDeclensionNumber() << std::endl;
	std::cout << "Gender: " << gender.GetGender() << std::endl;
	std::cout << "Nominative & Genitive: " << Nominative() << ", " << Genitive() << std::endl;
	std::cout << "Definition: " << Definition() << std::endl;
	std::cout << std::endl;

	ShowSingular();
	std::cout << std::endl;

	ShowPlural();
	std::cout << std::endl;

}

void Noun::serialize(const std::string& filename) const {
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

void Noun::deserialize(const std::string& filename) {
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

std::string Noun::GetBase() const {
	return base;
}

void Noun::SetBase()
{
	base = genitive;
	size_t x = gen.SingularEndingLength();
	for (int i = 0; i < x; i++) {
		base.pop_back();
	}
}