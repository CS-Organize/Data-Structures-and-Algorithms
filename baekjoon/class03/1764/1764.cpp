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
	map<string, int> name;
	vector<string> ans;

	f(i, n)
	{
		string input; cin >> input;
		name.insert({input, i});
	}
	f(i, m)
	{
		string input; cin >> input;
		if (name.find(input) != name.end())
			ans.push_back(input);
	}
	sort(ans.begin(), ans.end());
	cout << ans.size() << '\n';
	for (vector<string>::iterator it = ans.begin(); it != ans.end(); ++it)
		cout << *it << '\n';	
	return 0;
}
