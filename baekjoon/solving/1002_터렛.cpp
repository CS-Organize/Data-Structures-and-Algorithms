#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	long long t;

	cin >> t;
	for (long long i = 0; i < t; i++)
	{
		long long x1, y1, r1, x2, y2, r2, cnt = 0;

		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		for (long long x = -10000; x <= 10000; x++)
		{
			for (long long y = -10000; y <= 10000; y++)
			{
				if (r1 * r1 != (x - x1) * (x - x1) + (y - y1) * (y - y1))
					continue;
				if (r2 * r2 != (x - x2) * (x - x2) + (y - y2) * (y - y2))
					continue;
				++cnt;
			}
			if (cnt > 2)
				break;
		}
		if (cnt > 2)
			cout << -1 << '\n';
		else
			cout << cnt << '\n';
	}
	return (0);
}

// https://dundung.tistory.com/152
