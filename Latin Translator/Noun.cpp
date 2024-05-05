#include "Noun.h"

Noun::Noun() {}

Noun::Noun(std::string _declension, std::string _gender, std::string _nominative, std::string _genitive, std::string _definition)
    : declension(_declension), gender(_gender), nominative(_nominative), genitive(_genitive), definition(_definition)
{
}

const char* Noun::Nominative() const {
    return nominative.c_str();
}
void Noun::SetNominative(const std::string& newWord) {
    nominative = newWord;
}
const char* Noun::Genitive() const
{
    return genitive.c_str();
}
void Noun::SetGenitive(const std::string& newWord)
{
    genitive = newWord;
}
const Declension& Noun::getDeclension() const {
    return declension;
}
void Noun::SetDeclension(const Declension& newDeclension) {
    declension = newDeclension;
}

const char* Noun::Definition() const {
    return definition.c_str();
}

void Noun::SetDefinition(const std::string& newLatinDefinition) {
    definition = newLatinDefinition;
}

void Noun::display() const {
    std::cout << "Declension: " << declension.GetDeclension() << std::endl;
    std::cout << "Gender: " << gender.getGender() << std::endl;
    std::cout << "Nominative & Genitive: " << nominative << ", " << genitive << std::endl;
    std::cout << "Definition: " << Definition() << std::endl;

    std::cout << "Forms With Macrons:\n" << std::endl;
    std::cout << "Nominative: " << nominative << std::endl;
    std::cout << "Genitive: " << genitive << std::endl;
    std::cout << "Dative: " << base;
    std::wcout << declension.Dat.SingularEnding_w_Macron() << std::endl;
    std::cout << "Accusative: " << declension.accusative << std::endl;
    std::cout << "Ablative: " << declension.ablative << std::endl;
    std::cout << "Vocative: " << declension.vocative << std::endl;

    std::cout << "Forms Without Macrons:\n" << std::endl;
    std::cout << "Nominative: " << declension.nominative << std::endl;
    std::cout << "Genitive: " << declension.genitive << std::endl;
    std::cout << "Dative: " << declension.dative << std::endl;
    std::cout << "Accusative: " << declension.accusative << std::endl;
    std::cout << "Ablative: " << declension.ablative << std::endl;
    std::cout << "Vocative: " << declension.vocative << std::endl;

    std::cout << "Synonyms:" << std::endl;
    for (const auto& synonym : synonyms) {
        std::cout << "- " << synonym << std::endl;
    }
}

void Noun::serialize(const std::string& filename) const {
    std::ofstream file(filename, std::ios::binary);
    if (file.is_open()) {
        file.write(reinterpret_cast<const char*>(this), sizeof(*this));
        file.close();
    }
    else {
        std::cerr << "Error: Unable to open file for writing." << std::endl;
    }
}

void Noun::deserialize(const std::string& filename) {
    std::ifstream file(filename, std::ios::binary);
    if (file.is_open()) {
        file.read(reinterpret_cast<char*>(this), sizeof(*this));
        file.close();
    }
    else {
        std::cerr << "Error: Unable to open file for reading." << std::endl;
    }
}

std::string Noun::GetBase() const {
    // Find the last index of the genitive
    //size_t pos = declension.genitive.find_last_of(' ');
    //if (pos != std::string::npos) {
    //    return declension.genitive.substr(0, pos);
    //}
    //return declension.genitive;
    return base;
}

void Noun::SetBase()
{
    base = genitive;
    int x = declension.Gen.SingularEnding().length();
    for (int i = 0; i < x; i++) {
        base.pop_back();
    }
}