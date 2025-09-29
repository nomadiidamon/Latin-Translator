#include "Noun.h"

Noun::Noun()
{

}

Noun::Noun(std::string _declension, std::string _gender, std::string _number, std::string _nominative, std::string _genitive, std::string _definition)
	: declension(_declension), gender(_gender), number(_number), nominative_singular(_nominative), genitive_singular(_genitive), definition(_definition)
{
	declension = Declension(_declension);
	int decNum = declension.GetDeclensionNumber();
	nom = NominativeCase(decNum);
	gen = GenitiveCase(decNum);
	dat = DativeCase(decNum);
	acc = AccusativeCase(decNum);
	abl = AblativeCase(decNum);
	voc = VocativeCase(decNum);

	nominative_singular = _nominative;
	genitive_singular = _genitive;
	definition = _definition;

	SetBase();
	SetForms();
}

Noun::~Noun()
{
	Dispose();
}

void Noun::Dispose()
{
	declension.Dispose();
	gender.Dispose();
	number.Dispose();

	nom.Dispose();
	gen.Dispose();
	dat.Dispose();
	acc.Dispose();
	abl.Dispose();
	voc.Dispose();

	nominative_singular.clear();
	genitive_singular.clear();
	dative_singular.clear();
	accusative_singular.clear();
	ablative_singular.clear();
	vocative_singular.clear();

	nominative_plural.clear();
	genitive_plural.clear();
	dative_plural.clear();
	accusative_plural.clear();
	ablative_plural.clear();
	vocative_plural.clear();

	definition.clear();
	base.clear();
}

std::string Noun::NominativeSingular() const {
	return nominative_singular;
}
std::string Noun::NominativePlural() const
{
	return nominative_plural;
}

std::string Noun::GenitiveSingular() const
{
	return genitive_singular;
}
std::string Noun::GenitivePlural() const
{
	return genitive_plural;
}

std::string Noun::DativeSingular() const
{
	return dative_singular;
}
std::string Noun::DativePlural() const
{
	return dative_plural;
}

std::string Noun::AccusativeSingular() const
{
	return accusative_singular;
}
std::string Noun::AccusativePlural() const
{
	return accusative_plural;
}

std::string Noun::AblativeSingular() const
{
	return ablative_singular;
}
std::string Noun::AblativePlural() const
{
	return ablative_plural;
}

std::string Noun::VocativeSingular() const
{
	return vocative_singular;
}
std::string Noun::VocativePlural() const
{
	return vocative_plural;
}

void Noun::SetForms()
{
	SetNominativeForms();
	SetGenitiveForms();
	SetDativeForms();
	SetAccusativeForms();
	SetAblativeForms();
	SetVocativeForms();
}

bool Noun::FindForm(std::string toFind, std::string& outFoundCase)
{
	if (toFind == NominativeSingular() || toFind == NominativePlural()) {
		outFoundCase = "Nominative";
		return true;
	}
	else if (toFind == GenitiveSingular() || toFind == GenitivePlural()) {
		outFoundCase = "Genitive";
		return true;
	}
	else if (toFind == DativeSingular() || toFind == DativePlural()) {
		outFoundCase = "Dative";
		return true;
	}
	else if (toFind == AccusativeSingular() || toFind == AccusativePlural()) {
		outFoundCase = "Accusative";
		return true;
	}
	else if (toFind == AblativeSingular() || toFind == AblativePlural()) {
		outFoundCase = "Ablative";
		return true;
	}
	else if (toFind == VocativeSingular() || toFind == VocativePlural()) {
		outFoundCase = "Vocative";
		return true;
	}
	return false;
}

const Declension& Noun::GetDeclension() const {
	return declension;
}

void Noun::SetDeclension(const Declension& newDeclension) {
	declension = newDeclension;
}

void Noun::SetNumber(const Number& newNumber)
{
	number = newNumber;
}

void Noun::SetNumber(const std::string& newNumber)
{
	number = Number(newNumber);
}

void Noun::SetGender(const Gender& newGender)
{
	gender = newGender;
}

void Noun::SetGender(const std::string& newGender)
{
	gender = Gender(newGender);
}

std::string Noun::GetNumber() const
{
	return number.GetNumber();
}

