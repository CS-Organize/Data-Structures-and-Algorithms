#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long
#define f(i, n) for (int i = 0; i < n; i++)

int	main(void)
{
	ios::sync_with_stdio(false), cin.tie(nullptr);

	int t; cin >> t;
	f(i, t)
	{
		int n; cin >> n;
		int m; cin >> m;
		
		if (n < 12 || m < 4) 
		{
			cout << "-1\n";
			continue;
		}
		cout << m * 11 + 4 << '\n';
	}
	return 0;
}
