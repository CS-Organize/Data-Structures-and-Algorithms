#include <iostream>
#include <algorithm>
#include <queue>
#include <string>
using namespace std;

#define ll long long
#define f(i, n) for (int i = 0; i < n; i++)
#define X first
#define Y second

const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
string grid[101];

int	main(void)
{
	ios::sync_with_stdio(false), cin.tie(nullptr);

	int n; cin >> n;
	f(i, n)
		cin >> grid[i];
	int m = grid[0].length();
	bool visit1[n][m];
	bool visit2[n][m];

	f(i, n)
	{
		fill(visit1[i], visit1[i] + m, 0);
		fill(visit2[i], visit2[i] + m, 0);
	}

	queue<pair<int, int> > Q1;
	queue<pair<int, int> > Q2;
	int cnt1 = 0, cnt2 = 0;
	f(i, n)
	{
		f(j, m)
		{
			if (visit1[i][j] == 0)
			{
				++cnt1;
				visit1[i][j] = 1;
				Q1.push(make_pair(i, j));
				while (!Q1.empty())
				{
					pair<int, int> cur = Q1.front(); Q1.pop();
					f(dir, 4)
					{
						int nx = cur.X + dx[dir];
						int ny = cur.Y + dy[dir];
						if (nx < 0 || nx >= m || ny < 0 || ny >= n) continue;
						if (visit1[nx][ny] || grid[nx][ny] != grid[i][j]) continue;
						visit1[nx][ny] = 1;
						Q1.push(make_pair(nx, ny));
					}
				}
			// cout << "---------------------------------------\n";
			// for (int a = 0; a < n; a++)
			// {
			// 	for (int b = 0; b < m; b++)
			// 	{
			// 		cout << visit1[a][b] << ' ';
			// 	}
			// 	cout << '\n';
			// }
			// cout << "---------------------------------------\n";
			}

			if (visit2[i][j] == 0)
			{
				++cnt2;
				visit2[i][j] = 1;
				Q2.push(make_pair(i, j));
				if (grid[i][j] == 'B')
				{
					while (!Q2.empty())
					{
						pair<int, int> cur = Q2.front(); Q2.pop();
						f(dir, 4)
						{
							int ny = cur.Y + dy[dir];
							int nx = cur.X + dx[dir];
							if (nx < 0 || nx >= m || ny < 0 || ny >= n) continue;
							if (visit2[nx][ny] || grid[nx][ny] != 'B') continue;
							visit2[nx][ny] = 1;
							Q2.push(make_pair(nx, ny));
						}
					}
				}
				else
				{
					while (!Q2.empty())
					{
						pair<int, int> cur = Q2.front(); Q2.pop();
						f(dir, 4)
						{
							int ny = cur.Y + dy[dir];
							int nx = cur.X + dx[dir];
							if (nx < 0 || nx >= m || ny < 0 || ny >= n) continue;
							if (visit2[nx][ny] || grid[nx][ny] == 'B') continue;
							visit2[nx][ny] = 1;
							Q2.push(make_pair(nx, ny));
						}
					}
				}
			}
		}
	}

	cout << cnt1 << ' ' << cnt2 << '\n';
	return 0;
}

/*
시간 제한	메모리 제한	제출	정답	맞힌 사람	정답 비율
1 초	128 MB	59031	33959	25887	56.516%
문제
적록색약은 빨간색과 초록색의 차이를 거의 느끼지 못한다.
따라서, 적록색약인 사람이 보는 그림은 아닌 사람이 보는 그림과는 좀 다를 수 있다.

크기가 N×N인 그리드의 각 칸에 R(빨강), G(초록), B(파랑) 중 하나를 색칠한 그림이 있다.
그림은 몇 개의 구역으로 나뉘어져 있는데, 구역은 같은 색으로 이루어져 있다.
또, 같은 색상이 상하좌우로 인접해 있는 경우에 두 글자는 같은 구역에 속한다. (색상의 차이를 거의 느끼지 못하는 경우도 같은 색상이라 한다)

예를 들어, 그림이 아래와 같은 경우에
RRRBB
GGBBB
BBBRR
BBRRR
RRRRR
적록색약이 아닌 사람이 봤을 때 구역의 수는 총 4개이다. (빨강 2, 파랑 1, 초록 1) 하지만, 적록색약인 사람은 구역을 3개 볼 수 있다. (빨강-초록 2, 파랑 1)
그림이 입력으로 주어졌을 때, 적록색약인 사람이 봤을 때와 아닌 사람이 봤을 때 구역의 수를 구하는 프로그램을 작성하시오.

입력
첫째 줄에 N이 주어진다. (1 ≤ N ≤ 100)
둘째 줄부터 N개 줄에는 그림이 주어진다.

출력
적록색약이 아닌 사람이 봤을 때의 구역의 개수와 적록색약인 사람이 봤을 때의 구역의 수를 공백으로 구분해 출력한다.

예제 입력 1
5
RRRBB
GGBBB
BBBRR
BBRRR
RRRRR
예제 출력 1
4 3
*/
