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
			Declension one("First");
			std::string title = "First";
			Assert::AreEqual(one.GetDeclensionString(), title);
			Declension two("Second");
			title = "Second";
			Assert::AreEqual(two.GetDeclensionString(), title);
			Declension three("Third");
			title = "Third";
			Assert::AreEqual(three.GetDeclensionString(), title);
			Declension four("Fourth");
			title = "Fourth";
			Assert::AreEqual(four.GetDeclensionString(), title);
			Declension five("Fifth");
			title = "Fifth";
			Assert::AreEqual(five.GetDeclensionString(), title);
		}

		TEST_METHOD(int_constructor) {
			Declension one(1);
			std::string title = "First";
			Assert::AreEqual(one.GetDeclensionString(), title);
			Declension two(2);
			title = "Second";
			Assert::AreEqual(two.GetDeclensionString(), title);
			Declension three(3);
			title = "Third";
			Assert::AreEqual(three.GetDeclensionString(), title);
			Declension four(4);
			title = "Fourth";
			Assert::AreEqual(four.GetDeclensionString(), title);
			Declension five(5);
			title = "Fifth";
			Assert::AreEqual(five.GetDeclensionString(), title);

		}

		TEST_METHOD(MakeFirst)
		{
			Declension one;
			one.SetFirst();
			Assert::AreEqual(one.GetDeclensionString(), std::string("First"));

			Declension two(2);
			two.SetFirst();
			Assert::AreEqual(two.GetDeclensionString(), std::string("First"));

		}

		TEST_METHOD(MakeSecond)
		{
			Declension one;
			one.SetSecond();
			Assert::AreEqual(one.GetDeclensionString(), std::string("Second"));

			Declension two(1);
			two.SetSecond();
			Assert::AreEqual(two.GetDeclensionString(), std::string("Second"));
		}

		TEST_METHOD(MakeThird)
		{
			Declension one;
			one.SetThird();
			Assert::AreEqual(one.GetDeclensionString(), std::string("Third"));

			Declension two(2);
			two.SetThird();
			Assert::AreEqual(two.GetDeclensionString(), std::string("Third"));
		}

		TEST_METHOD(MakeFourth)
		{
			Declension one;
			one.SetFourth();
			Assert::AreEqual(one.GetDeclensionString(), std::string("Fourth"));

			Declension two(1);
			two.SetFourth();
			Assert::AreEqual(two.GetDeclensionString(), std::string("Fourth"));
		}

		TEST_METHOD(MakeFifth)
		{
			Declension one;
			one.SetFifth();
			Assert::AreEqual(one.GetDeclensionString(), std::string("Fifth"));

			Declension two(1);
			two.SetFifth();
			Assert::AreEqual(two.GetDeclensionString(), std::string("Fifth"));
		}

		TEST_METHOD(SetDeclension)
		{
			Declension one;
			one.SetFirst();
			one.SetDeclension();
			Assert::AreEqual(one.GetDeclensionString(), std::string("First"));

			Declension two;
			two.SetSecond();
			two.SetDeclension();
			Assert::AreEqual(two.GetDeclensionString(), std::string("Second"));

			Declension three;
			three.SetThird();
			three.SetDeclension();
			Assert::AreEqual(three.GetDeclensionString(), std::string("Third"));

			Declension four;
			four.SetFourth();
			four.SetDeclension();
			Assert::AreEqual(four.GetDeclensionString(), std::string("Fourth"));

			Declension five;
			five.SetFifth();
			five.SetDeclension();
			Assert::AreEqual(five.GetDeclensionString(), std::string("Fifth"));

		}

		TEST_METHOD(GetDeclension)
		{
			Declension one("First");
			Assert::AreEqual(one.GetDeclensionNumber(), 1);

			Declension two("Second");
			Assert::AreEqual(two.GetDeclensionNumber(), 2);

			Declension three("Third");
			Assert::AreEqual(three.GetDeclensionNumber(), 3);

			Declension four("Fourth");
			Assert::AreEqual(four.GetDeclensionNumber(), 4);

			Declension five("Fifth");
			Assert::AreEqual(five.GetDeclensionNumber(), 5);
		}

		TEST_METHOD(IsValid) {
			Declension one("First");
			Assert::IsTrue(one.IsValid());
			Declension two("Second");
			Assert::IsTrue(two.IsValid());
			Declension three("Third");
			Assert::IsTrue(three.IsValid());
			Declension four("Fourth");
			Assert::IsTrue(four.IsValid());
			Declension five("Fifth");
			Assert::IsTrue(five.IsValid());
			Declension invalid("Sixth");
			Assert::IsFalse(invalid.IsValid());

		}
	};
}
