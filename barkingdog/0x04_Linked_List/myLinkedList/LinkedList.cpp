#include "LinkedList.hpp"

struct Node *make_node(int data)
{
	struct Node *node = new struct Node;

	node->next = NULL;
	node->prev = NULL;
	node->data = data;
	return node;
}

struct Node *make_node()
{
	struct Node *node = new struct Node;

	node->next = NULL;
	node->prev = NULL;
	node->data = 0;
	return node;
}

LinkedList::LinkedList()
{
	mHead = NULL;
	mSize = 0;
}
LinkedList::LinkedList(int data)
{
	mHead = make_node(data);
	mSize = 1;
}
void LinkedList::insert(int data, int idx)
{
	struct Node *new_node = make_node(data);
	struct Node *cur = mHead;

	++mSize;

	// head 노드 만들기
	if (mHead == NULL)
	{
		mHead = new_node;
		return ;
	}
	// head 노드 교체하기
	if (idx == 0)
	{
		new_node->next = mHead;
		mHead->prev = new_node;
		mHead = new_node;
		return ;
	}

	// idx - 1번째 노드로 이동
	for (int i = 1; cur->next != NULL && i < idx; i++)
		cur = cur->next;

	new_node->prev = cur;
	// 마지막 노드가 아니라면 다다음 노드와 새로운 노드 이어주기
	if (cur->next != NULL)
	{
		new_node->next = cur->next->next;
		new_node->next->prev = new_node;
	}
	cur->next = new_node;
}
void LinkedList::erase(int idx)
{
	struct Node *cur = mHead;
	struct Node *tmp;

	if (mSize == 0)
		return ;
	--mSize;
	// head 삭제
	if (idx == 0 || mSize == 0)
	{
		mHead = mHead->next;
		if (mHead != NULL)
			mHead->prev = NULL;
		delete cur;
		return ;
	}
	// idx - 1번째 노드로 이동
	for (int i = 1; cur->next != NULL && i < idx; i++)
		cur = cur->next;
	// 삭제할 노드 tmp
	tmp = cur->next;
	// 삭제할 노드가 마지막 노드가 아니라면
	if (tmp != NULL)
	{
		cur->next = tmp->next;
		// 삭제할 노드가 마지막에서 두 번째 노드가 아니라면
		if (cur->next != NULL)
			tmp->prev = cur;
	}
	delete tmp;
}
size_t LinkedList::getSize()
{
	return mSize;
}
void	LinkedList::traverse()
{
	struct Node *tmp = mHead;

	if (tmp == NULL)
	{
		std::cout << "* List is empty *\n";
		return ;
	}
	while (tmp != NULL)
	{
		std::cout << tmp->data << ' ';
		tmp = tmp->next;
	}
	std::cout << '\n';
}
