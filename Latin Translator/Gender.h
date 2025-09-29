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
	Gender(char genderInitial);
	~Gender();
	void Dispose();

	void SetGender(std::string _gender);

	std::string GetGender() const;

	void SetMasculine();
	void SetFeminine();
	void SetNeuter();
	void SetUnknown();

	bool IsMasculine() const;
	bool IsFeminine() const;
	bool IsNeuter() const;
	bool IsValid() const;
};