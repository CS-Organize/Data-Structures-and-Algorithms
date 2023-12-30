#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

#define ll long long
#define f(i, n) for (int i = 0; i < n; i++)

int	main(void)
{
	ios::sync_with_stdio(false), cin.tie(nullptr);

	priority_queue<int, vector<int>, greater<int> > pq;
	int n; cin >> n;

	f(i, n)
	{
		int x; cin >> x;
		if (x == 0)
		{
			if (pq.empty())
				cout << "0\n";
			else
			{
				cout << pq.top() << '\n';
				pq.pop();
			}
		}
		else
			pq.push(x);
	}
	return 0;
}
