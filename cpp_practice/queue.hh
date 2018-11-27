#ifndef QUEUE_HH_
#define QUEUE_HH_
using namespace std;
typedef struct node
{
	int value;
	node *next;
} node;

class Queue
{
private:
	node *_back;
	node *_front;

public:
	Queue()
{
		this->_back = NULL;
		this->_front = NULL;
}
	void push(int item);
	int down();
	void pop();
};




#endif /* QUEUE_HH_ */