void Noun::SetNominativeSingular(const std::string& newNominativeSingular)
{
	nominative_singular = newNominativeSingular;
}

void Noun::SetNominativeForms()
{
	SetNominativeSingularForm();
	SetNominativePluralForm();
}

void Noun::SetNominativeSingularForm()
{
	nominative_singular = nominative_singular;
}

void Noun::SetNominativePluralForm()
{
	nominative_plural = base + nom.PluralEnding();
}

void Noun::SetGenitiveSingular(const std::string& newGenitiveSingular)
{
	genitive_singular = newGenitiveSingular;
}

void Noun::SetGenitiveForms()
{
	SetGenitiveSingularForm();
	SetGenitivePluralForm();
}

void Noun::SetGenitiveSingularForm()
{
	genitive_singular = genitive_singular;
}

void Noun::SetGenitivePluralForm()
{
	genitive_plural = base + gen.PluralEnding();
}

void Noun::SetDativeForms()
{
	SetDativeSingularForm();
	SetDativePluralForm();
}

void Noun::SetDativeSingularForm()
{
	dative_singular = base + dat.SingularEnding();
}

void Noun::SetDativePluralForm()
{
	dative_plural = base + dat.PluralEnding();
}

void Noun::SetAccusativeForms()
{
	SetAccusativeSingularForm();
	SetAccusativePluralForm();
}

void Noun::SetAccusativeSingularForm()
{
	accusative_singular = base + acc.SingularEnding();
}

void Noun::SetAccusativePluralForm()
{
	accusative_plural = base + acc.PluralEnding();
}

void Noun::SetAblativeForms()
{
	SetAblativeSingularForm();
	SetAblativePluralForm();
}

void Noun::SetAblativeSingularForm()
{
	ablative_singular = base + abl.SingularEnding();
}

void Noun::SetAblativePluralForm()
{
	ablative_plural = base + abl.PluralEnding();
}

void Noun::SetVocativeForms()
{
	SetVocativeSingularForm();
	SetVocativePluralForm();
}

void Noun::SetVocativeSingularForm()
{
	vocative_singular = base + voc.SingularEnding();
}

void Noun::SetVocativePluralForm()
{
	vocative_plural = base + voc.PluralEnding();
}

std::string Noun::Definition() const {
	return definition.c_str();
}

void Noun::SetDefinition(const std::string& newLatinDefinition) {
	definition = newLatinDefinition;
}

void Noun::ShowSingular() {
	std::cout << "Singular Forms:" << std::endl;
	std::cout << "Nominative: " << NominativeSingular() << std::endl;
	std::cout << "Genitive: " << GenitiveSingular() << std::endl;
	std::cout << "Dative: " << DativeSingular() << std::endl;
	std::cout << "Accusative: " << AccusativeSingular() << std::endl;
	std::cout << "Ablative: " << AblativeSingular() << std::endl;
	std::cout << "Vocative: " << VocativeSingular() << std::endl;
}

void Noun::ShowPlural() {
	std::cout << "Plural Forms:" << std::endl;
	std::cout << "Nominative: " << NominativePlural() << std::endl;
	std::cout << "Genitive: " << GenitivePlural() << std::endl;
	std::cout << "Dative: " << DativePlural() << std::endl;
	std::cout << "Accusative: " << AccusativePlural() << std::endl;
	std::cout << "Ablative: " << AblativePlural() << std::endl;
	std::cout << "Vocative: " << VocativePlural() << std::endl;
}

void Noun::SimpleDisplay() const {
	std::cout << "Gender: " << gender.GetGender() << std::endl;
	std::cout << "Nominative & Genitive: " << NominativeSingular() << ", " << GenitiveSingular() << std::endl;
	std::cout << "Definition: " << Definition() << std::endl;
}

void Noun::Display() {
	std::cout << "Declension: " << declension.GetDeclensionNumber() << std::endl;
	std::cout << "Gender: " << gender.GetGender() << std::endl;
	std::cout << "Nominative & Genitive: " << NominativeSingular() << ", " << GenitiveSingular() << std::endl;
	std::cout << "Definition: " << Definition() << std::endl;
	std::cout << std::endl;

	ShowSingular();
	std::cout << std::endl;

	ShowPlural();
	std::cout << "<------------------------->" << std::endl;

}

