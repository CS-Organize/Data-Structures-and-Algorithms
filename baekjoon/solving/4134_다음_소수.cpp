#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	unsigned int n, i, cnt, cpy;
	cin >> n;

	if (n == 1)
	{
		cout << 2;
		return (0);
	}
	cpy = n;
	while (n)
	{
		cnt = 1;
		i = 2;
		while (i <= n / i)
		{
			if (n % i == 0)
				++cnt;
			++i;
		}
		if (cnt == 1)
		{
			if (cpy != n)
				cout << n;
			return (0);
		}
		++n;
	}
	if (cpy != n)
		cout << n;
	cout << n;
	return (0);
}
