#include "CppUnitTest.h"
#include "../Latin Translator/Macrons.h"
#include "../Latin Translator/VocativeCase.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TranslatorTests
{
	TEST_CLASS(VocativeCaseTests)
	{
	public:

		TEST_METHOD(blankConstructor_SingularFuncs)
		{
			VocativeCase vocCase;

		}

		TEST_METHOD(blankConstructor_PluralFuncs)
		{
			VocativeCase vocCase;


		}

		TEST_METHOD(intConstructor_SingularFunc)
		{
			VocativeCase vocCase;

		}

		TEST_METHOD(intConstructor_PluralFuncs)
		{
			VocativeCase vocCase;

		}

		TEST_METHOD(SingularTranslations)
		{
			Assert::IsTrue(false);
		}

		TEST_METHOD(PluralTranslations)
		{
			Assert::IsTrue(false);
		}

		TEST_METHOD(Explanations)
		{
			VocativeCase vocCase;

		}


		TEST_METHOD(Cleanup)
		{
			VocativeCase vocCase;

		}

	};
}