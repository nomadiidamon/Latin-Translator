#pragma once
#include <string>
class Number
{
public:
	Number();
	Number(std::string _number);
	void SetSingular();
	void SetPlural();
	void SetUnknown();
	std::string GetNumber();
	bool isSingular();
	bool isPlural();
	bool isUnknown();

private:
	bool singular;
	bool plural;
	bool unknown;
	std::string number;
};

