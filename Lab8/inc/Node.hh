// Definicja klasy Node

#ifndef NODE_HH
#define NODE_HH

#include <iostream>



class Node {
	
	int _value;
	int _height;
	int _bf;


public:

	Node *_pParent;
	Node *_pLeft;
	Node *_pRight;

	Node(int);
	~Node();
	int readValue();	
	int readHeight();
	int readBf();
	void writeBf(int);
	
};


#endif