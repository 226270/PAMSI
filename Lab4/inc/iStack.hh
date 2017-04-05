// Definicja interfejsu iStack

#ifndef ISTACK_HH
#define ISTACK_HH


class iStack {
	
public:

	virtual int top() = 0;
	virtual int size() = 0;
	virtual void push(int) = 0;
	virtual void pop() = 0;
	
};


#endif