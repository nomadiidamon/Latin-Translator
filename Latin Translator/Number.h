#pragma once
#include <string>
class Number
{
public:
	Number();
	Number(std::string _number);
	
	~Number();
	void Dispose();
	void SetSingular();
	void SetPlural();
	void SetBoth();
	void SetUnknown();
	std::string GetNumber() const;
	bool IsSingular();
	bool IsPlural();
	bool IsBoth();	
	bool IsUnknown();

private:
	bool singular;
	bool plural;
	bool both;
};

