#include "CppUnitTest.h"
#include "../Latin Translator/Macrons.h"
#include "../Latin Translator/GenitiveCase.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TranslatorTests
{
	TEST_CLASS(GenitiveCaseTests)
	{
	public:

		TEST_METHOD(blankConstructor_SingularFuncs)
		{
			GenitiveCase genCase;
			genCase.ApplyDeclension(1);
			Assert::AreEqual(std::string("ae"), genCase.SingularEnding());
			Assert::AreEqual(2, (int)genCase.SingularEnding().length());
			genCase.ApplyDeclension(2);
			Assert::AreEqual(std::string("i"), genCase.SingularEnding());
			Assert::AreEqual(1, (int)genCase.SingularEnding().length());
			genCase.ApplyDeclension(3);
			Assert::AreEqual(std::string("is"), genCase.SingularEnding());
			Assert::AreEqual(2, (int)genCase.SingularEnding().length());
			genCase.ApplyDeclension(4);
			Assert::AreEqual(std::string("us"), genCase.SingularEnding());
			Assert::AreEqual(2, (int)genCase.SingularEnding().length());
			genCase.ApplyDeclension(5);
			Assert::AreEqual(std::string("ei"), genCase.SingularEnding());
			Assert::AreEqual(2, (int)genCase.SingularEnding().length());
		}

		TEST_METHOD(blankConstructor_PluralFuncs)
		{
			GenitiveCase genCase;
			genCase.ApplyDeclension(1);
			Assert::AreEqual(std::string("arum"), genCase.PluralEnding());
			Assert::AreEqual(4, (int)genCase.PluralEnding().length());
			genCase.ApplyDeclension(2);
			Assert::AreEqual(std::string("orum"), genCase.PluralEnding());
			Assert::AreEqual(4, (int)genCase.PluralEnding().length());
			genCase.ApplyDeclension(3);
			Assert::AreEqual(std::string("um"), genCase.PluralEnding());
			Assert::AreEqual(2, (int)genCase.PluralEnding().length());
			genCase.ApplyDeclension(4);
			Assert::AreEqual(std::string("uum"), genCase.PluralEnding());
			Assert::AreEqual(3, (int)genCase.PluralEnding().length());
			genCase.ApplyDeclension(5);
			Assert::AreEqual(std::string("erum"), genCase.PluralEnding());
			Assert::AreEqual(4, (int)genCase.PluralEnding().length());
					}

		TEST_METHOD(intConstructor_SingularFunc)
		{
			GenitiveCase genCase(1);
			genCase.ApplyDeclension(1);
			Assert::AreEqual(std::string("ae"), genCase.SingularEnding());
			Assert::AreEqual(2, (int)genCase.SingularEnding().length());
			genCase.ApplyDeclension(2);
			Assert::AreEqual(std::string("i"), genCase.SingularEnding());
			Assert::AreEqual(1, (int)genCase.SingularEnding().length());
			genCase.ApplyDeclension(3);
			Assert::AreEqual(std::string("is"), genCase.SingularEnding());
			Assert::AreEqual(2, (int)genCase.SingularEnding().length());
			genCase.ApplyDeclension(4);
			Assert::AreEqual(std::string("us"), genCase.SingularEnding());
			Assert::AreEqual(2, (int)genCase.SingularEnding().length());
			genCase.ApplyDeclension(5);
			Assert::AreEqual(std::string("ei"), genCase.SingularEnding());
			Assert::AreEqual(2, (int)genCase.SingularEnding().length());
		}

		TEST_METHOD(intConstructor_PluralFuncs)
		{
			GenitiveCase genCase(1);
			genCase.ApplyDeclension(1);
			Assert::AreEqual(std::string("arum"), genCase.PluralEnding());
			Assert::AreEqual(4, (int)genCase.PluralEnding().length());
			genCase.ApplyDeclension(2);
			Assert::AreEqual(std::string("orum"), genCase.PluralEnding());
			Assert::AreEqual(4, (int)genCase.PluralEnding().length());
			genCase.ApplyDeclension(3);
			Assert::AreEqual(std::string("um"), genCase.PluralEnding());
			Assert::AreEqual(2, (int)genCase.PluralEnding().length());
			genCase.ApplyDeclension(4);
			Assert::AreEqual(std::string("uum"), genCase.PluralEnding());
			Assert::AreEqual(3, (int)genCase.PluralEnding().length());
			genCase.ApplyDeclension(5);
			Assert::AreEqual(std::string("erum"), genCase.PluralEnding());
			Assert::AreEqual(4, (int)genCase.PluralEnding().length());
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
			GenitiveCase genCase(1);
			Assert::AreEqual(std::string(""), genCase.Explanation());
			genCase.SetExplanation("This is the genitive case.");
			Assert::AreEqual(std::string("This is the genitive case."), genCase.Explanation());
			genCase.ApplyDeclension(2);
			Assert::AreEqual(std::string(""), genCase.Explanation());
			genCase.SetExplanation("Genitive case after declension change.");
			Assert::AreEqual(std::string("Genitive case after declension change."), genCase.Explanation());
			genCase.ApplyDeclension(3);
			Assert::AreEqual(std::string(""), genCase.Explanation());
			genCase.SetExplanation("Another genitive case explanation.");
			Assert::AreEqual(std::string("Another genitive case explanation."), genCase.Explanation());
		}


		TEST_METHOD(Cleanup)
		{
			GenitiveCase genCase = GenitiveCase(1);
			genCase.ApplyDeclension(2);
			genCase.SetExplanation("Cleanup Test");
			genCase.Dispose();
			Assert::AreEqual(std::string(""), genCase.Explanation());
			Assert::AreEqual(std::string(""), genCase.SingularEnding());
			Assert::AreEqual(std::string(""), genCase.PluralEnding());
		}

	};
}