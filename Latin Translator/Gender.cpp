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

void Gender::SetGender(std::string _gender) {
	if (_gender == "Masculine" || _gender == "Masc" || _gender == "M") {
		SetMasculine();
	}
	else if (_gender == "Feminine" || _gender == "Fem" || _gender == "F") {
		SetFeminine();
	}
	else if (_gender == "Neuter" || _gender == "Neut" || _gender == "N") {
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