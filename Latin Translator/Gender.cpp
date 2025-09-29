#include "Gender.h"

Gender::Gender() 
	: masculine(false), feminine(false), neuter(false) 
{

}
Gender::Gender(std::string _gender) 
	: masculine(false), feminine(false), neuter(false)
{
	SetGender(_gender);
}

Gender::Gender(char genderInitial)
{
	if (genderInitial == 'M' || genderInitial == 'm') {
		SetMasculine();
	}
	else if (genderInitial == 'F' || genderInitial == 'f') {
		SetFeminine();
	}
	else if (genderInitial == 'N' || genderInitial == 'n') {
		SetNeuter();
	}
	else {
		SetUnknown();
	}
}

Gender::~Gender()
{
	Dispose();
}

void Gender::Dispose()
{
	SetUnknown();
}

void Gender::SetGender(std::string _gender) {
	if (_gender == "Masculine" || _gender == "Masc" || _gender == "M" || _gender == "m") {
		SetMasculine();
	}
	else if (_gender == "Feminine" || _gender == "Fem" || _gender == "F" || _gender == "f") {
		SetFeminine();
	}
	else if (_gender == "Neuter" || _gender == "Neut" || _gender == "N" || _gender == "n") {
		SetNeuter();
	}
	else {
		SetUnknown();
	}
}

std::string Gender::GetGender() const {
	if (masculine)
		return "Masculine";
	else if (feminine)
		return "Feminine";
	else if (neuter)
		return "Neuter";
	return "Unknown";
}

void Gender::SetMasculine() {
	masculine = true;
	feminine = false;
	neuter = false;
}
void Gender::SetFeminine() {
	masculine = false;
	feminine = true;
	neuter = false;
}
void Gender::SetNeuter() {
	masculine = false;
	feminine = false;
	neuter = true;
}
void Gender::SetUnknown() {
	masculine = false;
	feminine = false;
	neuter = false;
}

bool Gender::IsMasculine() const
{
	return masculine;
}

bool Gender::IsFeminine() const
{
	return feminine;
}

bool Gender::IsNeuter() const
{
	return neuter;
}

bool Gender::IsValid() const
{
	if (masculine || feminine || neuter) {
		return true;
	}
	return false;
}
