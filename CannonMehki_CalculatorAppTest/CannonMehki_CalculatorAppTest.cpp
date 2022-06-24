#include "pch.h"
#include "CppUnitTest.h"
#include "../CannonMehki_CalculatorApp/calculatorProcessor.h"
#include "../CannonMehki_CalculatorApp/ButtonFactory.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CannonMehkiCalculatorAppTest
{
	TEST_CLASS(CannonMehkiCalculatorAppTest)
	{
	private:
		calculatorProcessor processor;

	public:
		
		TEST_METHOD(TestMethod1)
		{
			std::string number = processor.getAddResult(2,2);


		}
	};
}
