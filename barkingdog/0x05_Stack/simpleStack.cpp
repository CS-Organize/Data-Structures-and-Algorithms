#include <iostream>
#include <algorithm>
using namespace std;

const int MX = 1000005;
int dat[MX];
int pos = -1;

void	push(int x)
{
	++pos;
	dat[pos] = x;
}

void	pop()
{
	if (pos > -1)
		--pos;
	else
		cout << "Stack is empty\n";
}

void	top()
{
	if (pos > -1)
		cout << dat[pos] << '\n';
	else
		cout << "Stack is empty\n";
}

void	size()
{
	cout << pos + 1 << '\n';
}

void	test()
{
	size(); // 0
	top(); // Stack is empty
	pop(); // Stack is empty
	push(1);
	push(2);
	push(3);
	push(4);
	top(); // 4
}

int	main()
{
	test();
	return 0;
}
