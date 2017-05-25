#include "Node.hh"


Node::Node(int num) {
	
	_pParent = NULL;
	_pRight = NULL;
	_pLeft = NULL;
	_value = num;
	_height = 0;
	_bf = 0;

}

Node::~Node() {

	delete _pLeft;
	delete _pRight;

}

int Node::readValue() {

	return _value;

}

int Node::readHeight() {

	return _height;

}

int Node::readBf() {

	return _bf;

}

void Node::writeBf(int num) {

	_bf = num;

}