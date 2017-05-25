#include "AVL.hh"


// Konstruktor
AVL::AVL() {
	
	_pRoot = NULL;

}

// Destruktor
AVL::~AVL() {

	delete _pRoot;

}

// Funkcja wyliczajaca wspolczynnik rownowagi
void AVL::countBalance(Node *node) {

	int left = 0;
	int right = 0;

	if(node->_pLeft) {
		left = (node->_pLeft)->readHeight();
	}

	if(node->_pRight) {
		right = (node->_pRight)->readHeight();
	}

	node->writeBf(left-right);

}

// Funkcja dodajaca element
void AVL::add(int num) {

	Node *pNew = new Node(num);
	Node *pHelp = _pRoot;
	Node *pR;
	bool t;

	if(!pHelp) {
		_pRoot = pNew;
	}

	else {
		while(true) {
			if(num <= pHelp->readValue()) {
				if(!pHelp->_pLeft) {
					pHelp->_pLeft = pNew;
					break;
				}
				pHelp = pHelp->_pLeft;
			}
			else {
				if(!pHelp->_pRight) {
					pHelp->_pRight = pNew;
					break;
				}
				pHelp = pHelp->_pRight;
			}
		}
		pNew->_pParent = pHelp;

		if(pHelp->readBf()) {
			pHelp->writeBf(0);
		}

	    else {

			if(pHelp->_pLeft == pNew) {
		        pHelp->writeBf(1);
		    }
		    else {
		        pHelp->writeBf(-1);
		    }

		    pR = pHelp->_pParent;

		    t = false;
    
    		while(pR) {

		        if(pR->readBf()) {
        		t = true;
				break;
				}

				if(pR->_pLeft == pHelp) {
					pR->writeBf(1);
				}
		        else {
       			 	pR->writeBf(-1);
    		    }

		        pHelp = pR;
        		pR = pR->_pParent;
			}

		    if(t) {

		    	if(pR->readBf() == 1) {
	    		    if(pR->_pRight == pHelp) {
	        			pR->writeBf(0);
	        		}
					else if(pHelp->readBf() == -1) {
						LR(pR);
					}
	        		else {
    	    			LL(pR);
        			}
        		}
        		else {
        			if(pR->_pLeft == pHelp) {
        				pR->writeBf(0);
        			}
					else if(pHelp->readBf() == 1) {
						RL(pR);
					}
					else {
						RR(pR);
					}
        		}
    		}
		}
	}
}

// Funkcja szukajaca wezla o podanej wartosci
Node* AVL::find(int num) {

	Node *pHelp = _pRoot;

	while(pHelp && pHelp->readValue() != num) {

		if(num < pHelp->readValue()) {
			pHelp = pHelp->_pLeft;
		}
		else {
			pHelp = pHelp->_pRight;
		}
	}

	return pHelp;

}

// Funkcja rotacji RR
void AVL::RR(Node *node) {

	Node *pB = node->_pRight;
	Node *pP = node->_pParent;

	node->_pRight = pB->_pLeft;

	if(node->_pRight) {
		node->_pRight->_pParent = node;
	}

	pB->_pLeft = node;
	pB->_pParent = pP;
	node->_pParent = pB;

	if(pP) {
		if(pP->_pLeft == node) {
			pP->_pLeft = pB;
		}
		else {
			pP->_pRight = pB;
		}
	}
	else {
		_pRoot = pB;
	}

	if(pB->readBf() == -1) {
		node->writeBf(0);
		pB->writeBf(0);
	}
	else {
		node->writeBf(-1);
		pB->writeBf(1);
	}

}

// Funkcja rotacji LL
void AVL::LL(Node *node) {

	Node *pB = node->_pLeft;
	Node *pP = node->_pParent;

	node->_pLeft = pB->_pRight;

	if(node->_pLeft) {
		node->_pLeft->_pParent = node;
	}

	pB->_pRight = node;
	pB->_pParent = pP;
	node->_pParent = pB;

	if(pP) {
		if(pP->_pLeft == node) {
			pP->_pLeft = pB;
		}
		else {
			pP->_pRight = pB;
		}
	}
	else {
		_pRoot = pB;
	}

	if(pB->readBf() == 1) {
		node->writeBf(0);
		pB->writeBf(0);
	}
	else {
		node->writeBf(1);
		pB->writeBf(-1);
	}

}

// Funkcja rotacji RL
void AVL::RL(Node *node) {

	Node *pB = node->_pRight;
	Node *pC = pB->_pLeft;
	Node *pP = node->_pParent;

	pB->_pLeft = pC->_pRight;
	if(pB->_pLeft) {
		pB->_pLeft->_pParent = pB;
	}

	node->_pRight = pC->_pLeft;
	if(node->_pRight) {
		node->_pRight->_pParent = node;
	}

	pC->_pLeft = node;
	pC->_pRight = pB;
	node->_pParent = pB->_pParent = pC;
	pC->_pParent = pP;

	if(pP) {
		if(pP->_pLeft == node) {
			pP->_pLeft = pC;
		}
		else {
			pP->_pRight = pC;
		}
	}
	else {
		_pRoot = pC;
	}

	if(pC->readBf() == -1) {
		node->writeBf(1);
	}
	else {
		node->writeBf(0);
	}

	if(pC->readBf() == 1) {
		pB->writeBf(-1);
	}
	else {
		pB->writeBf(0);
	}

}

// Funkcja rotacji LR
void AVL::LR(Node *node) {

	Node *pB = node->_pLeft;
	Node *pC = pB->_pRight;
	Node *pP = node->_pParent;

	pB->_pRight = pC->_pLeft;
	if(pB->_pRight) {
		pB->_pRight->_pParent = pB;
	}

	node->_pLeft = pC->_pRight;
	if(node->_pLeft) {
		node->_pLeft->_pParent = node;
	}

	pC->_pRight = node;
	pC->_pLeft = pB;
	node->_pParent = pB->_pParent = pC;
	pC->_pParent = pP;

	if(pP) {
		if(pP->_pLeft == node) {
			pP->_pLeft = pC;
		}
		else {
			pP->_pRight = pC;
		}
	}
	else {
		_pRoot = pC;
	}

	if(pC->readBf() == 1) {
		node->writeBf(-1);
	}
	else {
		node->writeBf(0);
	}

	if(pC->readBf() == -1) {
		pB->writeBf(1);
	}
	else {
		pB->writeBf(0);
	}

}

// Funkcja inicjująca drzewo
void AVL::prepare(unsigned int num) {

	for(unsigned int i = 0; i < num; ++i) {

		add(std::rand() % num);

	}

}

// Funkcja wykonujaca algorytm potrzebny do testow
void AVL::doAlgorithm(unsigned int num) {

	Node *pHelp;
	pHelp = find(num);
	std::cout << pHelp->readValue();

}

// Funckja zerujaca klase
void AVL::neutralise() {

	delete _pRoot;

}