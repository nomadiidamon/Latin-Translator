#include "CppUnitTest.h"
#include "../Latin Translator/Number.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TranslatorTests
{
	TEST_CLASS(NumberTests)
	{
	public:

		TEST_METHOD(blankConstructor)
		{
			Number one;
			one.SetSingular();
			Assert::IsTrue(one.IsSingular());

			Number two;
			two.SetPlural();
			Assert::IsTrue(two.IsPlural());

			Number three;
			three.SetBoth();
			Assert::IsTrue(three.IsBoth());

		}

		TEST_METHOD(stringConstructor_singluar)
		{
			Number one("Singular");
			Assert::IsTrue(one.IsSingular());
			Number two("singular");
			Assert::IsTrue(two.IsSingular());
			Number three("sing");
			Assert::IsTrue(three.IsSingular());
			Number four("Sing");
			Assert::IsTrue(four.IsSingular());
		}

		TEST_METHOD(stringConstructor_plural)
		{
			Number five("Plural");
			Assert::IsTrue(five.IsPlural());
			Number six("plural");
			Assert::IsTrue(six.IsPlural());
			Number seven("plur");
			Assert::IsTrue(seven.IsPlural());
			Number eight("Plur");
			Assert::IsTrue(eight.IsPlural());
		}

		TEST_METHOD(stringConstructor_both)
		{
			Number nine("Both");
			Assert::IsTrue(nine.IsBoth());
			Number ten("both");
			Assert::IsTrue(ten.IsBoth());
			Number eleven("b");
			Assert::IsTrue(eleven.IsBoth());
			Number twelve("B");
			Assert::IsTrue(twelve.IsBoth());
		}

		TEST_METHOD(stringConstructor_unknown)
		{
			Number thirteen("");
			Assert::IsTrue(thirteen.IsUnknown());
			Number fourteen(" ");
			Assert::IsTrue(fourteen.IsUnknown());
			Number fifteen("asd");
			Assert::IsTrue(fifteen.IsUnknown());
			Number sixteen("123");
			Assert::IsTrue(sixteen.IsUnknown());
		}

		TEST_METHOD(Singular)
		{
			Number tester1;
			tester1.SetSingular();
			Assert::IsTrue(tester1.IsSingular());

			Number tester2("Plural");
			Assert::IsTrue(tester2.IsPlural());
			tester2.SetSingular();
			Assert::IsTrue(tester2.IsSingular());
		}

		TEST_METHOD(Plural)
		{
			Number tester1;
			tester1.SetPlural();
			Assert::IsTrue(tester1.IsPlural());

			Number tester2("Singular");
			Assert::IsTrue(tester2.IsSingular());
			tester2.SetPlural();
			Assert::IsTrue(tester2.IsPlural());
		}

		TEST_METHOD(Both)
		{
			Number tester1;
			tester1.SetBoth();
			Assert::IsTrue(tester1.IsBoth());

			Number tester2("Singular");
			Assert::IsTrue(tester2.IsSingular());
			tester2.SetBoth();
			Assert::IsTrue(tester2.IsBoth());

			Number tester3("Plural");
			Assert::IsTrue(tester3.IsPlural());
			tester3.SetBoth();
			Assert::IsTrue(tester3.IsBoth());
		}

		TEST_METHOD(Unknown)
		{
			Number tester1;
			Assert::IsTrue(tester1.IsUnknown());
			tester1.SetSingular();
			Assert::IsTrue(tester1.IsSingular());
			tester1.SetUnknown();
			Assert::IsTrue(tester1.IsUnknown());

			Number tester2("Plural");
			Assert::IsTrue(tester2.IsPlural());
			tester2.SetUnknown();
			Assert::IsTrue(tester2.IsUnknown());

			Number tester3("Both");
			Assert::IsTrue(tester3.IsBoth());
			tester3.SetUnknown();
			Assert::IsTrue(tester3.IsUnknown());

		}

		TEST_METHOD(GetNumberString) {

			Number tester1;
			Assert::AreEqual(std::string("Unknown"), tester1.GetNumber());
			tester1.SetSingular();
			Assert::AreEqual(std::string("Singluar"), tester1.GetNumber());
			tester1.SetPlural();
			Assert::AreEqual(std::string("Plural"), tester1.GetNumber());
			tester1.SetBoth();
			Assert::AreEqual(std::string("Both"), tester1.GetNumber());
			tester1.SetUnknown();
			Assert::AreEqual(std::string("Unknown"), tester1.GetNumber());



			Number tester2("Plural");
			Assert::AreEqual(std::string("Plural"), tester2.GetNumber());
			tester2.SetUnknown();
			Assert::AreEqual(std::string("Unknown"), tester2.GetNumber());
			Number tester3("Both");
			Assert::AreEqual(std::string("Both"), tester3.GetNumber());
			tester3.SetUnknown();
			Assert::AreEqual(std::string("Unknown"), tester3.GetNumber());
		}

		TEST_METHOD(Cleanup_singular) {
			Number tester1("Singular");
			Assert::IsTrue(tester1.IsSingular());
			tester1.Dispose();
			Assert::IsTrue(tester1.IsUnknown());
		}

		TEST_METHOD(Cleanup_plural) {
			Number tester2("Plural");
			Assert::IsTrue(tester2.IsPlural());
			tester2.Dispose();
			Assert::IsTrue(tester2.IsUnknown());
		}

		TEST_METHOD(Cleanup_both) {
			Number tester3("Both");
			Assert::IsTrue(tester3.IsBoth());
			tester3.Dispose();
			Assert::IsTrue(tester3.IsUnknown());
		}

		TEST_METHOD(Cleanup_unkown) {
			Number tester4;
			Assert::IsTrue(tester4.IsUnknown());
			tester4.Dispose();
			Assert::IsTrue(tester4.IsUnknown());
		}
	};
}