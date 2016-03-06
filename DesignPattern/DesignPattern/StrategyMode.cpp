#include"StrategyMode.h"

void Strategy::algorithmInterface()
{

}

void ConcreteStrategyA::algorithmInterface()
{

}

void ConcreteStrategyB::algorithmInterface()
{

}

Context::Context(Strategy *strategy):m_strategy(strategy)
{

}
Context::~Context()
{
	if(m_strategy!=nullptr){
		delete m_strategy;
		m_strategy = nullptr;
	}
}
void Context::contextInterface()
{
	m_strategy->algorithmInterface();
}