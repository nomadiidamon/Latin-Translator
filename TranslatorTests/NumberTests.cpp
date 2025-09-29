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

		TEST_METHOD(stringConstructor)
		{
		}

		TEST_METHOD(Singular)
		{
		}

		TEST_METHOD(Plural)
		{
		}

		TEST_METHOD(Both)
		{
		}

		TEST_METHOD(Unknown)
		{
		}
	};
}