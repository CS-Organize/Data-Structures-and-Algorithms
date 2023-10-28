/* #include <iostream>
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
} */

// https://dundung.tistory.com/152

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
		long long n = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);

		if (n == 0 && r1 == r2)
			cout << -1 << '\n';
		else if (n == 0 && r1 != r2)
			cout << 0 << '\n';
		else if (n > (r1 + r2) * (r1 + r2))
			cout << 0 << '\n';
		else if (n < (r1 + r2) * (r1 + r2))
			cout << 2 << '\n';
		else if (n == (r1 + r2) * (r1 + r2))
			cout << 1 << '\n';
		// 내접도 고려해줄 것 !!
	}
	return (0);
}

