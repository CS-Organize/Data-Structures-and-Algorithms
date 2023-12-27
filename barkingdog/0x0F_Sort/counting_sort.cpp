#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long
#define f(i, n) for (int i = 0; i < n; i++)


const int	N = 10;
int			arr[N] = {5, -2, 1, 2, 3, 11, -3, 4, 133, -1};

int cnt[1001];

int	main(void)
{
	ios::sync_with_stdio(false), cin.tie(nullptr);

	f(i, N) ++cnt[arr[i] + 500];

	int i = 0;
	int idx = 0;
	while (i < N)
	{
		while (cnt[idx])
		{
			--cnt[idx];
			++i;
			cout << idx - 500 << ' ';
		}
		++idx;
	}
	return 0;
}
