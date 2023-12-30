#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

#define ll long long
#define f(i, n) for (int i = 0; i < n; i++)
#define X second
#define Y first

const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int	main(void)
{
	ios::sync_with_stdio(false), cin.tie(nullptr);

	int n, m; cin >> n >> m;
	int map[n][m];
	int dist[n][m];
	bool isVisit[n][m];
	queue<pair<int, int> > q;

	f(i, n)
	{
		fill(dist[i], dist[i] + m, 0);
		fill(isVisit[i], isVisit[i] + m, false);
	}
	f(i, n)
	{
		f(j, m)
			{
				cin >> map[i][j];
				if (map[i][j] == 1)
					dist[i][j] = -1;
				if (map[i][j] == 2)
				{
					q.push({i, j});
					isVisit[i][j] = true;
				}
			}
	}
	
	while (!q.empty())
	{
		pair<int, int> cur = q.front(); q.pop();
		f(dir, 4)
		{
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];
			if (ny >= n || ny < 0 || nx >= m || nx < 0) continue;
			if (isVisit[ny][nx] || map[ny][nx] == 0) continue;
			isVisit[ny][nx] = true;
			dist[ny][nx] = dist[cur.Y][cur.X] + 1;
			q.push({ny, nx});
		}
	}
	
	f(i, n)
	{
		f(j, m)
			cout << dist[i][j] << ' ';
		cout << '\n';
	}
	return 0;
}
