#include "Noun.h"

Noun::Noun() {}

Noun::Noun(const std::string& word, const Declension& declension, const std::string& latinDefinition, const std::string& englishDefinition,
    const Gender& gender)
    : word(word), declension(declension), latinDefinition(latinDefinition), englishDefinition(englishDefinition), gender(gender) {}

const char* Noun::getWord() const {
    return word.c_str();
}

void Noun::setWord(const std::string& newWord) {
    word = newWord;
}

const Declension& Noun::getDeclension() const {
    return declension;
}

void Noun::setDeclension(const Declension& newDeclension) {
    declension = newDeclension;
}

const char* Noun::getLatinDefinition() const {
    return latinDefinition.c_str();
}

void Noun::setLatinDefinition(const std::string& newLatinDefinition) {
    latinDefinition = newLatinDefinition;
}

const char* Noun::getEnglishDefinition() const {
    return englishDefinition.c_str();
}

void Noun::setEnglishDefinition(const std::string& newEnglishDefinition) {
    englishDefinition = newEnglishDefinition;
}

Gender Noun::getGender() const {
    return gender;
}

void Noun::setGender(const Gender& newGender) {
    gender = newGender;
}

void Noun::display() const {
    std::cout << "Word: " << word << std::endl;
    std::cout << "Nominative: " << declension.nominative << std::endl;
    std::cout << "Genitive: " << declension.genitive << std::endl;
    std::cout << "Dative: " << declension.dative << std::endl;
    std::cout << "Accusative: " << declension.accusative << std::endl;
    std::cout << "Ablative: " << declension.ablative << std::endl;
    std::cout << "Vocative: " << declension.vocative << std::endl;
    std::cout << "Latin Definition: " << latinDefinition << std::endl;
    std::cout << "English Definition: " << englishDefinition << std::endl;
    std::cout << "Gender: " << gender.getGender() << std::endl;
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
    size_t pos = declension.genitive.find_last_of(' ');
    if (pos != std::string::npos) {
        return declension.genitive.substr(0, pos);
    }
    return declension.genitive;
}
