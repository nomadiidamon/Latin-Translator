#pragma once
#include <string>
#include "Declension.h"
#include "Macrons.h"

class GenitiveCase
{
private:
	std::string singularEnding = "";
	std::wstring singularEnding_w_macron = L"";
	std::string pluralEnding = "";
	std::wstring pluralEnding_w_macron = L"";
	std::string explanation = "";
	std::string singularTranslation1 = "";
	std::string singularTranslation2 = "";
	std::string singularTranslation3 = "";
	std::string singularTranslation4 = "";
	std::string pluralTranslation1 = "";
	std::string pluralTranslation2 = "";
	Declension dec;

public:

	GenitiveCase();

	void ApplyDeclension(std::string _declension);
	std::string SingularEnding() const;
	std::wstring SingularEnding_w_Macron() const;
	std::string PluralEnding() const;
	std::wstring PluralEnding_w_Macron() const;
	std::string SingularTranslation1() const;
	std::string SingularTranslation2() const;
	std::string SingularTranslation3() const;
	std::string SingularTranslation4() const;
	std::string PluralTranslation1() const;
	std::string PluralTranslation2() const;
	std::string Explanation() const;

	void SetSingularEnding(const char* thing);
	void SetSingularEnding_w_Macron(wchar_t thing1, const char thing2);
	void SetSingularEnding_w_Macron(const wchar_t thing);
	void SetPluralEnding(const char* thing);
	void SetPluralEnding_w_Macron(wchar_t thing1, const char thing2);
	void SetPluralEnding_w_Macron(const wchar_t thing);
	void SetSingularTranslation1(std::string addition);
	void SetSingularTranslation2(std::string addition);
	void SetSingularTranslation3(std::string addition);
	void SetSingularTranslation4(std::string addition);
	void SetPluralTranslation1(std::string addition);
	void SetPluralTranslation2(std::string addition);
	void SetExplanation(std::string info);







};