void Noun::Serialize(const std::string& filename) const {
	std::ofstream file;
	file.open(filename, std::ios::binary);
	if (file.is_open()) {
		file.write(filename.c_str(), sizeof(Noun));
		file.close();
	}
	else {
		std::cerr << "Error: Unable to open file for writing." << std::endl;
	}
}

void Noun::SerializeToJson(const std::string& filename, const std::string& arrayName) const
{
	json j;
	j["Noun"] = nominative_singular;
	j["Declension"] = declension.GetDeclensionString();
	j["Gender"] = gender.GetGender();

	if (number.IsBoth()) j["Number"] = "Both";
	else if (number.IsSingular()) j["Number"] = "Singular";
	else if (number.IsPlural()) j["Number"] = "Plural";
	else j["Number"] = "Unknown";

	j["Nominative"] = nominative_singular;
	j["Genitive"] = genitive_singular;
	j["Definition"] = definition;

	json root;
	std::ifstream infile(filename);
	if (infile.is_open() && infile.peek() != std::ifstream::traits_type::eof()) {
		try {
			infile >> root;
			if (!root.is_object() || !root.contains("Items") || !root["Items"].is_array()) {
				std::cerr << "Warning: existing JSON not in expected format, overwriting." << std::endl;
				root = json::object();
				root["ArrayName"] = "Nouns";
				root["Items"] = json::array();
			}
		}
		catch (const std::exception& e) {
			std::cerr << "Error parsing JSON, overwriting: " << e.what() << std::endl;
			root = json::object();
			root["ArrayName"] = "Nouns";
			root["Items"] = json::array();
		}
	}
	else {
		// fresh file
		root["ArrayName"] = "Nouns";
		root["Items"] = json::array();
	}

	// append
	root["Items"].push_back(j);
	root["Count"] = root["Items"].size();

	std::ofstream outfile(filename, std::ios::trunc);
	if (outfile.is_open()) {
		outfile << root.dump(4);
	}
	else {
		std::cerr << "Error: Unable to open file for writing." << std::endl;
	}
}


void Noun::Deserialize(const std::string& filename) {
	std::ifstream file;
	file.open(filename, std::ios::binary);
	if (file.is_open()) {
		file.read((char*)this, sizeof(Noun));
		file.close();
	}
	else {
		std::cerr << "Error: Unable to open file for reading." << std::endl;
	}
}

void Noun::DeserializeFromJson(const std::string& filename)
{
	std::string json_string;
	std::ofstream file(filename);
	if (file.is_open()) {
		file << json_string;
		file.close();
		json j = json::parse(json_string);

		std::string dec = j["Declension"];
		std::string gender = j["Gender"];
		std::string number = j["Number"];
		std::string nom = j["Nominative"];
		std::string gen = j["Genitive"];
		std::string def = j["Definition"];

		Noun noun(dec, gender, number, nom, gen, def);
		*this = noun;
	}
	else {
		std::cerr << "Error: Unable to open file for reading." << std::endl;
		return;
	}
}


