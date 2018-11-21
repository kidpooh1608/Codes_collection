/*
 * test.hh
 *
 *  Created on: Nov 20, 2018
 *      Author: ptnguyen
 */

#ifndef TEST_HH_
#define TEST_HH_
//#include <bits/stdc++.h>
#include<list>
using namespace std;

class Stack
{
private:
	list <int> _stack;

public:
	void push(int item);
	int top();
	void pop();
};

typedef struct node
{
	int value;
	node *pNext;

} node;

class StackV1
{
private:
	node *_top;

public:
	StackV1()
	{
		this->_top = NULL;
	}
	void push(int item);
	int top();
	void pop();
};

#endif /* TEST_HH_ */
