/*
	autor:mmx
	time:2016.2.24
	describ:Strategy mode.

*/

class Strategy{
public:
	virtual void algorithmInterface();
};

class ConcreteStrategyA:public Strategy{
public:
	virtual void algorithmInterface();
};

class ConcreteStrategyB:public Strategy{
public:
	virtual void algorithmInterface(void);
};

class Context{
public:
	void contextInterface(void);

	Context(Strategy *strategy);
	~Context();

private:
	Strategy *m_strategy;
};