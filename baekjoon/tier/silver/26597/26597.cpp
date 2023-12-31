#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long
#define f(i, n) for (int i = 0; i < n; i++)

int	main(void)
{
	ios::sync_with_stdio(false), cin.tie(nullptr);

	int q; cin >> q;
	ll mx = 1000000000000000001;
	ll mn = -1000000000000000001;
	string ans = "Hmm...\n";
	int idx = 0;

	f(i, q)
	{
		ll num; cin >> num;
		char input; cin >> input;

		if (input == '^') mn = max(mn, num);
		if (input == 'v') mx = min(mx, num);
		if (mx - mn < 2)
		{
			ans = "Paradox!\n";
			idx = i + 1;
			break;
		}
		if (mx - mn == 2 && idx == 0)
		{
			ans = "I got it!\n";
			idx = i + 1;
		}
	}

	cout << ans;
	if (idx) cout << idx << '\n';

	return 0;
}
