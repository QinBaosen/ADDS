#ifndef NODE_H
#define NODE_H

class Node{

private:
	int data;

public:
    Node();
	Node* next;
	void setData(int num);

	void setNext(Node* node);

	int getData();

    Node* getNext();

};

#endif