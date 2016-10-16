#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "node.h"

// TODO your code goes here:
template<typename T>
class LinkedList {

private:
	Node<T> * head;
	Node<T> * tail;
	int items;

public:
	LinkedList() 
	: head(nullptr), tail(nullptr), items(0) {}

	void push_front(const T & itemIn) {
		Node<T> newFront(T);
		if (items > 0) {
			newFront.next = head;
			head->previous = &newFront;	
		}

		head = &newFront;
		if (items == 0) tail = &newFront;

		++items;
	}

	T & front() const {
		return head->data;
	}

	void push_back(const T & itemIn) {
		Node<T> newTail(T);
		if (items > 0) {
			newTail.previous = tail;
			tail->next = &newTail;
		}

		tail = &newTail;
		if (items == 0) head = &newTail;

		++items;
	}

	T & back() const {
		return tail->data;
	}

	int size() const {
		return items;
	}
};



// do not edit below this line

#endif
