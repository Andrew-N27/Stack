#include "Stack.h"
template<typename T>
Stack<T>::Stack()
{
	size = 0;
	head = nullptr;
}

template<typename T>
void Stack<T>::push_back(T data)
{
	if (head == nullptr) {
		head = new Node<T>(data);
	}
	else
	{
		Node<T>* current = this->head;
		while (current->pNext != nullptr)
		{
			current = current->nNext;
		}
		current->pNext = new Node<T>(data);
	}
	size++;
}

template<typename T>
T& Stack<T>::operator[](const int index)
{
	int counter = 0;
	Node<T>* current = this->head;
	while (current != nullptr)
	{
		if (counter == index) 
		{
			return current->data;
		}
		current = current->nNext;
		counter++;
	}
}

template<typename T>
Stack<T>::~Stack()
{
}
