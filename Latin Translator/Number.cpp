#include "Number.h"

Number::Number() 
	: singular(false), plural(false), unknown(true), number()
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

bool Number::IsUnknown()
{
	if (unknown) {
		return true;
	}
	else {
		return false;
	}
}
