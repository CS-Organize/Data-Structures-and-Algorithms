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

queue<pair<int, int> > q;
bool isVisit[601][601];

int	main(void)
{
	ios::sync_with_stdio(false), cin.tie(nullptr);

	int n, m; cin >> n >> m;
	string map[n];

	f(i, n)
	{
		cin >> map[i];
		f(j, m)
		{
			if (map[i][j] == 'I')
			{
				q.push({i, j});
				isVisit[i][j] = true;
			}
		}
	}

	int cnt = 0;

	while (!q.empty())
	{
		pair<int, int> cur = q.front(); q.pop();
		f(dir, 4)
		{
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];

			if (ny >= n || ny < 0 || nx >= m || nx < 0) continue;
			if (isVisit[ny][nx] || map[ny][nx] == 'X') continue;

			if (map[ny][nx] == 'P') ++cnt;
			isVisit[ny][nx] = true;
			q.push({ny, nx});
		}
	}

	if (!cnt) cout << "TT\n";
	else cout << cnt << '\n';
	return 0;
}
