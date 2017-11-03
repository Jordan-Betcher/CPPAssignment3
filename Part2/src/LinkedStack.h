/*
 *  Name: LinkedStack.h
 *  Author: Jordan Betcher
 *  Created on: Oct 30, 2017
 *  Description: Creates a Stack made of Nodes.
 *  Comment: Copied class over and added methods.
 *  		 Can't change variable names as much as I would like to.
 */

#ifndef LINKEDSTACK_H_
#define LINKEDSTACK_H_

template<class T>
struct Node
{
		T data;
		Node<T>* next;
};

template<class T>
class LinkedStack
{
		Node<T> *top;
	public:
		LinkedStack();
		bool isEmpty();
		int getSize();
		T getTop();
		void push(T value);
		T pop();
		virtual ~LinkedStack();
};

//Creates the LinkedStack Object
template <class T>
LinkedStack<T>::LinkedStack(){
	top = NULL;
}

//Returns a bool of whether the stack is empty or not
template<class T>
inline bool LinkedStack<T>::isEmpty()
{
	return (top == NULL);
}

//Returns the size of the stack
template<class T>
inline int LinkedStack<T>::getSize()
{
	int count = 0;
	Node<T>* currentPointer = top;
	while (currentPointer != NULL)
	{
		count++;
		currentPointer = currentPointer->next;
	}

	return count;
}

//Returns the top of the stack's data
template<class T>
inline T LinkedStack<T>::getTop()
{
	return top->data;
}

//Pushes a new value into the stack
template<class T>
inline void LinkedStack<T>::push(T value)
{
	Node<T> *pNewNode = new Node<T>;
	pNewNode->data = value;
	pNewNode->next = NULL;

	if (isEmpty())
	{
		top = pNewNode;
	}
	else
	{
		pNewNode->next = top;
		top = pNewNode;
	}

}

//Returns the top data and removes the top from the stack
template<class T>
inline T LinkedStack<T>::pop()
{
	T data = top->data;

	top = top->next;

	return data;
}

//Destroys the stack
template<class T>
inline LinkedStack<T>::~LinkedStack()
{
		top = NULL;
}

#endif /* LINKEDSTACK_H_ */
