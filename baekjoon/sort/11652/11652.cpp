#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long
#define f(i, n) for (int i = 0; i < n; i++)

bool	cmp(long a, long b)
{
	return a < b;
}

int	main(void)
{
	ios::sync_with_stdio(false), cin.tie(nullptr);

	int n; cin >> n;
	long arr[n];

	f(i, n) cin >> arr[i];

	sort(arr, arr + n);

	pair<long, int> maxFreq = {arr[0], 1};
	int cnt = 1;
	for (int i = 1; i < n; i++)
	{
		if (arr[i - 1] == arr[i]) ++cnt;
		else cnt = 1; 
		if (cnt > maxFreq.second)
		{
			maxFreq.first = arr[i - 1];
			maxFreq.second = cnt;
		}
	}
	cout << maxFreq.first << '\n';
	return 0;
}
