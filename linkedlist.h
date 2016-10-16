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
};



// do not edit below this line

#endif
