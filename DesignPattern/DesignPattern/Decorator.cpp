#include<iostream>
using namespace std;

#include"Decorator.h"

void Componment::operation()
{

}



//Componmental::~Componmental()
//{

//}

void Componmental::operation()
{

}

void Decorator::setComponmnet(Componment* componment)
{
	this->componment = componment;
}

void  Decorator::operation()
{
	if(this->componment!=nullptr)
	{
		componment->operation();
	}
}

Decorator::~Decorator()
{
//	if(this->componment!=nullptr)
	//{
	//	delete componment;
	//	this->componment = nullptr;
	//}
}
void StateA::operation()
{
	cout<<" i am stateA;"<<"    ";
	Decorator::operation();
}

//StateA::~StateA()
//{
//	if(this->componment!=nullptr)
//	{
//		delete componment;
//		this->componment = nullptr;
//	}
//}

void StateB::operation()
{
	cout<<" i am stateB;"<<"    ";
	Decorator::operation();
}

//StateB::~StateB()
//{
//	if(this->componment!=nullptr)
//	{
//		delete componment;
//		this->componment = nullptr;
//	}
//}

void StateC::operation()
{
	cout<<" i am stateC;"<<"    ";
	Decorator::operation();
}

//StateC::~StateC()
//{
//	if(this->componment!=nullptr)
	//{
	//	delete componment;
//		this->componment = nullptr;
	//}
//}
