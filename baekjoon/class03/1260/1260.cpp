#include <iostream>
#include <queue>

using namespace std;

int n, m, v;

int graph[1001][1001];
bool isVisit[1001];

void reset()
{
	for (auto i = 1; i <= n; i++)
		isVisit[i] = 0;
}

// 재귀로 dfs 구현
void dfs(int v)
{
	isVisit[v] = 1;
	cout << v << " ";

	for (int i = 1; i <= n; i++)
	{
		if (isVisit[i] == 1 || graph[v][i] == 0) continue;
		dfs(i);
	}
}

void bfs(int v)
{
	queue<int> Q;
	Q.push(v);
	isVisit[v] = 1;
	cout << v << " ";
	while (!Q.empty())
	{
		v = Q.front(); Q.pop();
		for (int i = 1; i <= n; i++)
		{
			if (isVisit[i] == 1 || graph[v][i] == 0) continue;
			Q.push(i);
			isVisit[i] = 1;
			cout << i << " ";
		}
	}
}

int main()
{
	cin >> n >> m >> v;

	for (int i = 0; i < m; i++)
	{
		int x, y;
		cin >> x >> y;
		graph[x][y] = 1;
		graph[y][x] = 1;
	}

	reset();
	dfs(v);
	cout << "\n";
	reset();
	bfs(v);
	cout << "\n";
}
