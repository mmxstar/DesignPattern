#include"FactoryMode.h"

COperation* OperationAddFactory::createOperation()
{
	return new COperationAdd();
}

COperation* OperationSubFactory::createOperation()
{
	return new COperationSub();
}