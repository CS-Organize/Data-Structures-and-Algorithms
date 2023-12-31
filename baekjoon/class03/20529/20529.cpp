#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long
#define f(i, n) for (int i = 0; i < n; i++)

void	testCase()
{
	int n; cin >> n;
	string students[n];

	f(i, n) cin >> students[i];
	if (n > 32)
	{
		cout << "0\n";
		return ;
	}

	int minDiff = 0x7fffffff;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				int diff = 0;
				f(l, 4)
				{
					if (students[i][l] != students[j][l]) ++diff;
					if (students[j][l] != students[k][l]) ++diff;
					if (students[k][l] != students[i][l]) ++diff;
				}
				if (minDiff > diff) minDiff = diff;
			}
		}
	}
	cout << minDiff << '\n';
}

int	main(void)
{
	ios::sync_with_stdio(false), cin.tie(nullptr);

	int t; cin >> t;
	f(i, t) testCase();
	return 0;
}
