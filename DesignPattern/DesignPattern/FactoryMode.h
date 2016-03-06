/*
 autor: mmx
 time:2016.2.23
 simple factory mode:
*/


#ifndef DESIGN_PATTERN_SIMPLE_FACTORY_MODE_H
#define DESIGN_PATTERN_SIMPLE_FACTORY_MODE_H

class COperation{
public:
	virtual double getResult(double num1, double num2);

protected:
	double m_num1;
	double m_num2;
};

class COperationAdd:public COperation{
public:
	virtual double getResult(double num1, double num2);
};

class COperationSub:public COperation{
public:
	virtual double getResult(double num1, double num2);

};

class FactoryMode{
public:
	virtual COperation* createOperation() = 0;

};

class OperationAddFactory:public FactoryMode{
public:
	virtual COperation* createOperation();

};

class OperationSubFactory:public FactoryMode{
public:
	virtual COperation* createOperation();
};
#endif // !DESIGN_PATTERN_SIMPLE_FACTORY_MODE_H