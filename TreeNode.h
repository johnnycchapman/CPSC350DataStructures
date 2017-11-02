#include "ListNode.h"

template <class T>
class TreeNode
{
	//private:

	public:
		TreeNode();
		~TreeNode();
		T removeFront();
		void insertBack(T d);
		unsigned int getSize();
		void printList();
    bool isEmpty();

		ListNode<T> *front;
		ListNode<T> *back;
		unsigned int size;
};

template <class T>
TreeNode<T>::TreeNode()
{
	size = 0;
	front = NULL;
	back = NULL;
}

template <class T>
TreeNode<T>::~TreeNode(){};

template <class T>
unsigned int TreeNode<T>::getSize()
{
	return size;
}

template <class T>
void TreeNode<T>::insertBack(T d)
{
	ListNode<T> *node = new ListNode<T>(d);

	// IF LIST IS EMPTY
	if (size == 0)
	{
		front = node;
	}

	else
	{
		back->next = node;
		node->prev = back;
	}

	back = node;
	//node = back;
	++size;
}

template <class T>
T TreeNode<T>::removeFront()
{

	ListNode<T> *oldFront = front;

    T oldData = oldFront->data;

    // IF THERE IS ONLY ONE ELEMENT
	if (front->next == NULL)
	{
        front = NULL;
        back = NULL;
	}

    // MORE THAN ONE ELEMENT
	else
	{
		front->next->prev = NULL;

        front = front->next;
	}

	delete oldFront;

	size--;

	return oldData;
}

template <class T>
void TreeNode<T>::printList()
{
	ListNode<T> *current = front;

	while (true)
	{
		if (current->next == NULL)
		{
			break;
		}

		cout << current->data << endl;
		current = current->next;
	}
}

template <class T>
bool TreeNode<T>::isEmpty()
{
    return (size == 0);
}
