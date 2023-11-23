# [1260](https://www.acmicpc.net/problem/1260)
Created on: 2023-11-23

```cpp

// 원래 코드
// dfs를 스택으로 구현했는데 답이 나오지 않았다.
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
using namespace std;

#define ll long long
#define f(i, n) for (int i = 0; i < n; i++)

bool isConnect[1001][1001];
bool isVisit[1001][1001];
bool isPrint[1001];

int n, m;

void	DFS(int v)
{
	stack<int> S;

	S.push(v);
	while (!S.empty())
	{
		int cur = S.top(); S.pop();
		if (isPrint[cur] == 0) cout << cur << ' ';
		isPrint[cur] = 1;
		for (int i = 1; i <= n; i++)
		{
			if (isConnect[cur][i] != 1 || isVisit[cur][i] != 0) continue;
			S.push(i);
			isVisit[cur][i] = 1;
		}
	}
	cout << '\n';
}

void	BFS(int v)
{
	queue<int> Q;

	Q.push(v);
	while (!Q.empty())
	{
		int cur = Q.front(); Q.pop();
		if (isPrint[cur] == 0) cout << cur << ' ';
		isPrint[cur] = 1;
		for (int i = 1; i <= n; i++)
		{
			if (isConnect[cur][i] != 1 || isVisit[cur][i] != 0) continue;
			Q.push(i);
			isVisit[cur][i] = 1;
		}
	}
	cout << '\n';
}

void	reset()
{
	f(i, 1001)
	{
		f(j, 1001)
			isVisit[i][j] = 0;
		isPrint[i] = 0;
	}
}

int	main(void)
{
	ios::sync_with_stdio(false), cin.tie(nullptr);

	int v; cin >> n >> m >> v;

	f(i, m)
	{
		int a, b; cin >> a >> b;
		isConnect[a][b] = 1;
		isConnect[b][a] = 1;
	}

	// DFS
	reset();
	DFS(v);

	// BFS
	reset();
	BFS(v);

	return 0;
}
```

## References

- [보고 풀었다](https://breakcoding.tistory.com/117)
