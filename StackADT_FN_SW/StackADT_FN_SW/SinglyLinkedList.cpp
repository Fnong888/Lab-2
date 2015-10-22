#include "SinglyLinkedList.h"
#include <iostream>
using namespace std;

template <class ItemType>
SinglyLinkedList<ItemType>::SinglyLinkedList(const SinglyLinkedList &newList)
{
	itemCount = newList.itemCount;
	
	if (newList.headPtr == 0)
	{
		headPtr = 0;
	}
	else
	{
		headPtr = new Node<ItemType>();
		headPtr->setItem(newList.headPtr->getItem());
		headPtr->setNext(newList.headPtr->getNext());

		Node<ItemType> *thisPtr = headPtr;						//thisPtr will be used to traverse through the list
		Node<ItemType> *newNodePtr = headPtr;					//newNodePtr copies all the nodes from newList
		thisPtr = thisPtr->getNext();

		while (thisPtr != 0)
		{
			ItemType nextItem = thisPtr->getItem();
			Node<ItemType> *newNode = new Node<ItemType>(nextItem);
			newNodePtr->setNext(newNode);
			newNodePtr = newPtr->getNext();
			thisPtr = thisPtr->getNext();
		}

		newHeadPtr->setNext(0);
	}

}

template <class ItemType>
void SinglyLinkedList<ItemType>::add(const ItemType &newItem)
{
	Node<ItemType> *newNodePtr = new Node<ItemType>();
	Node<ItemType> *pos = headPtr;
	Node<ItemType> *prevPtr = 0;

	while (pos != 0 && pos->getItem() != 0)
	{
		prevPtr = pos;
		pos = pos->getNext();
	}

	newNodePtr->setNext(pos);
	if (prevPtr != 0)
	{
		prevPtr->setNext(newNodePtr);
	}
	else
	{
		headPtr = newNodePtr;
	}
	
	itemCount++;

}

template <class ItemType>
bool SinglyLinkedList<ItemType>::isEmpty() const
{
	bool empty = false;
	
	if (itemCount == 0)
	{
		
		empty = true;
	}
	
	
	return empty;
}