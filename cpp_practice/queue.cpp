#include "queue.hh"

void Queue::push(int item)
{
	node *newNode;
	newNode = new node;
	newNode->value = item;
	newNode->next = NULL;

	if (this->_back == NULL && this->_front == NULL)
	{
		this->_back = newNode;
		this->_front = newNode;
	}
	else
	{
		this->_back->next = newNode;
		this->_back = newNode;
	}
}
int Queue::down()
{
	return this->_front->value;
}
void Queue::pop()
{
	node *tmp;
	tmp = this->_front;
	this->_front = this->_front->next;
	delete tmp;
}



