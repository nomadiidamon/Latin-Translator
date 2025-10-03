#include "Declension.h"

Declension::Declension()
	: first(false), second(false), third(false), fourth(false), fifth(false)
{

}

Declension::Declension(std::string _declension)
	: first(false), second(false), third(false), fourth(false), fifth(false), declension(_declension)
{
	if (_declension == "First" || _declension == "first" || _declension == "1") {
		declension = _declension;
		SetFirst();
	}
	else if (_declension == "Second" || _declension == "second" || _declension == "2") {
		declension = _declension;
		SetSecond();
	}
	else if (_declension == "Third" || _declension == "third" || _declension == "3") {
		declension = _declension;
		SetThird();
	}
	else if (_declension == "Fourth" || _declension == "fourth" || _declension == "4") {
		declension = _declension;
		SetFourth();
	}
	else if (_declension == "Fifth" || _declension == "fifth" || _declension == "5") {
		declension = _declension;
		SetFifth();
	}
	else {
		declension = "ERROR";
	}
}

Declension::Declension(int _declension)
	: first(false), second(false), third(false), fourth(false), fifth(false)
{
	if (_declension == 1) {
		SetFirst();
	}
	else if (_declension == 2) {
		SetSecond();
	}
	else if (_declension == 3) {
		SetThird();
	}
	else if (_declension == 4) {
		SetFourth();
	}
	else if (_declension == 5) {
		SetFifth();
	}
	else {
		declension = "ERROR";
	}
}

Declension::~Declension()
{
	Dispose();
}

void Declension::Dispose()
{
	declension.clear();
}

void Declension::SetFirst() {
	first = true;
	second = false;
	third = false;
	fourth = false;
	fifth = false;
	Apply();
}

void Declension::SetSecond() {
	first = false;
	second = true;
	third = false;
	fourth = false;
	fifth = false;
	Apply();
}

void Declension::SetThird() {
	first = false;
	second = false;
	third = true;
	fourth = false;
	fifth = false;
	Apply();
}

void Declension::SetFourth() {
	first = false;
	second = false;
	third = false;
	fourth = true;
	fifth = false;
	Apply();
}

void Declension::SetFifth() {
	first = false;
	second = false;
	third = false;
	fourth = false;
	fifth = true;
	Apply();
}

void Declension::Apply() {
	SetDeclension();

}

void Declension::SetDeclension() {
	if (first) {
		declension = "First";
	}
	else if (second) {
		declension = "Second";
	}
	else if (third) {
		declension = "Third";
	}
	else if (fourth) {
		declension = "Fourth";
	}
	else if (fifth) {
		declension = "Fifth";
	}
	else
	{
		declension = "ERROR";
	}
}

std::string Declension::GetDeclensionString() const {
	return declension;
}

int Declension::GetDeclensionNumber() const
{
	if (declension == "First") {
		return 1;
	}
	else if (declension == "Second") {
		return 2;
	}
	else if (declension == "Third") {
		return 3;
	}
	else if (declension == "Fourth") {
		return 4;
	}
	else if (declension == "Fifth") {
		return 5;
	}
	else {
		return -1;
	}
}

bool Declension::IsValid() const
{
	if (declension == "ERROR") {
		return false;
	}
	else {
		return true;
	}
}

