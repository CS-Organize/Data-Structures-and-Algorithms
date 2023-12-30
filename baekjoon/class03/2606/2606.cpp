#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

#define ll long long
#define f(i, n) for (int i = 0; i < n; i++)

bool isConnect[101][101];
bool virus[101]; 

int	main(void)
{
	ios::sync_with_stdio(false), cin.tie(nullptr);

	int n, m; cin >> n >> m;
	queue<int> q;

	f(i, m)
	{
		int from, to; cin >> from >> to;
		isConnect[from][to] = true;
		isConnect[to][from] = true;
		if (from == 1)
			q.push(to);
	}

	while (!q.empty())
	{
		int cur = q.front(); q.pop();
		if (virus[cur]) continue;
		for (int i = 2; i <= n; i++)
		{
			if (isConnect[cur][i]) 
				q.push(i);
		}
		virus[cur] = true;
	}

	int cnt = 0;
	for(int i = 2; i <= n; ++i)
		if (virus[i])
			++cnt;
	cout << cnt << '\n';
	return 0;
}
