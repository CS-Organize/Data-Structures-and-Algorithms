#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

/* 
4
LSRK
2

*/
#define ll long long
#define f(i, n) for (int i = 0; i < n; i++)

int	main(void)
{
	ios::sync_with_stdio(false), cin.tie(nullptr);

	int n; cin >> n;
	string input; cin >> input;
	
	int s = 0, l = 0, cnt = 0;
	f(i, n)
	{
		if (input[i] == 'L')
		{
			++l;
		}
		else if (input[i] == 'R')
		{
			if (l == 0) break;
			--l;
			++cnt;
		}
		else if (input[i] == 'S')
		{
			++s;
		}
		else if (input[i] == 'K')
		{
			if (s == 0) break;
			--s;
			++cnt;
		}
		else
		{
			++cnt;
		}
	}
	cout << cnt << '\n';
	return 0;
}
