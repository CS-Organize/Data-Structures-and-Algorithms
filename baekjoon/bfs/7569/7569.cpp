#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

#define ll long long
#define f(i, n) for (int i = 0; i < n; i++)

const int dx[6] = {1, 0, 0, -1, 0, 0};
const int dy[6] = {0, 1, 0, 0, -1, 0};
const int dz[6] = {0, 0, 1, 0, 0, -1};
int box[102][102][102];
int day[102][102][102];

int	main()
{
	ios::sync_with_stdio(false), cin.tie(nullptr);

	// m이 가로, n이 세로, h가 높이
	int m, n, h; cin >> m >> n >> h;
	queue<tuple<int, int, int> > Q;

	f(i, h)
	{
		f(j, n)
		{
			f(k, m)
			{
				int x; cin >> x;
				box[i][j][k] = x;
				if (box[i][j][k] == 1)
				{
					day[i][j][k] = 0;
					Q.push(make_tuple(i, j, k));
				}
				else day[i][j][k] = -1;
			}
		}
	}

	while (!Q.empty())
	{
		tuple<int, int, int> cur = Q.front(); Q.pop();
		for (int dir = 0; dir < 6; dir++)
		{
			int nz = get<0>(cur) + dz[dir];
			int ny = get<1>(cur) + dy[dir];
			int nx = get<2>(cur) + dx[dir];

			if (nx < 0 || ny < 0 || nz < 0 || nx >= m || ny >= n || nz >= h) continue;
			// box (-1(없음), 0(안익음), 1(익음))
			if (box[nz][ny][nx] != 0) continue;
			// 익은 토마토면 현재 위치에서 +1
			day[nz][ny][nx] = day[get<0>(cur)][get<1>(cur)][get<2>(cur)] + 1;
			Q.push(make_tuple(nz, ny, nx));
		}
	}

	int mx = 0;
	f(i, h)
	{
		f(j, n)
		{
			f(k, m)
			{
				if (day[i][j][k] > mx) mx = day[i][j][k];
				if (day[i][j][k] == -1 && box[i][j][k] != -1)
				{
					cout << "-1\n";
					return 0;
				}
			}
		}
	}

	cout << mx << '\n';
	return 0;
}
