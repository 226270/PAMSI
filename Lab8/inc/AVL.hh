// Definicja klasy AVL

#ifndef AVL_HH
#define AVL_HH

#include <iostream>
#include <ctime>
#include "iRunnable.hh"
#include "Node.hh"


class AVL : public iRunnable {
	
	Node *_pRoot;

public:

	int Size = 0;
	AVL();
	~AVL();
	void countBalance(Node *);
	void add(int);
	Node* find(int);
	void RR(Node *);
	void LL(Node *);
	void RL(Node *);
	void LR(Node *);

	void prepare(unsigned int);
	void doAlgorithm(unsigned int);
	void neutralise();

};


#endif