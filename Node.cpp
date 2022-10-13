#include "Node.h"
using namespace std;

Node::Node(int num, Node * pointer) {
    data = num;
    next = pointer;
}

void Node::setData(int num)
{
	data = num;
}

void Node::setNext(Node* pointer)
{
	next = pointer;
}

int Node::getData()
{
	return data;
}

Node* Node::getNext()
{
	return next;
}