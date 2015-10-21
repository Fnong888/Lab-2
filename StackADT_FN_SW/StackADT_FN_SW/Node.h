#ifndef _NODE
#define _NODE

template <class ItemType>

class Node
{
private:
	ItemType item;
	Node<ItemType> *currNode;			//Current nodePtr
	Node<ItemType> *headPtr;
	Node<ItemType> *tailPtr;			//Like the assignment says, we wont use this node

public:
	Node();
	Node(const ItemType &newItem);
	void setItem(const Itemtype &newItem);
	void setNode(const Node<ItemType> *nextNode);		//Used to set currNode as the next Node in the list
	ItemType getItem() const;
	Node<ITemType> *getNext() const;
};

#endif