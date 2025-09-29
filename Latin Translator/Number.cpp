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
	else if (_number == "Both" || _number == "both") {
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
	singular = true;
	plural = true;
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
	if (singular) {
		return "Singluar";
	}
	else if (plural) {
		return "Plural";
	}
	else if (both) {
		return "Both";
	}
	return "Unknown";
}

bool Number::IsSingular()
{
	if (singular) {
		return true;
	}
	else  {
		return false;
	}
}

bool Number::IsPlural()
{
	if (plural) {
		return true;
	}
	else {
		return false;
	}
}

bool Number::IsBoth()
{
	if (both) {
		return true;
	}
	else {
		return false;
	}
}

bool Number::IsUnknown()
{
	if (both) {
		return true;
	}
	else {
		return false;
	}
}
