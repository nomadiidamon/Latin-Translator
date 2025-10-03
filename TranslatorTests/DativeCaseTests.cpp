#include "CppUnitTest.h"
#include "../Latin Translator/Macrons.h"
#include "../Latin Translator/DativeCase.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TranslatorTests
{
	TEST_CLASS(DativeCaseTests)
	{
	public:

		TEST_METHOD(blankConstructor_SingularFuncs)
		{
			DativeCase datCase;

		}

		TEST_METHOD(blankConstructor_PluralFuncs)
		{
			DativeCase datCase;


		}

		TEST_METHOD(intConstructor_SingularFunc)
		{
			DativeCase datCase(1);

		}

		TEST_METHOD(intConstructor_PluralFuncs)
		{
			DativeCase datCase(1);

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
			DativeCase datCase(1);

		}


		TEST_METHOD(Cleanup)
		{
			DativeCase datCase(1);

		}

	};
}