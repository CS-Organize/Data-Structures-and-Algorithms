#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

#define ll long long
#define f(i, n) for (int i = 0; i < n; i++)

const int MAX = 100000;
int bridge[MAX + 1];
int a, b;


int	main(void)
{
	ios::sync_with_stdio(false), cin.tie(nullptr);

	int a, b, n, m;
	cin >> a >> b >> n >> m;

	vector<int> dx;
	dx.push_back(-1);
	dx.push_back(-a);
	dx.push_back(-b);
	dx.push_back(1);
	dx.push_back(a);
	dx.push_back(b);

	queue<int> q;
	q.push(n);
	while (!q.empty())
	{
		int cur = q.front(); q.pop();
		if (cur == m) break;
		for(int dir = 7; dir >= 0; --dir)
		{
			int nx;
			// 현재위치 * a 만큼 점프
			if (dir >= 6) nx = cur * dx[dir - 2];
			else nx = cur + dx[dir];

			// 범위를 벗어날 때
			if (nx > MAX || nx < 0) continue;
			// 갈 위치가 방문한 적이 있을 때
			if (bridge[nx] != 0) continue;
			bridge[nx] = bridge[cur] + 1;
			q.push(nx);
		}
	}
	cout << bridge[m] << '\n';
	
	return 0;
}