bool Noun::DeserializeNounsFromJson(const std::string& filename, std::vector<Noun>& nouns)
{
	std::ifstream infile(filename);
	if (!infile.is_open()) {
		std::cerr << "Error: Cannot open file " << filename << std::endl;
		return false;
	}

	json root;
	try {
		infile >> root;
	}
	catch (const std::exception& e) {
		std::cerr << "Error parsing JSON: " << e.what() << std::endl;
		return false;
	}

	// Validate structure
	if (!root.is_object() || !root.contains("Items") || !root["Items"].is_array()) {
		std::cerr << "Error: JSON format is invalid." << std::endl;
		return false;
	}

	int count = root.value("Count", static_cast<int>(root["Items"].size()));
	std::cout << "ArrayName: " << root.value("ArrayName", "Unknown") << "\n";
	std::cout << "Count: " << count << "\n";

	nouns.clear();
	for (const auto& item : root["Items"]) {
		// Pull fields safely
		//if (item.contains("Noun"))        //n. = item["Noun"].get<std::string>();
		//if (item.contains("Declension"))  n.SetDeclension(Declension(item["Declension"].get<std::string>()));
		//if (item.contains("Gender"))      n.SetGender(Gender(item["Gender"].get<std::string>()));
		//if (item.contains("Number")) {
		//	std::string num = item["Number"];
		//	if (num == "Singular") n.SetNumber("Singular");
		//	else if (num == "Plural") n.SetNumber("Plural");
		//	else if (num == "Both") n.SetNumber("Both");
		//	else n.SetNumber("Unknown");
		//}
		//if (item.contains("Nominative"))  n.SetNominativeSingular(item["Nominative"].get<std::string>());
		//if (item.contains("Genitive"))    n.SetGenitiveSingular(item["Genitive"].get<std::string>());
		//if (item.contains("Definition"))  n.SetDefinition(item["Definition"].get<std::string>());
		std::string dec;
		std::string gend;
		std::string number;
		std::string nom;
		std::string geni;
		std::string definition;

		if (item.contains("Noun")) {}
		if (item.contains("Declension")) {
			dec = item["Declension"].get<std::string>();
		}
		if (item.contains("Gender")) {
			gend = item["Gender"].get<std::string>();
		}
		if (item.contains("Number")) {
			number = item["Number"].get<std::string>();
		}
		if (item.contains("Nominative")) {
			nom = item["Nominative"].get<std::string>();
		}
		if (item.contains("Genitive")) {
			geni = item["Genitive"].get<std::string>();
		}
		if (item.contains("Definition")) {
			definition = item["Definition"].get<std::string>();
		}
		Noun n(dec, gend, number, nom, geni, definition);
		nouns.push_back(std::move(n));
	}
	return true;
}

bool Noun::QuickSerializeToJson(const std::string& filename, const std::string& arrayName) const
{
	json j;
	j["Noun"] = nominative_singular;
	j["Declension"] = declension.GetDeclensionString();
	j["Gender"] = gender.GetGender();

	if (number.IsBoth()) {
		j["Number"] = "Both";
	}
	else if (number.IsSingular()) {
		j["Number"] = "Singular";
	}
	else if (number.IsPlural()) {
		j["Number"] = "Plural";
	}
	else {
		j["Number"] = "Unknown";
	}

	j["Nominative"] = nominative_singular;
	j["Genitive"] = genitive_singular;
	j["Definition"] = definition;

	std::fstream file(filename, std::ios::in | std::ios::out | std::ios::binary);

	if (!file.is_open()) {
		// File doesn’t exist yet ? create a new array
		std::ofstream newfile(filename, std::ios::out | std::ios::binary);
		if (!newfile.is_open()) {
			std::cerr << "Error: Unable to create file." << std::endl;
			return false;
		}
		newfile << "[\n" << j.dump(4) << "\n]";
		return true;
	}

	// File exists, check size
	file.seekg(0, std::ios::end);
	std::streampos size = file.tellg();

	if (size <= 0) {
		// Empty file ? write new array
		file.close();
		std::ofstream newfile(filename, std::ios::out | std::ios::binary);
		newfile << "[\n" << j.dump(4) << "\n]";
		return true;
	}

	// Move back before the closing bracket ']'
	file.seekp(-1, std::ios::end);

	char lastChar;
	file.get(lastChar);

	if (lastChar != ']') {
		std::cerr << "Error: File is not a JSON array." << std::endl;
		file.close();
		return false;
	}

	// Back up one character (to overwrite ']')
	file.seekp(-1, std::ios::end);

	// Insert comma if not first element
	file.seekg(0, std::ios::beg);
	std::string firstChar;
	file >> firstChar;

	if (size > 2) { // more than just []
		file << ",\n" << j.dump(4) << "\n]";
	}
	else {
		// Was just "[]" ? replace with [ obj ]
		file << "\n" << j.dump(4) << "\n]";
	}

	file.close();
	return true;
}

std::string Noun::GetBase() const {
	return base;
}

void Noun::SetBase()
{
	base = genitive_singular;
	size_t x = gen.SingularEndingLength();
	for (int i = 0; i < x; i++) {
		base.pop_back();
	}
}