#include <iostream>
#include <algorithm>
using namespace std;

// 선형 큐를 배열로 구현하면 원소의 삭제가 발생할 때마다 배열이 뒤로 밀림
// => 배열로 구현 시 원형 큐로 구현

const int MX = 1000005;
int dat[MX];
int head = 0;
int tail = 0; // 마지막 원소 + 1

void	push(int x)
{
	dat[tail] = x;
	++tail;
	if (tail == MX)
		tail = 0;
}

void	pop()
{
	if (head != tail)
		++head;
	if (head == MX)
		head = 0;
}

void	front()
{
	cout << dat[head] << '\n';
}

void	back()
{
	cout << dat[tail - 1] << '\n';
}

void	size()
{
	cout << tail - head << '\n';
}

void	test()
{
	push(1);
	push(2);
	push(3);
	push(4);
	push(5);
	push(6);
	size();
	front();
	back();
	pop();
	front();
}

int	main()
{
	test();
	return 0;
}
