#pragma once
#include <vector>
#include <string>


	class calculatorProcessor
	{
	private:
		static calculatorProcessor* _processor;
		int baseNumber;
		calculatorProcessor() {};

	public:
		static calculatorProcessor* GetInstance()
		{
			if (_processor == nullptr)
				_processor = new calculatorProcessor();

			return _processor;
		}

		void SetBaseNumber(int num)
		{
			baseNumber = num;
		}

		calculatorProcessor(calculatorProcessor& other) = delete;
		void operator=(const calculatorProcessor& other) = delete;

		std::string getAddResult(int num1, int num2)
		{
			std::string ans = std::to_string(num1 + num2);

			return ans;
		}

		std::string getSubtractResult(int num1, int num2)
		{
			std::string ans = std::to_string(num1 - num2);

			return ans;
		}

		std::string getMultiplyResult(int num1, int num2)
		{
			/*std::string ans = std::to_string(num1 * num2);

			return ans;*/
			return std::to_string(num1 * num2);
		}

		std::string getDivideResult(int num1, int num2)
		{
			std::string ans = std::to_string(num1 / num2);

			return ans;
		}
	};

