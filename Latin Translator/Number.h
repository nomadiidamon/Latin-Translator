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
	bool IsSingular();
	bool IsPlural();
	bool IsUnknown();

private:
	bool singular;
	bool plural;
	bool unknown;
	std::string number;
};

