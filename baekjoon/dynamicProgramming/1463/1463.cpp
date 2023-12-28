#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

#define ll long long
#define f(i, n) for (size_t i = 0; i < n; i++)

int	main(void)
{
	ios::sync_with_stdio(false), cin.tie(nullptr);

	int x; cin >> x;
	int d[x + 1];

	d[1] = 0;
	for (int i = 2; i <= x; i++)
	{
		d[i] = d[i - 1] + 1;
		if (i % 3 == 0 && d[i] > d[i / 3] + 1)
			d[i] = d[i / 3] + 1;
		if (i % 2 == 0 && d[i] > d[i / 2] + 1)
			d[i] = d[i / 2] + 1;
	}
	cout << d[x] << '\n';
	return 0;
}
