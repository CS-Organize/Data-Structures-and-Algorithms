#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

#define ll long long
#define f(i, n) for (int i = 0; i < n; i++)

int	main(void)
{
	ios::sync_with_stdio(false), cin.tie(nullptr);

	int n, m; cin >> n >> m;
	map<string, string> map;

	f(i, n)
	{
		string site, password;
		cin >> site >> password;
		map.insert({site, password});
	}
	f(i, m)
	{
		string s; cin >> s;
		cout << map[s] << '\n';
	}
	return 0;
}
