#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

#define ll long long
#define f(i, n) for (int i = 0; i < n; i++)
#define X second
#define Y first

const int dx[8] = {2, 1, -1, -2, -2, -1, 1, 2};
const int dy[8] = {1, 2, 2, 1, -1, -2, -2, -1};

void	testCase(void)
{
	int l; cin >> l;
	int board[301][301];

	f(i, 301) fill(board[i], board[i] + 301, -1);

	pair<int, int> knight; cin >> knight.X >> knight.Y;
	pair<int, int> dst; cin >> dst.X >> dst.Y;
	queue<pair<int, int> > Q;
	board[knight.Y][knight.X] = 0;
	Q.push(knight);
	while (!Q.empty())
	{
		pair<int, int> cur = Q.front(); Q.pop();
		if (cur == dst) break;
		f(dir, 8)
		{
			int ny = cur.Y + dy[dir];
			int nx = cur.X + dx[dir];
			if (ny < 0 || ny >= l || nx < 0 || nx >= l) continue;
			if (board[ny][nx] >= 0) continue;
			board[ny][nx] = board[cur.Y][cur.X] + 1;
			Q.push(make_pair(ny, nx));
		}
	}
	cout << board[dst.Y][dst.X] << '\n';
}

int	main(void)
{
	ios::sync_with_stdio(false), cin.tie(nullptr);

	int t; cin >> t;
	f(i, t) testCase();

	return 0;
}
