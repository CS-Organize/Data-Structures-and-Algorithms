#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

#define ll long long
#define f(i, n) for (int i = 0; i < n; i++)

const ll M = 1234567891;

int	main(void)
{
	ios::sync_with_stdio(false), cin.tie(nullptr);

	int n; cin >> n;
	string S; cin >> S;
	ll ans = 0;
	ll r = 1;

	f(i, n)
	{
		ll num = (S[i] - 'a' + 1) * r;
		ans = (ans + num) % M;
		r = (r * 31) % M;
	}

	cout << ans << '\n';
	return 0;
}
