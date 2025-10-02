#include "CppUnitTest.h"
#include "../Latin Translator/Macrons.h"
#include "../Latin Translator/NominativeCase.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TranslatorTests
{
	TEST_CLASS(NominativeCaseTests)
	{
	public:

		TEST_METHOD(blankConstructor_SingularFuncs)
		{
			NominativeCase nomCase;
			nomCase.ApplyDeclension(1);
			Assert::AreEqual(std::string("a"), nomCase.SingularEnding());
			Assert::AreEqual(1, nomCase.SingularEndingLength());
			nomCase.ApplyDeclension(2);
			Assert::AreEqual(std::string("us"), nomCase.SingularEnding());
			Assert::AreEqual(2, nomCase.SingularEndingLength());
			nomCase.ApplyDeclension(3);
			Assert::AreEqual(std::string(""), nomCase.SingularEnding());
			Assert::AreEqual(0, nomCase.SingularEndingLength());
			nomCase.ApplyDeclension(4);
			Assert::AreEqual(std::string("us"), nomCase.SingularEnding());
			Assert::AreEqual(2, nomCase.SingularEndingLength());
			nomCase.ApplyDeclension(5);
			Assert::AreEqual(std::string("es"), nomCase.SingularEnding());
			Assert::AreEqual(2, nomCase.SingularEndingLength());
		}

		TEST_METHOD(blankConstructor_PluralFuncs)
		{
			NominativeCase nomCase;
			nomCase.ApplyDeclension(1);
			Assert::AreEqual(std::string("ae"), nomCase.PluralEnding());
			Assert::AreEqual(2, nomCase.PluralEndingLength());
			nomCase.ApplyDeclension(2);
			Assert::AreEqual(std::string("i"), nomCase.PluralEnding());
			Assert::AreEqual(1, nomCase.PluralEndingLength());
			nomCase.ApplyDeclension(3);
			Assert::AreEqual(std::string("es"), nomCase.PluralEnding());
			Assert::AreEqual(2, nomCase.PluralEndingLength());
			nomCase.ApplyDeclension(4);
			Assert::AreEqual(std::string("us"), nomCase.PluralEnding());
			Assert::AreEqual(2, nomCase.PluralEndingLength());
			nomCase.ApplyDeclension(5);
			Assert::AreEqual(std::string("es"), nomCase.PluralEnding());
			Assert::AreEqual(2, nomCase.PluralEndingLength());

		}

		TEST_METHOD(intConstructor_SingularFunc) 
		{
			NominativeCase nomCase(1);
			Assert::AreEqual(std::string("a"), nomCase.SingularEnding());
			Assert::AreEqual(1, nomCase.SingularEndingLength());
			nomCase.ApplyDeclension(2);
			Assert::AreEqual(std::string("us"), nomCase.SingularEnding());
			Assert::AreEqual(2, nomCase.SingularEndingLength());
			nomCase.ApplyDeclension(3);
			Assert::AreEqual(std::string(""), nomCase.SingularEnding());
			Assert::AreEqual(0, nomCase.SingularEndingLength());
			nomCase.ApplyDeclension(4);
			Assert::AreEqual(std::string("us"), nomCase.SingularEnding());
			Assert::AreEqual(2, nomCase.SingularEndingLength());
			nomCase.ApplyDeclension(5);
			Assert::AreEqual(std::string("es"), nomCase.SingularEnding());
			Assert::AreEqual(2, nomCase.SingularEndingLength());
		}

		TEST_METHOD(intConstructor_PluralFuncs)
		{
			NominativeCase nomCase(1);
			Assert::AreEqual(std::string("ae"), nomCase.PluralEnding());
			Assert::AreEqual(2, nomCase.PluralEndingLength());
			nomCase.ApplyDeclension(2);
			Assert::AreEqual(std::string("i"), nomCase.PluralEnding());
			Assert::AreEqual(1, nomCase.PluralEndingLength());
			nomCase.ApplyDeclension(3);
			Assert::AreEqual(std::string("es"), nomCase.PluralEnding());
			Assert::AreEqual(2, nomCase.PluralEndingLength());
			nomCase.ApplyDeclension(4);
			Assert::AreEqual(std::string("us"), nomCase.PluralEnding());
			Assert::AreEqual(2, nomCase.PluralEndingLength());
			nomCase.ApplyDeclension(5);
			Assert::AreEqual(std::string("es"), nomCase.PluralEnding());
			Assert::AreEqual(2, nomCase.PluralEndingLength());
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
			NominativeCase nomCase(1);
			nomCase.SetExplanation("First Declension Nominative Case");
			Assert::AreEqual(std::string("First Declension Nominative Case"), nomCase.Explanation());
			nomCase.ApplyDeclension(2);
			nomCase.SetExplanation("Second Declension Nominative Case");
			Assert::AreEqual(std::string("Second Declension Nominative Case"), nomCase.Explanation());
			nomCase.ApplyDeclension(3);
			nomCase.SetExplanation("Third Declension Nominative Case");
			Assert::AreEqual(std::string("Third Declension Nominative Case"), nomCase.Explanation());
			nomCase.ApplyDeclension(4);
			nomCase.SetExplanation("Fourth Declension Nominative Case");
			Assert::AreEqual(std::string("Fourth Declension Nominative Case"), nomCase.Explanation());
			nomCase.ApplyDeclension(5);
			nomCase.SetExplanation("Fifth Declension Nominative Case");
			Assert::AreEqual(std::string("Fifth Declension Nominative Case"), nomCase.Explanation());

		}


		TEST_METHOD(Cleanup) 
		{
			NominativeCase nomCase = NominativeCase(1);
			nomCase.ApplyDeclension(2);
			nomCase.Dispose();
			Assert::AreEqual(std::string(""), nomCase.SingularEnding());
			Assert::AreEqual(0, nomCase.SingularEndingLength());
			Assert::AreEqual(std::string(""), nomCase.PluralEnding());
			Assert::AreEqual(0, nomCase.PluralEndingLength());
			Assert::AreEqual(std::string(""), nomCase.Explanation());
		}

	};
}