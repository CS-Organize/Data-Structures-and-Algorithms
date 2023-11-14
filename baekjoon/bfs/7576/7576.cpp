#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

#define ll long long
#define f(i, n) for (int i = 0; i < n; i++)
#define X first
#define Y second
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int	main(void)
{
	int n, m; cin >> m >> n;
	int box[n][m], day[n][m];

	// parse box, init day to -1
	f(i, n)
	{
		f(j, m)
		{
			int x; cin >> x;
			box[i][j] = x;
			day[i][j] = -1;
		}
	}

	queue<pair<int, int> > Q;

	f(i, n)
	{
		f(j, m)
		{
			if (box[i][j] == 1)
			{
				day[i][j] = 0;
				Q.push(make_pair(i, j));
			}
		}
	}

	while (!Q.empty())
	{
		pair<int, int> cur = Q.front(); Q.pop();
		f(dir, 4)
		{
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];
			// 범위 체크
			if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
			// 토마토가 익었거나 없을 때, 이미 방문 했을 때
			if (box[nx][ny] != 0 || day[nx][ny] >= 0) continue;
			day[nx][ny] = day[cur.X][cur.Y] + 1;
			Q.push(make_pair(nx, ny));
		}
	}

	int mx = 0;
	bool flag = false;

	f(i, n)
	{
		f(j, m)
		{
			if (mx < day[i][j])
				mx = day[i][j];
			if (day[i][j] == -1 && box[i][j] != -1)
			{
				flag = true;
				break;
			}
		}
		if (flag)
			break;
	}

	if (flag) cout << "-1\n";
	else cout << mx << '\n';
	return 0;
}
