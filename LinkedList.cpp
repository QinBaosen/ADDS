#include "LinkedList.h"
#include <iostream>
#include <limits> // Necessary Libraries
using namespace std;

void LinkedList::addFront(int newItem) {
    // inserts a new node, containing the newItem, at the beginning of the list.

    Node* node = new Node();
	node->setData(newItem);
	node->setNext(head);
	head = node;

}

void LinkedList::addEnd(int newItem) {
    // inserts a new node, containing the newItem, at the end of the list.

	if (!head){
		head = new Node();
		head->setData(newItem);
	}
	else{
		Node* node = head;
		while (node->getNext() != NULL){
			node = node->getNext();
		}
		node->setNext(new Node());
		node = node->getNext();
		node->setData(newItem);
	}

}


void LinkedList::addAtPosition(int position, int newItem) {
    //inserts a new node, containing the newItem the position-th member of the list.
	if(position <= 1) {
    	addFront(newItem);
    }
    else {

    	Node *node = new Node();
    	node = head;
   	 	int counter = 1;

    	while ((counter < position -1) && (node->next != NULL)) {
    		node = node->next;
    		counter++;
    	}

    	if (node->next == NULL) {
    		addEnd(newItem);
    	} else if (counter == position -1) {
    		Node* temp = new Node();
			temp->setData(newItem);
    		temp->next = node->next;
    		node->next = temp;
    	}
	}
}


int LinkedList::search(int item) {
    //searches the list for the first instance of the  item
	bool result = false;
	int count = 1;
	Node* n = head;
	while (n){
		if (n->getData() == item){
			result = true;
			break;
		}
		else{
			++count;
			n = n->getNext();
		}
	}

	if (result == true){
		cout << count << " ";
		return count;
	}
	else{
		cout << "0 ";
		return 0;
	}
}

void LinkedList::deleteFront() {
    //deletes the first element of the list.

	if (head != NULL){
		Node* node = head->getNext();
		delete head;
		head = node;
	}

}

void LinkedList::deleteEnd() {
    // deletes the last element of the list.
	Node* temp1 = head;
	Node* temp2;

	if (head == NULL) {
  		return;
  	}

	while (temp1->next != NULL) {
		temp2 = temp1;
		temp1 = temp1->next;
	}

	if (temp2 != NULL) {
		temp2->next = NULL;
	}
}


void LinkedList::deletePosition(int position) {
    //deletes the element at the given position of the list.If the position < 1
	//or it is larger than the size of the list, only print ”outside range”.
	int nr = 1;
	Node* node = head;
	while (node)
	{
		++nr;
		node = node->getNext();
	}

	if (position < 1){
		cout << "outside range" << endl;
		return;
	}

	Node* new_head = nullptr;
	Node* temp = head;
	Node* del = nullptr;
	int nc = 1;

	if (head == nullptr){
		cout << "outside range" << endl;
		return;
	}

	if (position == 1){
		new_head = temp->getNext();

		delete temp;

		if (new_head == nullptr){
			head = nullptr;
		}
		else{
			head = new_head;
		}

		return;
	}

	nc++;

	while (temp){
		if (position == nc){
			del = temp->getNext();
			temp->setNext(temp->getNext()->getNext());
			delete del;
			return;
		}
		else{
			temp = temp->getNext();
			nc++;
		}
	}
}


int LinkedList::getItem(int position) {
    //prints the value of the item (followed by a space)
    //and returns the value of the item at the given position of the list
	int outOfRange = std::numeric_limits < int >::max();
    if (position < 1) {
        std::cout << outOfRange << " ";
        return outOfRange;
    }

    Node * get = nullptr;
    Node * ptr = head;
    int count = 0;
    while (ptr != nullptr && count <= position) {
        count++;
        if (count == position) {
            get = ptr;
        }
        ptr = ptr->getNext();
    }

    if (get == nullptr) {
        std::cout << outOfRange << " ";
        return outOfRange;
    }

    std::cout << get->getData() << " ";
    return get->getData();
}


void LinkedList::printItems(){

    //prints the value of the items of the list from head to tail
	Node* node = head;
	while (node)
	{
		cout << node->getData() << " ";
		node = node->getNext();
	}

}
LinkedList::LinkedList() {
    //A constructor with no parameters, which makes an empty list.
	head = nullptr;
}

LinkedList::LinkedList(int array[], int size) {
    //A constructor that takes an array of integers and makes a linked list,
	//containing all the elements of the array,
	//in the same order.As the second parameter, it takes the size of the array.
	for (int i = 0; i < size; i++)
	{
		addEnd(array[i]);
	}

}
LinkedList::~LinkedList() {
    //A destructor that manually deletes all the elements that are still in the list.
	while (head)
	{
		deleteEnd();
	}
}