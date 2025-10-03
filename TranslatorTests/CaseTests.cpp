#include "CppUnitTest.h"
#include "../Latin Translator/Case.h"
#include "../Latin Translator/Macrons.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TranslatorTests
{
	TEST_CLASS(CaseTests)
	{
	public:

		TEST_METHOD(blankConstructor_SingularFuncs)
		{
			Case latinCase;
			Assert::AreEqual(std::string(""), latinCase.SingularEnding());
			Assert::AreEqual(std::wstring(L""), latinCase.SingularEnding_w_Macron());
			Assert::AreEqual(0, latinCase.SingularTranslationsCount());
			Assert::AreEqual(0, latinCase.SingularTranslations_ArticlesCount());
		}

		TEST_METHOD(blankConstructor_pluralFuncs)
		{
			Case latinCase;
			Assert::AreEqual(std::string(""), latinCase.PluralEnding());
			Assert::AreEqual(std::wstring(L""), latinCase.PluralEnding_w_Macron());
			Assert::AreEqual(0, latinCase.PluralTranslationsCount());
			Assert::AreEqual(0, latinCase.PluralTranslations_ArticlesCount());
		}

		TEST_METHOD(SingularFuncs)
		{
			Case latinCase;
			latinCase.SetSingularEnding("us");
			Assert::AreEqual(std::string("us"), latinCase.SingularEnding());

			latinCase.SetSingularEnding_w_Macron(lower_i);
			Assert::AreEqual(std::wstring(&lower_i), latinCase.SingularEnding_w_Macron());

			latinCase.SetSingularEnding_w_Macron(lower_a, 's');
			Assert::AreEqual(std::wstring({ lower_a, 's'}), latinCase.SingularEnding_w_Macron());

			latinCase.SetSingularTranslations(std::vector<std::string>{"thing1", "thing2"});
			Assert::AreEqual(2, latinCase.SingularTranslationsCount());
			Assert::AreEqual(std::string("thing1"), latinCase.SingularTranslations()[0]);
			latinCase.AddToSingularTranslations("thing3");
			Assert::AreEqual(3, latinCase.SingularTranslationsCount());
		}

		TEST_METHOD(PluralFuncs)
		{
			Case latinCase;

			latinCase.SetPluralEnding("i");
			Assert::AreEqual(std::string("i"), latinCase.PluralEnding());

			latinCase.SetPluralEnding_w_Macron(lower_i);
			Assert::AreEqual(std::wstring(&lower_i), latinCase.PluralEnding_w_Macron());

			latinCase.SetPluralEnding_w_Macron(lower_a, 's');
			Assert::AreEqual(std::wstring({ lower_a, 's' }), latinCase.PluralEnding_w_Macron());

			latinCase.SetPluralTranslations(std::vector<std::string>{"thingA", "thingB"});
			Assert::AreEqual(2, latinCase.PluralTranslationsCount());
			Assert::AreEqual(std::string("thingA"), latinCase.PluralTranslations()[0]);
			latinCase.AddToPluralTranslations("thingC");
			Assert::AreEqual(3, latinCase.PluralTranslationsCount());
		
		}

		TEST_METHOD(Cleanup) 
		{
			Case latinCase;
			latinCase.SetSingularEnding("us");
			latinCase.SetPluralEnding("i");
			latinCase.AddToSingularTranslations("thing1");
			latinCase.AddToPluralTranslations("thingA");
			latinCase.Dispose();
			Assert::AreEqual(std::string(""), latinCase.SingularEnding());
			Assert::AreEqual(std::string(""), latinCase.PluralEnding());
			Assert::AreEqual(0, latinCase.SingularTranslationsCount());
			Assert::AreEqual(0, latinCase.PluralTranslationsCount());
		}

	};
}