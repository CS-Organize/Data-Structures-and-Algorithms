#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long
#define f(i, n) for (int i = 0; i < n; i++)

int	main(void)
{
	ios::sync_with_stdio(false), cin.tie(nullptr);

	int n; cin >> n;
	int k; cin >> k;
	int coin[n];

	f(i, n) cin >> coin[i];
	
	int cnt = 0;
	for (int i = n - 1; i >= 0; --i)
	{
		if (coin[i] > k) continue;
		while (k >= coin[i])
		{
			++cnt;
			k -= coin[i];
		}
	}
	
	cout << cnt << '\n';
	return 0;
}
