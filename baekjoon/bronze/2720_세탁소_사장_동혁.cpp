#include <iostream>
#include <cstring>
using namespace std;

int	main()
{
	int	t;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		int sum, q = 0, d = 0, n = 0, p = 0;
		cin >> sum;
		while (sum > 0)
		{
			if (sum >= 25)
			{
				++q;
				sum -= 25;
			}
			else if (sum >= 10)
			{
				++d;
				sum -= 10;
			}
			else if (sum >= 5)
			{
				++n;
				sum -= 5;
			}
			else if (sum >= 1)
			{
				++p;
				sum -= 1;
			}
		}
		cout << q << ' ' << d << ' ' << n << ' ' << p << endl;
	}

	return (0);
}
