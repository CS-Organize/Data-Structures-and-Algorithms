#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long
#define f(i, n) for (int i = 0; i < n; i++)

int	main(void)
{
	ios::sync_with_stdio(false), cin.tie(nullptr);

	while (true)
	{
		string s, t;
		cin >> s >> t;

		if (cin.eof()) break;
		
		size_t j = 0;
		for (size_t i = 0; i < t.length(); i++)
		{
			if (j >= s.length())
				break;
			if (t[i] == s[j])
				++j;
		}
		if (j >= s.length()) cout << "Yes\n";
		else cout << "No\n";
	}
	return 0;
}
