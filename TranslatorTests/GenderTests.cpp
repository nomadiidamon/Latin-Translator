#include "CppUnitTest.h"
#include "../Latin Translator/Gender.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TranslatorTests
{
	TEST_CLASS(GenderTests)
	{
	public:

		TEST_METHOD(blankConstructor)
		{
			Gender gender;
			Assert::IsTrue(!gender.IsValid());

			gender.SetFeminine();
			Assert::IsTrue(gender.IsFeminine());

			gender.SetMasculine();
			Assert::IsTrue(gender.IsMasculine());

			gender.SetNeuter();
			Assert::IsTrue(gender.IsNeuter());

		}

		TEST_METHOD(stringConstructor_masculine)
		{
			Gender genderMasculine("Masculine");
			Assert::IsTrue(genderMasculine.IsMasculine());

			Gender genderMasculineAbbrev("Masc");
			Assert::IsTrue(genderMasculineAbbrev.IsMasculine());

			Gender genderMasculineInitialUpper("M");
			Assert::IsTrue(genderMasculineInitialUpper.IsMasculine());

			Gender genderMasculineInitialLower("m");
			Assert::IsTrue(genderMasculineInitialLower.IsMasculine());			 
		}

		TEST_METHOD(stringConstructor_feminine)
		{
			Gender genderFeminine("Feminine");
			Assert::IsTrue(genderFeminine.IsFeminine());

			Gender genderFeminineAbbrev("Fem");
			Assert::IsTrue(genderFeminineAbbrev.IsFeminine());

			Gender genderFeminineInitialUpper("F");
			Assert::IsTrue(genderFeminineInitialUpper.IsFeminine());

			Gender genderFeminineInitialLower("f");
			Assert::IsTrue(genderFeminineInitialLower.IsFeminine());
		}

		TEST_METHOD(stringConstructor_neuter)
		{
			Gender genderNeuter("Neuter");
			Assert::IsTrue(genderNeuter.IsNeuter());

			Gender genderNeuterAbbrev("Neut");
			Assert::IsTrue(genderNeuter.IsNeuter());

			Gender genderNeuterInitialUpper("N");
			Assert::IsTrue(genderNeuterInitialUpper.IsNeuter());

			Gender genderNeuterInitialLower("n");
			Assert::IsTrue(genderNeuterInitialLower.IsNeuter());
		}

		TEST_METHOD(stringConstructor_unknown)
		{
			Gender genderUnknown("Unknown");
			Assert::IsTrue(!genderUnknown.IsValid());

			Gender genderInvalid("Invalid");
			Assert::IsTrue(!genderInvalid.IsValid());
		}

		TEST_METHOD(charConstructor_masculine)
		{
			Gender genderMasculineUpper('M');
			Assert::IsTrue(genderMasculineUpper.IsMasculine());

			Gender genderMasculineLower('m');
			Assert::IsTrue(genderMasculineLower.IsMasculine());
		}

		TEST_METHOD(charConstructor_feminine)
		{
			Gender genderFeminineUpper('F');
			Assert::IsTrue(genderFeminineUpper.IsFeminine());

			Gender genderFeminineLower('f');
			Assert::IsTrue(genderFeminineLower.IsFeminine());
		}

		TEST_METHOD(charConstructor_neuter)
		{
			Gender genderNeuterUpper('N');
			Assert::IsTrue(genderNeuterUpper.IsNeuter());

			Gender genderNeuterLower('n');
			Assert::IsTrue(genderNeuterLower.IsNeuter());
		}

		TEST_METHOD(charConstructor_unknown)
		{
			Gender genderUnknown('X');
			Assert::IsTrue(!genderUnknown.IsValid());

			Gender genderInvalid('1');
			Assert::IsTrue(!genderInvalid.IsValid());

			Gender genderEmpty('\0');
			Assert::IsTrue(!genderEmpty.IsValid());

			Gender genderSpace(' ');
			Assert::IsTrue(!genderSpace.IsValid());
					}

		TEST_METHOD(GetGenderString)
		{
			Gender test("Masculine");
			Assert::AreEqual(std::string("Masculine"), test.GetGender());
			test.SetFeminine();
			Assert::AreEqual(std::string("Feminine"), test.GetGender());
			test.SetNeuter();
			Assert::AreEqual(std::string("Neuter"), test.GetGender());
			test.SetUnknown();
			Assert::AreEqual(std::string("Unknown"), test.GetGender());
		}

	};
}