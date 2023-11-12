#include <iostream>
#include <algorithm>
using namespace std;

const int MX = 100005;
int dat[2 * MX + 1];
// Deque는 Stack과는 다르게 양쪽으로 확장되는 구조기 때문에 초기값을 MX로 둔다.
int head = MX;
int tail = MX;

void	push_front(int x) // MX
{
	--head;
	dat[head] = x;
	if (head == -1)
		head = 2 * MX;
}

void	push_back(int x)
{
	dat[tail] = x;
	++tail;
	if (tail == 2 * MX + 1)
		tail = 0;
}

void	pop_front()
{
	if (head != tail)
		++head;
}

void	pop_back()
{
	if (tail != head)
		--tail;
}

void	front()
{
	if (head == tail)
		cout << "-1\n";
	else
		cout << dat[head] << '\n';
}

void	back()
{
	if (tail == head)
		cout << "-1\n";
	else
		cout << dat[tail - 1] << '\n';
}

void	size()
{
	cout << abs(tail - head) << '\n';
}

void	test()
{
	front(); // -1
	back(); // -1
	size(); // 0
	push_front(2);
	push_back(3);
	front(); // 2
	back(); // 3
	size(); // 2
	push_front(1); // dat[MX] = 1, front = MX - 1
	push_back(4); // dat[]
	front(); // 1
	back(); // 4
	size(); // 4
}

int	main()
{
	test();
	return 0;
}
