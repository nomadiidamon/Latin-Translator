#pragma once
#include <string>

struct Gender {
	bool masculine;
	bool feminine;
	bool neuter;

	Gender() : masculine(false), feminine(false), neuter(false) {}
	Gender(std::string _gender) : masculine(false), feminine(false), neuter(false)
	{
		SetGender(_gender);
	}

	void SetGender(std::string _gender) {
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

	std::string getGender() const {
		if (masculine)
			return "Masculine";
		else if (feminine)
			return "Feminine";
		else if (neuter)
			return "Neuter";
		return "Unknown";
	}

	void SetMasculine() {
		masculine = true;
		feminine = false;
		neuter = false;
	}
	void SetFeminine() {
		masculine = false;
		feminine = true;
		neuter = false;
	}
	void SetNeuter() {
		masculine = false;
		feminine = false;
		neuter = true;
	}
	void SetUnknown() {
		masculine = false;
		feminine = false;
		neuter = false;
	}
};