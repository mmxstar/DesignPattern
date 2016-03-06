class Templet{
public:
	virtual void theMethodOne();
	virtual void theMethodTwo();

	void templetMethod();
};

class ConcreateTempletA:public Templet{
public:
	virtual void theMethodOne();
	virtual void theMethodTwo();
};

class ConcreateTempletB:public Templet{
public:
	virtual void theMethodOne();
	virtual void theMethodTwo();
};