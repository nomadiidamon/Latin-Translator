#include "Case.h"

// Constructor
Case::Case() 
{
	singularTranslations = std::vector<std::string>();
	singularTranslations_Prefixes = std::vector<std::string>();
	pluralTranslations = std::vector<std::string>();
	pluralTranslations_Prefixes = std::vector<std::string>();
}

Case::~Case()
{
	Dispose();
}

void Case::Dispose()
{
	singularEnding.clear();
	singularEnding_w_macron.clear();
	pluralEnding.clear();
	pluralEnding_w_macron.clear();

	singularTranslations.clear();
	singularTranslations_Prefixes.clear();
	pluralTranslations.clear();
	pluralTranslations_Prefixes.clear();
}

// Getters
std::string Case::SingularEnding() const {
	return singularEnding;
}
std::wstring Case::SingularEnding_w_Macron() const {
	return singularEnding_w_macron;
}
std::string Case::PluralEnding() const {
	return pluralEnding;
}
std::wstring Case::PluralEnding_w_Macron() const {
	return pluralEnding_w_macron;
}


std::vector<std::string> Case::SingularTranslations() const
{
	return singularTranslations;
}
std::vector<std::string> Case::SingularTranslations_Prefixes() const
{
	return singularTranslations_Prefixes;
}
std::vector<std::string> Case::PluralTranslations() const
{
	return pluralTranslations;
}
std::vector<std::string> Case::PluralTranslations_Prefixes() const
{
	return pluralTranslations_Prefixes;
}
int Case::SingularTranslationsCount() const
{
	return singularTranslations.size();
}
int Case::SingularTranslations_PrefixesCount() const
{
	return singularTranslations_Prefixes.size();
}
int Case::PluralTranslationsCount() const
{
	return pluralTranslations.size();
}
int Case::PluralTranslations_PrefixesCount() const
{
	return pluralTranslations_Prefixes.size();
}

// Setters
void Case::SetSingularEnding(const char* suffix) {
	singularEnding = suffix;
}
void Case::SetSingularEnding_w_Macron(wchar_t suffix1, const char suffix2) {
	singularEnding_w_macron.clear();
	singularEnding_w_macron = suffix1;
	singularEnding_w_macron += suffix2;
}
void Case::SetSingularEnding_w_Macron(const wchar_t suffix) {
	singularEnding_w_macron = suffix;
}
void Case::SetPluralEnding(const char* suffix) {
	pluralEnding = suffix;
}
void Case::SetPluralEnding_w_Macron(wchar_t suffix1, const char suffix2) {
	pluralEnding_w_macron.clear();
	pluralEnding_w_macron = suffix1;
	pluralEnding_w_macron += suffix2;
}
void Case::SetPluralEnding_w_Macron(const wchar_t suffix) {
	pluralEnding_w_macron = suffix;
}

void Case::SetSingularTranslations(std::vector<std::string>& suffixes)
{
	singularTranslations = suffixes;
}

void Case::SetPluralTranslations(std::vector<std::string>& suffixes)
{
	pluralTranslations = suffixes;
}

void Case::AddToSingularTranslations(const char* suffix)
{
	singularTranslations.push_back(suffix);
}

void Case::AddToSingularTranslations_Prefixes(const char* prefix)
{
	singularTranslations_Prefixes.push_back(prefix);
}

void Case::AddToPluralTranslations(const char* suffix)
{
	pluralTranslations.push_back(suffix);
}

void Case::AddToPluralTranslations_Prefixes(const char* prefix)
{
	pluralTranslations_Prefixes.push_back(prefix);
}





