#pragma once
#include <Vector>
#include <string>

class Case {
private:
	std::string singularEnding = "";
	std::wstring singularEnding_w_macron = L"";

	std::string pluralEnding = "";
	std::wstring pluralEnding_w_macron = L"";

	std::vector<std::string> singularTranslations;
	std::vector<std::string> singularTranslations_Prefixes;
	std::vector<std::string> pluralTranslations;
	std::vector<std::string> pluralTranslations_Prefixes;
public:
	// Constructor
	Case();
	~Case();
	void Dispose();

	// Getters
	std::string SingularEnding() const;
	std::wstring SingularEnding_w_Macron() const;
	std::string PluralEnding() const;
	std::wstring PluralEnding_w_Macron() const;

	std::vector<std::string> SingularTranslations() const;
	std::vector<std::string> SingularTranslations_Prefixes() const;
	std::vector<std::string> PluralTranslations() const;
	std::vector<std::string> PluralTranslations_Prefixes() const;

	int SingularTranslationsCount() const;
	int SingularTranslations_PrefixesCount() const;
	int PluralTranslationsCount() const;
	int PluralTranslations_PrefixesCount() const;	

	// Setters
	void SetSingularEnding(const char* suffix);
	void SetSingularEnding_w_Macron(wchar_t suffix1, const char suffix2);
	void SetSingularEnding_w_Macron(const wchar_t suffix);

	void SetPluralEnding(const char* suffix);
	void SetPluralEnding_w_Macron(wchar_t suffix1, const char suffix2);
	void SetPluralEnding_w_Macron(const wchar_t suffix);

	void SetSingularTranslations(std::vector<std::string>& suffixes);
	void SetPluralTranslations(std::vector<std::string>& suffixes);

	void AddToSingularTranslations(const char* suffix);
	void AddToSingularTranslations_Prefixes(const char* prefix);
	void AddToPluralTranslations(const char* suffix);
	void AddToPluralTranslations_Prefixes(const char* prefix);
	
	
};








