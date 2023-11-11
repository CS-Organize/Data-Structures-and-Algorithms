#include <iostream>
#include <algorithm>

struct Node
{
	struct Node *next;
	struct Node *prev;
	int data;
};

class LinkedList
{
private:
	struct Node *mHead;
	size_t mSize;
public:
	LinkedList();
	LinkedList(int data);
	void insert(int data, int idx);
	void erase(int idx);
	void traverse();
	size_t getSize();
};
