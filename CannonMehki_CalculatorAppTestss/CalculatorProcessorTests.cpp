#include "CalculatorProcessorTests.h"
#include "../CannonMehki_CalculatorApp/calculatorProcessor.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
namespace CannonMehkiCalculatorAppTestss
{
	TEST_CLASS(CannonMehkiCalculatorAppTestss)
	{
	public:
		calculatorProcessor* processor = calculatorProcessor::GetInstance();

		TEST_METHOD(TwoPlusTwoEqualsFour)
		{
			std::string answer = processor->getAddResult(2, 2);
			Assert::AreEqual("4", answer.c_str());
		}

		TEST_METHOD(TwoTimesThreeEqualsSix)
		{
			std::string answer = processor->getMultiplyResult(2, 3);
			Assert::AreEqual("6", answer.c_str());
		}

		TEST_METHOD(NineMinusThreeEqualsSix)
		{
			std::string answer = processor->getSubtractResult(9, 3);
			Assert::AreEqual("6", answer.c_str());
		}

		TEST_METHOD(EighteenDividFourEqualsFour)
		{
			std::string answer = processor->getDivideResult(18, 4);
			Assert::AreEqual("4", answer.c_str());
		}

		TEST_METHOD(ThreeToBinary)
		{
			std::string answer = processor->GetBin("3");
			Assert::AreEqual("0000000000000011", answer.c_str());
		}

		TEST_METHOD(ThirtyTwoToBinary)
		{
			std::string answer = processor->GetBin("32");
			Assert::AreEqual("0000000000100000", answer.c_str());
		}

		TEST_METHOD(OneHundredFiftyTwoToDecimal)
		{
			std::string answer = processor->GetDec("152");
			Assert::AreEqual("152", answer.c_str());
		}

		TEST_METHOD(TwoHundredToDecimal)
		{
			std::string answer = processor->GetDec("200");
			Assert::AreEqual("200", answer.c_str());
		}

		TEST_METHOD(NinetyToHexidecimal)
		{
			std::string answer = processor->GetHex("90");
			Assert::AreEqual("0x5A", answer.c_str());
		}

		TEST_METHOD(SixteenToHexdecimal)
		{
			std::string answer = processor->GetHex("16");
			Assert::AreEqual("0x10", answer.c_str());
		}
	};

}

