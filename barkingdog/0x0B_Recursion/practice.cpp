#include <iostream>
#include <algorithm>
using namespace std;

void	print(int n)
{
	if (n <= 0)
	{
		cout << '\n';
		return ;
	}
	cout << n << ' ';
	print(n - 1);
}

int	sum(int n)
{
	if (n <= 1) return 1;
	return n + sum(n - 1);
}

int	main(void)
{
	print(3);
	cout << sum(10) << '\n';
	return 0;
}
