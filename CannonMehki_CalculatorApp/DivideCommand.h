#pragma once
#include "calculatorProcessor.h"
#include "IBaseCommand.h"

class DivideCommand : public IBaseCommand
{
private:
	calculatorProcessor* _processor = nullptr;
	int _num1 = 0;
	int _num2 = 0;
 
public:
	DivideCommand(calculatorProcessor* processor, int num1, int num2)
	{
		_processor = processor;
		_num1 = num1;
		_num2 = num2;
	}

	void Execute()
	{
		_processor->getDivideResult(_num1, _num2);
	}
};

