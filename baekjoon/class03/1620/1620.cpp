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
	map<string, int> pokemon;
	vector<string> name;

	f(i, n)
	{
		string tmp; cin >> tmp;
		name.push_back(tmp);
		pokemon.insert({tmp, i});
	}
	f(i, m)
	{
		string input; cin >> input;
		if ('0' <= input[0] && input[0] <= '9')
			cout << name[stoi(input) - 1] << '\n';
		else
			cout << pokemon[input] + 1 << '\n';
	}
	return 0;
}
