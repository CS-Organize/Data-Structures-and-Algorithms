#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

#define ll long long
#define f(i, n) for (int i = 0; i < n; i++)

int board[101];
int rope[101];
int snake[101];

int	main(void)
{
	ios::sync_with_stdio(false), cin.tie(nullptr);

	int n, m; cin >> n >> m;

	f(i, n)
	{
		int src, dst; cin >> src >> dst;
		rope[src] = dst;
	}
	f(i, m)
	{
		int src, dst; cin >> src >> dst;
		snake[src] = dst;
	}

	queue<int> q;
	
	q.push(1);
	while (!q.empty())
	{
		int cur = q.front(); q.pop();
		if (cur == 100) break;

		// 1 ~ 6까지 주사위 던지기
		for (int i = 1; i <= 6; i++)
		{
			int nx = cur + i;
			if (nx > 100) continue;

			if (rope[nx])
			{
				if (board[rope[nx]] == 0 || board[rope[nx]] > board[cur] + 1)
				{
					board[rope[nx]] = board[cur] + 1;
					q.push(rope[nx]);
				}
			}
			else if (snake[nx])
			{
				if (board[snake[nx]] == 0 || board[snake[nx]] > board[cur] + 1)
				{
					board[snake[nx]] = board[cur] + 1;
					q.push(snake[nx]);
				}
			}
			else if (board[nx] == 0 || board[nx] > board[cur] + 1)
			{
				board[nx] = board[cur] + 1;
				q.push(nx);
			}
		}
	}
	cout << board[100] << '\n';
	return 0;
}
