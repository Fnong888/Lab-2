#ifndef _SINGLY_LINKED_LIST
#define _SINGLY_LINKED_LIST

#include "Node.h"
#include <iostream>
using namespace std;

template <class ItemType>

class SinglyLinkedList
{
private:
	int itemCount;

public:
	SinglyLinkedList();
	SinglyLinkedList(const SinglyLinkedList<ItemType> &newList);
	~SinglyLinkedList();		//Destructor should use emptyList function

	bool isEmpty() const;			//Checks if list is empty
	void add();			
	void remove();		
	ItemType find(const ItemType &targetItem);			//Searches for requested item in list
	int size() const;			//Checks the # of items in list
	void emptyList();			//Clears out the entire list
};

#endif