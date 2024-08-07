#include "Noun.h"

Noun::Noun() 
{

}

Noun::Noun(std::string _declension, std::string _gender, std::string _nominative, std::string _genitive, std::string _definition, bool onlySingular, bool onlyPlural)
	: declension(_declension), gender(_gender), nominative(_nominative), genitive(_genitive), definition(_definition)
{
	declension.SetDeclension();
	nom.ApplyDeclension(declension.GetDeclension());
	gen.ApplyDeclension(declension.GetDeclension());
	dat.ApplyDeclension(declension.GetDeclension());
	acc.ApplyDeclension(declension.GetDeclension());
	abl.ApplyDeclension(declension.GetDeclension());
	voc.ApplyDeclension(declension.GetDeclension());

	SetBase();
	StoreForms();
}

std::string Noun::Nominative() const {
	return nominative;
}
//void Noun::SetNominative(const std::string& newWord) {
//
//	nominative = newWord;
//}
void Noun::SetNominative()
{
	nominative = base;

	if (number.IsSingular()) {
		nominative += nom.SingularEnding();
	}
	else if (number.IsPlural()) {
		nominative += nom.PluralEnding();
	}
}
std::string Noun::Genitive() const
{
	return genitive;
}
//void Noun::SetGenitive(const std::string& newWord)
//{
//	genitive = newWord;
//}
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
//void Noun::SetDative(const std::string& newWord)
//{
//	dative = newWord;
//}
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
//void Noun::SetAccusative(const std::string& newWord)
//{
//	accusative = newWord;
//}
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
//void Noun::SetAblative(const std::string& newWord)
//{
//	ablative = newWord;
//}
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
//void Noun::SetVocative(const std::string& newWord)
//{
//	vocative = newWord;
//}
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
void Noun::ParseDefinitions()
{
	std::string answer = Definition();
	std::string buffer;

	for (int i = 0; i < answer.size() +1; i++) {

		if (answer[i] == ',' || answer[i] == ';' || answer[i] == '\0') {
			StoreDefinitions(buffer);
			buffer = "";
		}
		else if (answer[i] == ' ') {
			continue;
		}
		else {
			buffer.push_back(answer[i]);
		}
	}
}
void Noun::StoreDefinitions(std::string def)
{
	definitions.push_back(def);
}

//void Noun::SetTranslations()
//{
//	std::string translation; 
//
//	for (int i = 0; i < definitions.size(); i++) {
//
//		//SINGULAR
//		number.SetSingular();
//		SetForms();
//		//number 1
//		translation = declension.Nom.SingularTranslation1();
//		translation += " ";
//		translation += definitions[i];
//		StoreTranslation(translation);
//		translation = "";
//
//		//number 2
//		translation = declension.Nom.SingularTranslation2();
//		translation += " ";
//		translation += definitions[i];
//		StoreTranslation(translation);
//		translation = "";
//
//		//number 3
//		translation = declension.Nom.SingularTranslation3();
//		translation += " ";
//		translation += definitions[i];
//		StoreTranslation(translation);
//		translation = "";
//
//		//number 4
//		translation = declension.Nom.SingularTranslation4();
//		translation += " ";
//		translation += definitions[i];
//		StoreTranslation(translation);
//		translation = "";
//
//		//number 5
//		translation = declension.Nom.SingularTranslation5();
//		translation += " ";
//		translation += definitions[i];
//		StoreTranslation(translation);
//		translation = "";
//
//		//number 6
//		translation = declension.Nom.SingularTranslation6();
//		translation += " ";
//		translation += definitions[i];
//		StoreTranslation(translation);
//		translation = "";
//
//		//number 7
//		translation = declension.Nom.SingularTranslation7();
//		translation += " ";
//		translation += definitions[i];
//		StoreTranslation(translation);
//		translation = "";
//
//
//		//PLURAL
//		number.SetPlural();
//		SetForms();
//		//number 1
//		translation = declension.Nom.PluralTranslation1();
//		translation += " ";
//		translation += definitions[i];
//		StoreTranslation(translation);
//		translation = "";
//
//		//number 2
//		translation = definitions[i];
//		translation += declension.Nom.PluralTranslation2();
//		//translation += " ";
//		StoreTranslation(translation);
//		translation = "";
//
//		//number 3
//		translation = declension.Nom.PluralTranslation4();
//		translation += " ";
//		translation += definitions[i];
//		StoreTranslation(translation);
//		translation = "";
//
//		//number 4
//		translation = declension.Nom.PluralTranslation5();
//		translation += " ";
//		translation += definitions[i];
//		StoreTranslation(translation);
//		translation = "";
//
//		//number 5
//		translation = declension.Nom.PluralTranslation6();
//		translation += " ";
//		translation += definitions[i];
//		StoreTranslation(translation);
//		translation = "";
//
//		//number 6
//		translation = declension.Nom.PluralTranslation7();
//		translation += " ";
//		translation += definitions[i];
//		StoreTranslation(translation);
//		translation = "";
//
//		//number 7
//		translation = declension.Nom.PluralTranslation1();
//		translation += " ";
//		translation += definitions[i];
//		StoreTranslation(translation);
//		translation = "";
//	}
//	CleanUpTranslations();
//}
//void Noun::StoreTranslation(std::string input)
//{
//	translations.push_back(input);
//}
//void Noun::CleanUpTranslations()
//{
//	std::string line;
//
//	for (int i = 0; i < translations.size(); i++) {
//		line = translations[i];
//
//		if (line[0] == ' ') {
//			translations.erase(translations.begin() + i);
//		}
//	}
//	for (int i = 0; i < translations.size(); i++) {
//		line = translations[i];
//
//		if (line[0] == ' ') {
//			translations.erase(translations.begin() + i);
//		}
//	}
//	for (int i = 0; i < translations.size(); i++) {
//		line = translations[i];
//
//		if (line[0] == ' ') {
//			translations.erase(translations.begin() + i);
//		}
//	}
//
//
//}

void Noun::SetForms()
{
	SetNominative();
	SetGenitive();
	SetDative();
	SetAccusative();
	SetAblative();
	SetVocative();
}
void Noun::StoreForms()
{
	number.SetSingular();
	SetForms();
	forms.push_back(Nominative());
	forms.push_back(Genitive());
	forms.push_back(Dative());
	forms.push_back(Accusative());
	forms.push_back(Ablative());
	forms.push_back(Vocative());

	number.SetPlural();
	SetForms();
	forms.push_back(Nominative());
	forms.push_back(Genitive());
	forms.push_back(Dative());
	forms.push_back(Accusative());
	forms.push_back(Ablative());
	forms.push_back(Vocative());
}
bool Noun::FindForm(std::string toFind)
{
	bool found = false;

	for (int i = 0; i < forms.size(); i++) {
		if (toFind == forms[i]) {
			found = true;
		}
	}
	return found;
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
	std::cout << "Declension: " << declension.GetDeclension() << std::endl;
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
	size_t x = gen.SingularEnding().length();
	for (int i = 0; i < x; i++) {
		base.pop_back();
	}
}