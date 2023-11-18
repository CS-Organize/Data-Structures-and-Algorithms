#include <iostream>
#include <algorithm>
#include <string>
#include <queue>
#include <vector>
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
	string map[n + 1];
	bool visit[n + 1][n + 1];

	f(i, n)
	{
		cin >> map[i];
		f(j, n) visit[i][j] = 0;
	}

	queue<pair<int, int> > Q;
	vector<int> V;
	int cnt = 0;

	f(i, n)
	{
		f(j, n)
		{
			if (map[i][j] == '1' && !visit[i][j])
			{
				++cnt;
				int area = 0;
				Q.push(make_pair(i, j));
				visit[i][j] = 1;
				while (!Q.empty())
				{
					++area;
					pair<int, int> cur = Q.front(); Q.pop();
					f(dir, 4)
					{
						int nx = cur.X + dx[dir];
						int ny = cur.Y + dy[dir];
						if (nx >= n || nx < 0 || ny >= n || ny < 0) continue;
						if (visit[ny][nx] || map[ny][nx] != '1') continue;
						visit[ny][nx] = 1;
						Q.push(make_pair(ny, nx));
					}
				}
				if (area > 0) V.push_back(area);
			}
		}
	}
	sort(V.begin(), V.end());
	cout << cnt << '\n';
	for (vector<int>::iterator it = V.begin(); it != V.end(); it++)
		cout << *it << '\n';
	return 0;
}
