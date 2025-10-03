#include "CppUnitTest.h"
#include "../Latin Translator/Macrons.h"
#include "../Latin Translator/AblativeCase.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TranslatorTests
{
	TEST_CLASS(AblativeCaseTests)
	{
	public:

		TEST_METHOD(blankConstructor_SingularFuncs)
		{
			AblativeCase ablCase;

		}

		TEST_METHOD(blankConstructor_PluralFuncs)
		{
			AblativeCase ablCase;


		}

		TEST_METHOD(intConstructor_SingularFunc)
		{
			AblativeCase ablCase(1);

		}

		TEST_METHOD(intConstructor_PluralFuncs)
		{
			AblativeCase ablCase(1);

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
			AblativeCase ablCase(1);

		}


		TEST_METHOD(Cleanup)
		{
			AblativeCase ablCase(1);

		}

	};
}