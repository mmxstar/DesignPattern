#include "Templet.h"
#include <iostream>
using namespace std;

void Templet::theMethodOne()
{
	cout<<"i am the base method one!"<<endl;
}

void Templet::theMethodTwo()
{
	cout<<"i am the base method two!"<<endl;
}

void Templet::templetMethod()
{
	this->theMethodOne();
	this->theMethodTwo();
}

void ConcreateTempletA::theMethodOne()
{
	cout<<"i am the concreateTempletA.methodOne!"<<endl;
}

void ConcreateTempletA::theMethodTwo()
{
	cout<<"i am the concreateTempletA.methodTow"<<endl;
}

void ConcreateTempletB::theMethodOne()
{
	cout<<"i am the concreateTempletB.methodOne!"<<endl;
}

void ConcreateTempletB::theMethodTwo()
{
	cout<<"i am the concreateTempletB.methodTow"<<endl;
}
