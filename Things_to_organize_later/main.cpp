#include <algorithm>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>

using namespace	std;

int	func1(int n)
{
	int	sum;

	sum = 0;
	++n;
	for (int i = 1; i < n; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	return (sum);
}

int	func2(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			if (arr[i] + arr[j] == 100)
				return (1);
	return (0);
}

int	func3(int n)
{
	for (int i = 1; i <= n / i; i++)
		if (i * i == n)
			return (1);
	return (0);
}

int	func4(int n)
{
	int	i;
	for (i = 1; i <= n; i *= 2)
		;
	return (i / 2);
}

int	main(void)
{
	// int a[] = {1, 52, 48};
	// int b[] = {50, 42};
	// int c[] = {4, 13, 63, 87};
	// cout << func4(5) << '\n';
	// cout << func4(97615282) << '\n';
	// cout << func4(1024) << '\n';
	cout << 512 * 1000 * 1000 / 4 << '\n';
}
