#include <iostream>
#include <algorithm>
using namespace std;

#define K 1000000

int	main()
{
	ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

	int n; cin >> n;
	int occur[K + 1] = { 0 };

	for (int i = 0; i < n; i++)
	{
		int num; cin >> num;
		++occur[num];
	}

	int cnt = 0, x; cin >> x;

	for (int i = 0; i < (x + 1) / 2; i++)
	{
		if (x - i <= K && occur[i] && occur[x - i] && i != x - i)
			++cnt;
	}
	cout << cnt << '\n';

	return 0;
}
