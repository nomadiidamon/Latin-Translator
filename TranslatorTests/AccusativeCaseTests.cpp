#include "CppUnitTest.h"
#include "../Latin Translator/Macrons.h"
#include "../Latin Translator/AccusativeCase.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TranslatorTests
{
	TEST_CLASS(AccusativeCaseTests)
	{
	public:

		TEST_METHOD(blankConstructor_SingularFuncs)
		{
			AccusativeCase accCase;

		}

		TEST_METHOD(blankConstructor_PluralFuncs)
		{
			AccusativeCase accCase;


		}

		TEST_METHOD(intConstructor_SingularFunc)
		{
			AccusativeCase accCase(1);

		}

		TEST_METHOD(intConstructor_PluralFuncs)
		{
			AccusativeCase accCase(1);

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
			AccusativeCase accCase(1);

		}


		TEST_METHOD(Cleanup)
		{
			AccusativeCase accCase(1);

		}

	};
}