#include<iostream>
using namespace std;

#include"SimpleFactoryMode.h"
#include "Decorator.h"
#include "Templet.h"

int main()
{
	/*  SimpleFactoryMode
	double a = 1.1;
	double b = 2.2;

	//COperationAdd *add = new COperationAdd();
	CSimpleFactoryMode simpleFactoryMode;
	
	COperation* operation = simpleFactoryMode.createOperation('-');

	cout<<"result="<<operation->getResult(a,b)<<endl;
	*/
	/*
	//Decorator
	Componmental* componmental = new Componmental();
	StateA* stateA = new StateA(); 

	stateA->setComponmnet(componmental);

	StateB* stateB = new StateB();
	stateB->setComponmnet(stateA);

	StateC* stateC = new StateC();
	stateC->setComponmnet(stateB);
	stateC->operation();

	delete componmental;
	componmental = nullptr;
	delete stateA;
	stateA = nullptr;
	delete stateB;
	stateB = nullptr;
	delete stateC;
	stateC = nullptr;
	*/

	//Templet mode
	Templet* ca = new ConcreateTempletA();
	ca->templetMethod();

	Templet* cb = new ConcreateTempletB();
	cb->templetMethod();

	system("pause");
	return 0;
}