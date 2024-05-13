#include "Noun.h"

Noun::Noun() {}

Noun::Noun(std::string _declension, std::string _gender, std::string _nominative, std::string _genitive, std::string _definition, bool _macrons)
	: declension(_declension), gender(_gender), number(), nominative(_nominative), genitive(_genitive), definition(_definition)
{
	declension.SetDeclension();
	gender.SetGender(_gender);
	SetBase();
	number.SetSingular();
	SetForms();

}

//void Noun::SetMacrons(bool answer)
//{
//	if (answer) {
//		macrons = true;
//	}
//	else {
//		macrons = false;
//	}
//}
//
//bool Noun::Macrons_R_True()
//{
//	if (macrons) {
//		return true;
//	}
//	else {
//		return false;
//	}
//}

std::string Noun::Nominative() const {
	return nominative;
}
void Noun::SetNominative(const std::string& newWord) {

	nominative = newWord;
}
void Noun::SetNominative()
{
	nominative = base;

	if (number.isSingular()) {
		nominative += declension.Nom.SingularEnding();
	}
	else if (number.isPlural()) {
		nominative += declension.Nom.PluralEnding();
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

	if (number.isSingular()) {
		genitive += declension.Gen.SingularEnding();
	}
	else if (number.isPlural()) {
		genitive += declension.Gen.PluralEnding();
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

	if (number.isSingular()) {
		dative += declension.Dat.SingularEnding();
	}
	else if (number.isPlural()) {
		dative += declension.Dat.PluralEnding();
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

	if (number.isSingular()) {
		accusative += declension.Acc.SingularEnding();
	}
	else if (number.isPlural()) {
		accusative += declension.Acc.PluralEnding();
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

	if (number.isSingular()) {
		ablative += declension.Abl.SingularEnding();
	}
	else if (number.isPlural()) {
		ablative += declension.Abl.PluralEnding();
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

	if (number.isSingular()) {
		vocative += declension.Voc.SingularEnding();
	}
	else if (number.isPlural()) {
		vocative += declension.Voc.PluralEnding();
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

//void Noun::ShowSingular_w_Macrons() const {
//	std::cout << "Singular Forms With Macrons:\n" << std::endl;
//	std::cout << "Nominative: " << base;
//	std::wcout << declension.Nom.SingularEnding_w_Macron() << std::endl;
//	std::cout << "Genitive: " << genitive << std::endl;
//	std::cout << "Dative: " << base;
//	std::wcout << declension.Dat.SingularEnding_w_Macron() << std::endl;
//	std::cout << "Accusative: " << base;
//	std::wcout << declension.Acc.SingularEnding_w_Macron() << std::endl;
//	std::cout << "Ablative: " << base;
//	std::wcout << declension.Abl.SingularEnding_w_Macron() << std::endl;
//	std::cout << "Vocative: " << base;
//	std::wcout << declension.Voc.SingularEnding_w_Macron() << std::endl;
//}

//void Noun::ShowPlural_w_Macrons() const {
//	std::cout << "Plural Forms With Macrons:\n" << std::endl;
//	std::cout << "Nominative: " << base;
//	std::wcout << declension.Nom.PluralEnding_w_Macron() << std::endl;
//	std::cout << "Genitive: " << base;
//	std::wcout << declension.Gen.PluralEnding_w_Macron() << std::endl;
//	std::cout << "Dative: " << base;
//	std::wcout << declension.Dat.PluralEnding_w_Macron() << std::endl;
//	std::cout << "Accusative: " << base;
//	std::wcout << declension.Acc.PluralEnding_w_Macron() << std::endl;
//	std::cout << "Ablative: " << base;
//	std::wcout << declension.Abl.PluralEnding_w_Macron() << std::endl;
//	std::cout << "Vocative: " << base;
//	std::wcout << declension.Voc.PluralEnding_w_Macron() << std::endl;
//}

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
	std::cout << "Gender: " << gender.getGender() << std::endl;
	std::cout << "Nominative & Genitive: " << Nominative() << ", " << Genitive() << std::endl;
	std::cout << "Definition: " << Definition() << std::endl;
}

void Noun::Display()  {
	std::cout << "Declension: " << declension.GetDeclension() << std::endl;
	std::cout << "Gender: " << gender.getGender() << std::endl;
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
		Noun unknown;
		file.read((char*)this, sizeof(Noun));
		file.close();
	}
	else {
		std::cerr << "Error: Unable to open file for reading." << std::endl;
	}
}

std::string Noun::GetBase() const {
	// Find the last index of the genitive
	//size_t pos = declension.genitive.find_last_of(' ');
	//if (pos != std::string::npos) {
	//    return declension.genitive.substr(0, pos);
	//}
	//return declension.genitive;
	return base;
}

void Noun::SetBase()
{
	base = genitive;
	size_t x = declension.Gen.SingularEnding().length();
	for (int i = 0; i < x; i++) {
		base.pop_back();
	}
}