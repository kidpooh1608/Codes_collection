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
		newNode->next = this->_back;
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
	tmp = this->_back;
	while(tmp->next != this->_front)
	{
		tmp = tmp->next;
	}

	node *tmp_fr = this->_front;

	this->_front = tmp;

	delete tmp_fr;
}



