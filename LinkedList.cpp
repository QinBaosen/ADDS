#include "LinkedList.h"
#include <iostream>
#include <limits> // Necessary Libraries
using namespace std;


void LinkedList::addFront(int newItem){
    //inserts a new node, containing the newItem, at the beginning of the list
	Node* nd = new Node();
	nd->setData(newItem);
	nd->setNext(head);
	head = nd;
}

void LinkedList::addEnd(int newItem){
    //inserts a new node, containing the newItem, at the end of the list
	Node* node = new Node();
	node->setData(newItem);

	Node* ne = head;

	while (ne->next != NULL) {
		ne = ne->next;
	}

	ne->next = node;
}

void LinkedList::addAtPosition(int position, int newItem){
    // inserts a new node, containing the newItem
    // such that it is the position-th member of the list
	Node* newNode = new Node(newItem, NULL);

	if (position <= 1) {
		this->addFront(newItem);
		return;
	}

	Node* a;
	Node* pointer = head;

	for (int i = 0; i < position-1; i++) {
		a = pointer;
		pointer = pointer->getNext();

		if (pointer == NULL) {
			this->addEnd(newItem);
			return;
		}
	}

	a->setNext(newNode);
	newNode->setNext(pointer);
}

int LinkedList::search(int item){
    //searches the list for the first instance of the item
    int count = 1;
	Node* n;

    for(n = head; n != NULL; n = n->getNext()){
        if(item == n->getData()){
            cout<< count << " ";
            return count;
            }
            count++;
        }

    cout<< "0 " << endl;
    return 0;
}

void LinkedList::deleteFront(){
    //deletes the first element of the list.
	if (head  != NULL)
	{
		Node* node = head->getNext();
		delete head;
		head = node;
	}else{
	    return;
	}
}

void LinkedList::deleteEnd()
{
    //deletes the last element of the list
	if (this->isEmpty()) {
        return;
    }

    Node * ptr = NULL;
    Node * tail = head;
    while (tail->getNext() != NULL) {
        ptr = tail;
        tail = tail->getNext();
    }

    ptr->setNext(NULL);
    delete tail;
    return;
}

void LinkedList::deletePosition(int position)
{
    //deletes the element at the given position of the list
	if (this->isEmpty()) {
        return;
    }

    if (position < 1 || position > count) {
        std::cout << "out of range" << std::endl;
        return;
    }

    Node * temp = NULL;
    Node * ptr = head;
    int count = 0;
    while (ptr != NULL && count <= position) {
        count++;
        if (count == position-1) {
            temp = ptr;
        }
        ptr = ptr->getNext();
    }

    if (temp == NULL || temp->getNext() == NULL) {
        std::cout << "outside range" << std::endl;
        return;
    }

    Node * temp = temp->getNext();
    temp->setNext(temp->getNext());
    delete(temp);
    return;
}

int LinkedList::getItem(int position)
{
    //prints the value of the item
    //returns the value of the item at the given position of the list
	int num = 1;
	Node* node = head;
	while (node)
	{
		++num;
		node = node->getNext();
	}

	node = head;
	for (int i = 1; i <= position; i++)
	{
		if (i == position)
		{
			if (i < num)
			{
				if (node)
				{
					cout << node->getData() << " ";
				}
				else
				{
					cout << numeric_limits<int>::max() << " ";
				}
			}
			else
			{
				cout << numeric_limits<int>::max() << " ";
				return numeric_limits<int>::max();
			}
		}

		if (node)
		{
			node = node->getNext();
		}
	}
}

void LinkedList::printItems()
{
    //prints the value of the items of the list from head to tail
	if (this->isEmpty()) {
        return;
    }

    Node * node = head;
    while (node != NULL) {
        cout << node->getData() << " ";
        node = node->getNext();
    }
    std::cout << std::endl;
}

LinkedList::LinkedList(){
    //no parameters, which makes an empty list
    head = NULL;
}

LinkedList::LinkedList(int* newArr, int len)
{
	for (int i = 0; i < len; i++)
	{
		addEnd(newArr[i]);
	}
}

LinkedList::~LinkedList()
{
    // A destructor that manually deletes all the elements that are still in the list.
	while (head != NULL)
	{
		deleteEnd();
	}
}