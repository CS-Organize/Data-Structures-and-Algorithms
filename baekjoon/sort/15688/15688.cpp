#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long
#define f(i, n) for (int i = 0; i < n; i++)

int	cnt[2000001];

int	main(void)
{
	ios::sync_with_stdio(false), cin.tie(nullptr);

	int n; cin >> n;
	f(i, n)
	{
		int x; cin >> x;
		++cnt[x + 1000000];
	}

	int i = 0;
	int idx = 0;
	while (i < n)
	{
		while (cnt[idx])
		{
			--cnt[idx];
			++i;
			cout << idx - 1000000 << '\n';
		}
		++idx;
	}
	return 0;
}
