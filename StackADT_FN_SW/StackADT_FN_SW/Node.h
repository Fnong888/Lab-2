#ifndef _NODE
#define _NODE

template <class ItemType>

class Node
{
private:
	ItemType item;
	Node<ItemType> *nextPtr;			//Current nodePtr
	Node<ItemType> *tailPtr;			//Like the assignment says, we wont use this node

public:
	Node()													{ item = 0; nextPtr = 0; tailPtr = 0;}
	Node(const ItemType &newItem)							{ item = newItem; nextPtr = 0; tailPtr = 0;}
	void setItem(const ItemType &newItem)					{ item = newItem; }
	void setNext(const Node<ItemType> *next)				{ nextPtr = next; }				//Used to set currNode as the next Node in the list
	ItemType getItem() const								{ return item; }
	Node<ItemType> *getNext() const							{ return *nextPtr; }
};

#endif