# [2178](https://www.acmicpc.net/problem/2178)
Created on: 2023-11-14

```cpp

// 원래 풀이

#include <iostream>
#include <algorithm>
#include <string>
#include <queue>
using namespace std;

#define X first
#define Y second

int maze[102][102];
int dist[102][102];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
queue<pair<int, int> > Q;


int	main()
{
	ios::sync_with_stdio(false), cin.tie(nullptr);

	int n, m; cin >> n >> m;

	// maze 파싱 + dist -1 초기화
	for (int i = 0; i < n; i++)
	{
		string map; cin >> map;
		for (int j = 0; j < m; j++)
		{
			maze[i][j] = map[j] - '0';
			dist[i][j] = -1;
		}
	}

	Q.push(make_pair(0, 0));
	dist[0][0] = 1;

	while (!Q.empty())
	{
		pair<int, int> cur = Q.front(); Q.pop();
		for (int dir = 0; dir < 4; dir++)
		{
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];
			// 좌표에서 벗어날 때
			if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
			// 방문을 했거나 미로가 아닐 때
			if (maze[nx][ny] != 1) continue;
			// **처음에 이렇게 풀었으나 갔던 곳에 가는 문제가 발생하여 메모리 초과 발생**
			if (dist[nx][ny] != -1)
			{
				dist[cur.X][cur.Y] = dist[nx][ny] = + 1;
				continue;
			}
			Q.push(make_pair(nx, ny));
		}
	}
	cout << dist[n - 1][m - 1] << '\n';
	return 0;
}

```

## References


