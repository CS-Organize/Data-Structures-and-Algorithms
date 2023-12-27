#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long
#define f(i, n) for (int i = 0; i < n; i++)

long	make_inverse_element(long e)
{
	long out = 0;

	while (e)
	{
		out = out * 10 + e % 10;
		e /= 10;
	}
	return out;
}

int	main(void)
{
	ios::sync_with_stdio(false), cin.tie(nullptr);

	int n; cin >> n;
	long arr[n];

	f(i, n)
	{
		long x; cin >> x;
		arr[i] = make_inverse_element(x);
	}
	sort(arr, arr + n);
	f(i, n) cout << arr[i] << '\n';
	return 0;
}
