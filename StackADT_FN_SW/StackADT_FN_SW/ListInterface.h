#ifndef _List_Interface
#define _List_Interface

template <class ItemType>

class ListInterface
{
public:

	virtual int size() const = 0;		//Counts the # of items in the list
	virtual bool isEmpty() = 0;			//Checks if list is empty
	virtual bool push(const ItemType& newEntry) = 0;		//Adds in new item to the list
	virtual bool pop() = 0;			//Removes the last or first item in list depending on what type of list it is
	virtual bool peek(ItemType &targetItem) = 0;			//Checks where the item is

};
#endif