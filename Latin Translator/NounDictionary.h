#pragma once

#include <vector>
#include <map>
#include <string>
#include "Noun.h"

const static std::string firstDeclensionNounsFile = "./Nouns/LatinDictionary_FirstDeclension.txt";
const static std::string secondDeclensionNounsFile = "./Nouns/LatinDictionary_SecondDeclension.txt";
const static std::string thirdDeclensionNounsFile = "./Nouns/LatinDictionary_ThirdDeclension.txt";
const static std::string fourthDeclensionNounsFile = "./Nouns/LatinDictionary_FourthDeclension.txt";
const static std::string fifthDeclensionNounsFile = "./Nouns/LatinDictionary_FifthDeclension.txt";

class NounDictionary
{
private:
	std::map<std::string, Noun> nounMap;

public:
	
	NounDictionary();
	~NounDictionary();
	void Dispose();
	
	void LoadNouns();
	void SaveNouns();
	void AddNoun(const Noun& noun);
	Noun* GetNoun(const std::string& latinWord);



};