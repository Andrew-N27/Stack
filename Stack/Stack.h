#pragma once
template<typename T>
class Stack
{
public:
	Stack();

	void push_back(T data);

	int GetSize()const { return size; }

	T& operator [](const int idex);

	~Stack();
private:

	template<typename T>
	class Node
	{
	public:
		Node *pNext;
		T data;

		Node(T data = T(), Node* pNext = nullptr)
		{
			this->date = data;
			this->pNext = pNext;
		}
	};
	int size;
	Node<T> *head;
};

