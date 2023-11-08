#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int	main()
{
	ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

	int n; cin >> n;
	for (int i = 0; i < n; i++)
	{
		string s; cin >> s;
		int alpha[26] = { 0 }, flag = 0;

		for (int j = 0; s[j] != '\0'; j++)
			++alpha[(int)s[j]-'a'];

		cin >> s;
		for (int j = 0; s[j] != '\0'; j++)
			--alpha[(int)s[j]-'a'];

		for (int j = 0; j < 26; j++)
		{
			if (alpha[j] != 0)
				flag = 1;
		}

		if (flag)
			cout << "Impossible\n";
		else
			cout << "Possible\n";

	}

	return 0;
}
