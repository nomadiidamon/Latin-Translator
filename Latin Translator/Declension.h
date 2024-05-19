#pragma once
#include "Case.h"
#include "Macrons.h"

#define FIR_ENDS

#define SEC_ENDS

#define THI_ENDS

#define FRT_ENDS

#define FIF_ENDS

struct Declension {
	bool first;
	bool second;
	bool third;
	bool fourth;
	bool fifth;
	std::string declension;


	Declension() : first(false), second(false), 
		third(false), fourth(false), fifth(false)
	{	
	
	}

	Declension(std::string _declension)
		: first(false), second(false), third(false), 
		fourth(false), fifth(false), declension(_declension)
	{
		if (_declension == "First" || _declension == "first" || _declension == "1") {
			declension = _declension;
			SetFirst();
		}
		else if (_declension == "Second" || _declension == "second" || _declension == "2") {
			declension = _declension;
			SetSecond();
		}
		else if (_declension == "Third" || _declension == "third" || _declension == "3") {
			declension = _declension;
			SetThird();
		}
		else if (_declension == "Fourth" || _declension == "fourth" || _declension == "4") {
			declension = _declension;
			SetFourth();
		}
		else if (_declension == "Fifth" || _declension == "fifth" || _declension == "5") {
			declension = _declension;
			SetFifth();
		}
		else {
			declension = "ERROR";
		}
	}

	void SetFirst() {
		first = true;
		second = false;
		third = false;
		fourth = false;
		fifth = false;
		Apply();
	}

	void SetSecond() {
		first = false;
		second = true;
		third = false;
		fourth = false;
		fifth = false;
		Apply();
	}
	void SetThird() {
		first = false;
		second = false;
		third = true;
		fourth = false;
		fifth = false;
		Apply();
	}
	void SetFourth() {
		first = false;
		second = false;
		third = false;
		fourth = true;
		fifth = false;
		Apply();
	}
	void SetFifth() {
		first = false;
		second = false;
		third = false;
		fourth = false;
		fifth = true;
		Apply();
	}
	void Apply() {
		SetDeclension();
		ApplyDeclension(declension);
	}

	void SetDeclension() {
		if (first) {
			declension = "First";
		}
		else if (second) {
			declension = "Second";
		}
		else if (third) {
			declension = "Third";
		}
		else if (fourth) {
			declension = "Fourth";
		}
		else if (fifth) {
			declension = "Fifth";
		}
		else
		{
			declension = "ERROR";
		}
	}

	std::string GetDeclension() const {
		return declension;
	}



};