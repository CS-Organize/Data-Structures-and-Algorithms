#include <iostream>
using namespace std;

int main()
{
	int	m, n, i, j, sum = 0, min = 0;

	cin >> m >> n;
	for (i = m; i <= n; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
				break;
		}
		if (sum == 0)
			min = i;
		if (i == j)
			sum += i;
	}
	if (sum == 0)
		cout << -1;
	else
		cout << sum << '\n' << min;
	return (0);
}
