#pragma once
#include <string>



class Declension {
public:

	Declension();
	Declension(std::string _declension);
	void SetFirst();
	void SetSecond();
	void SetThird();
	void SetFourth();
	void SetFifth();
	void Apply();
	void SetDeclension();
	std::string GetDeclension() const;

private:

	bool first;
	bool second;
	bool third;
	bool fourth;
	bool fifth;
	std::string declension = "";

};

