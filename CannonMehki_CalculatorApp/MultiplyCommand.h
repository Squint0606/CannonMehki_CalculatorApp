#pragma once
#include "calculatorProcessor.h"
#include "IBaseCommand.h"

class MultiplyCommand : public IBaseCommand
{
private:
	calculatorProcessor* _processor = nullptr;
	int _num1 = 0;
	int _num2 = 0;

public:
	MultiplyCommand(calculatorProcessor* processor, int num1, int num2)
	{
		_processor = processor;
		_num1 = num1;
		_num2 = num2;
	}

	void Execute()
	{
		_processor->getMultiplyResult(_num1, _num2);
	}
};

