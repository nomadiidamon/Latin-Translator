#include "Number.h"

Number::Number() 
	: singular(false), plural(false), both(false)
{
	SetUnknown();
}

Number::Number(std::string _number)
	: singular(false), plural(false), both(false)
{
	if (_number == "Singular" || _number == "singular" || _number == "Sing" || _number == "sing") {
		SetSingular();
	}
	else if (_number == "Plural" || _number == "plural" || _number == "Plur" || _number == "plur") {
		SetPlural();
	}
	else if (_number == "Both" || _number == "both" || _number == "B" || _number == "b") {
		SetBoth();
	}
	else {
		SetUnknown();
	}
}

Number::~Number()
{
	Dispose();
}

void Number::Dispose()
{
	SetUnknown();
}

void Number::SetSingular()
{
	singular = true;
	plural = false;
	both = false;
}

void Number::SetPlural()
{
	singular = false;
	plural = true;
	both = false;
}

void Number::SetBoth()
{
	singular = false;
	plural = false;
	both = true;
}

void Number::SetUnknown()
{
	singular = false;
	plural = false;
	both = false;
}

std::string Number::GetNumber() const
{
	if (both) {
		return "Both";
	}
	else if (singular) {
		return "Singluar";
	}
	else if (plural) {
		return "Plural";
	}
	return "Unknown";
}

bool Number::IsSingular() const
{
	if (singular) {
		return true;
	}
	else  {
		return false;
	}
}

bool Number::IsPlural() const
{
	if (plural) {
		return true;
	}
	else {
		return false;
	}
}

bool Number::IsBoth() const
{
	if (both) {
		return true;
	}
	else {
		return false;
	}
}

bool Number::IsUnknown() const
{
	if (!singular && !plural && !both) {
		return true;
	}
	else {
		return false;
	}
}
