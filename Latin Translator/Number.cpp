#include "Number.h"

Number::Number() : singular(false), plural(false), unknown(true), number()
{
}

Number::Number(std::string _number)
	: singular(false), plural(false), unknown(true), number()
{
}

void Number::SetSingular()
{
	singular = true;
	plural = false;
	unknown = false;
}

void Number::SetPlural()
{
	singular = false;
	plural = true;
	unknown = false;
}

void Number::SetUnknown()
{
	singular = false;
	plural = false;
	unknown = true;
}

std::string Number::GetNumber()
{
	if (singular) {
		return "Singluar";
	}
	else if (plural) {
		return "Plural";
	}
	else 
	return "Unknown";
}

bool Number::isSingular()
{
	if (singular) {
		return true;
	}
	else  {
		return false;
	}
}

bool Number::isPlural()
{
	if (plural) {
		return true;
	}
	else {
		return false;
	}
}

bool Number::isUnknown()
{
	if (unknown) {
		return true;
	}
	else {
		return false;
	}
}
