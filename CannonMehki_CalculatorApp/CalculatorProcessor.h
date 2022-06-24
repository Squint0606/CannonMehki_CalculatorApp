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
		std::string ans = std::to_string(num1 * num2);

		return ans;
	}

	std::string getDivideResult(int num1, int num2)
	{
		std::string ans = std::to_string(num1 / num2);

		return ans;
	}

	std::string GetDecimal()
	{
		return std::to_string(baseNumber);
	}

	std::string GetBin()
	{
		std::string result = "";
		int num = baseNumber;

		for (int i = 0; i < 32; i++)
		{
			if (baseNumber % 2 == 0)
				result = "0" + result;
			else
				result = "1" + result;
		}

		num = num / 2;
		return result;
	}

	std::string GetHex()
	{
		std::string result = "";
		int num = baseNumber;

		while (num > 0)
		{
			int mod = num % 16;
			if (mod < 10)
				result = std::to_string(mod) + result;
			else if (mod == 10)
				result = "A" + result;
			else if (mod == 11)
				result = "B" + result;
			else if (mod == 12)
				result = "C" + result;
			else if (mod == 13)
				result = "D" + result;
			else if (mod == 14)
				result = "E" + result;
			else if (mod == 15)
				result = "F" + result;
			num = num / 16;
		}

		result = "0x" + result;
		return result;
	}
};



