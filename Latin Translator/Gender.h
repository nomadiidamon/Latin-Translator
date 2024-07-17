#pragma once
#include <string>

class Gender {
private:
	bool masculine;
	bool feminine;
	bool neuter;

public:
	Gender();
	Gender(std::string _gender);

	void SetGender(std::string _gender);

	std::string GetGender() const;

	void SetMasculine();
	void SetFeminine();
	void SetNeuter();
	void SetUnknown();
};