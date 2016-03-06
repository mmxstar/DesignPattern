
#include"SimpleFactoryMode.h"

double COperation::getResult(double num1, double num2)
{
	return 0;
}

double COperationAdd::getResult(double num1, double num2)
{
	return num1 + num2;
}

double COperationSub::getResult(double num1, double num2)
{
	return num1 - num2;
}

COperation* CSimpleFactoryMode::createOperation(char operate)
{
	COperation *operation = 0;

	switch (operate)
	{
	case '+':
		operation = new COperationAdd();
		break;

	case '-':
		operation = new COperationSub();
		break;

	default:
		break;
	}

	return operation;
}