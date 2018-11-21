/*
 * test.cpp
 *
 *  Created on: Nov 20, 2018
 *      Author: ptnguyen
 */
#include"test.hh"
#include <iostream>
//using namespace std;

void Stack::push(int item)
{
	this->_stack.push_back(item);
}
int Stack::top()
{
	return this->_stack.back();
}
void Stack::pop()
{
	this->_stack.pop_back();
}

void StackV1::push(int item)
{
	node *ptr;
	ptr = new node;
	ptr->value = item;
	ptr->pNext = NULL;
	if (_top != NULL)
	{
		ptr->pNext = _top;
	}
	_top = ptr;
}

int StackV1::top()
{
	return this->_top->value;
}

void StackV1::pop()
{
	node *tmp;
	if (_top == NULL)
	{
		cout << "stack is empty";
	}
	else
	{
		tmp = _top;
		_top = _top->pNext;
		delete tmp;
	}
}
