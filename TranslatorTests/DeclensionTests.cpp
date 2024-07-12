#include "CppUnitTest.h"
#include "../Latin Translator/Declension.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TranslatorTests
{
	TEST_CLASS(DeclensionTests)
	{
	public:

		TEST_METHOD(Blank_Constructor)
		{
			Declension dec;
			Assert::IsFalse(dec.first);
			Assert::IsFalse(dec.second);
			Assert::IsFalse(dec.third);
			Assert::IsFalse(dec.fourth);
			Assert::IsFalse(dec.fifth);
			std::string empty = "";
			Assert::AreEqual(dec.declension, empty);


		}

		TEST_METHOD(String_Constructor)
		{
		}

		TEST_METHOD(MakeFirst)
		{
		}

		TEST_METHOD(MakeSecond)
		{
		}

		TEST_METHOD(MakeThird)
		{
		}

		TEST_METHOD(MakeFourth)
		{
		}

		TEST_METHOD(MakeFifth)
		{
		}

		TEST_METHOD(SetDeclension)
		{
		}

		TEST_METHOD(GetDeclension)
		{
		}
	};
}
