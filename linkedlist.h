#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "node.h"

// TODO your code goes here:
template<typename T>
class LinkedList {

private:
	Node<T> * head;
	Node<T> * tail;
	int size;

public:
	LinkedList() 
	: head(nullptr), tail(nullptr), size(0) {}

	void push_front(const T & itemIn) {
		Node<T> newFront(T);
		if (size > 0) {
			newFront.next = head;
			head->previous = &newFront;	
		}

		head = &newFront;
		if (size == 0) tail = &newFront;

		++size;
	}
};



// do not edit below this line

#endif
