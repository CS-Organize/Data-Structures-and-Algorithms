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

	int n; cin >> n;
	int map[n + 1][n + 1];
	int high = 0;

	// map 파싱
	f(i, n)
	{
		f(j, n)
		{
			int x; cin >> x;
			if (high < x) high = x;
			map[i][j] = x;
		}
	}

	int mx = 0;

	// high 만큼 반복
	for (int i = 0; i <= high; i++)
	{
		queue<pair<int, int> > Q;
		bool visit[n + 1][n + 1];
		int cnt = 0;
		// visit 초기화
		f(j, n + 1) fill(visit[j], visit[j] + n + 1, 0);
		// 시작점 찾기
		f(j, n)
		{
			f(k, n)
			{
				// map[j][k]가 i 초과라면
				if (map[j][k] > i && !visit[j][k])
				{
					++cnt;
					Q.push(make_pair(j, k));
					visit[j][k] = 1;
					while (!Q.empty())
					{
						pair<int, int> cur = Q.front(); Q.pop();
						f(dir, 4)
						{
							int nx = cur.X + dx[dir];
							int ny = cur.Y + dy[dir];
							if (nx >= n || nx < 0 || ny >= n || ny < 0) continue;
							if (visit[ny][nx] || map[ny][nx] <= i) continue;
							visit[ny][nx] = 1;
							Q.push(make_pair(ny, nx));
						}
					}
				}
			}
		}
		if (mx < cnt) mx = cnt;
	}
	cout << mx << '\n';
	return 0;
}
