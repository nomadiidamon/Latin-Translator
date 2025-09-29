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

			Declension one;
			one.SetFirst();
			std::string title = "First";
			Assert::AreEqual(one.GetDeclensionString(), title);

			Declension two;
			two.SetSecond();
			title = "Second";
			Assert::AreEqual(two.GetDeclensionString(), title);

			Declension three;
			three.SetThird();
			title = "Third";
			Assert::AreEqual(three.GetDeclensionString(), title);

			Declension four;
			four.SetFourth();
			title = "Fourth";
			Assert::AreEqual(four.GetDeclensionString(), title);

			Declension five;
			five.SetFifth();
			title = "Fifth";
			Assert::AreEqual(five.GetDeclensionString(), title);

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
