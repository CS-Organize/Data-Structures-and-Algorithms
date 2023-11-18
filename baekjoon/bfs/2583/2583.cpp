#include <iostream>
#include <algorithm>
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

	// m: 세로 n, 가로
	int m, n, k; cin >> m >> n >> k;
	char paper[m + 1][n + 1];
	bool visit[m + 1][n + 1];

	// 모든 영역 1로 초기화, visit 초기화
	f(i, m + 1)
	{
		fill(paper[i], paper[i] + n + 1, '1');
		fill(visit[i], visit[i] + n + 1, 0);
	}

	// 직사각형 그린 부분을 0으로 변경
	f(i, k)
	{
		int srcX, srcY; cin >> srcX >> srcY;
		int dstX, dstY; cin >> dstX >> dstY;
		for (int y = srcY; y < dstY; y++)
			for (int x = srcX; x < dstX; x++)
				paper[y][x] = '0';
	}

	queue<pair<int, int> > Q;
	vector<int> V;
	int cnt = 0;
	f(i, m)
	{
		f(j, n)
		{
			int area = 0;
			if (!visit[i][j] && paper[i][j] == '1')
			{
				++cnt;
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
						// 범위 체크
						if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
						// 방문했거나 0일 때
						if (visit[ny][nx] || paper[ny][nx] != '1') continue;
						visit[ny][nx] = 1;
						Q.push(make_pair(ny, nx));
					}
				}
			}
			if (area > 0) V.push_back(area);
		}
	}
	sort(V.begin(), V.end());
	cout << cnt << '\n';
	for (vector<int>::iterator it = V.begin(); it != V.end(); it++)
		cout << *it << ' ';
	return 0;
}
