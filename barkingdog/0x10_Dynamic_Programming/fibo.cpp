#include <iostream>
#include <algorithm>
using namespace std;

int fibo(int n)
{
	int f[20];
	f[0] = f[1] = 1;
	for (int i = 2; i <= n; i++)
	{
		f[i] = f[i - 1] + f[i - 2];
	}
	return f[n];
}

int	main(void)
{
	cout << fibo(2) << '\n';
	return 0;
}
