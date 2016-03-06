class Componment{
public:
	virtual void operation();
	//virtual ~Componment();

};

class Componmental:public Componment{
public:
	virtual void operation();
	//virtual ~Componmental();
};

class Decorator:public Componment{
public:
	virtual void operation();
	void setComponmnet(Componment* componment);

	virtual ~Decorator();
protected:
	Componment* componment;
};

class StateA:public Decorator{
public:
	virtual void operation();
	//virtual ~StateA();
};

class StateB:public Decorator{
public:
	virtual void operation();
	//virtual ~StateB();
};

class StateC:public Decorator{
public:
	virtual void operation();
	//virtual ~StateC();
};

