#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long
#define f(i, n) for (int i = 0; i < n; i++)

int	main(void)
{
	ios::sync_with_stdio(false), cin.tie(nullptr);

	int	n, m; cin >> n >> m;
	int	arr1[n], arr2[m];

	f(i, n) cin >> arr1[i];
	f(i, m) cin >> arr2[i];

	int	idx1 = 0, idx2 = 0;
	f(i, n + m)
	{
		if (idx1 >= n)
		{
			cout << arr2[idx2] << ' ';
			++idx2;
		}
		else if (idx2 >= m)
		{
			cout << arr1[idx1] << ' ';
			++idx1;
		}
		else if (arr1[idx1] > arr2[idx2])
		{
			cout << arr2[idx2] << ' ';
			++idx2;
		}
		else
		{
			cout << arr1[idx1] << ' ';
			++idx1;
		}
	}
	return 0;
}
