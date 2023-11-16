# [4179](https://www.acmicpc.net/problem/4179)

Created on: 2023-11-15

```cpp
// 서지가 풀어준 코드

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
char maze[1001][1001];
int fire[1001][1001];

int	main(void)
{
	ios::sync_with_stdio(false), cin.tie(nullptr);

	// r: 행의 개수 c: 열의 개수
	int r, c; cin >> r >> c;
	queue<pair<int, int> > Q;
	pair<int, int> start;

	f(i, r)
	{
		f(j, c)
		{
			char x; cin >> x;
			maze[i][j] = x;
			if (maze[i][j] == 'J')
				start = make_pair(i, j);
			if (maze[i][j] == 'F')
			{
				fire[i][j] = 0;
				Q.push(make_pair(i, j));
			}
			else
				fire[i][j] = -1;
		}
	}

	// 어떤 시간에 불이 전파되는 지 fire에 기록
	while (!Q.empty())
	{
		pair<int, int> cur = Q.front(); Q.pop();
		f(dir, 4)
		{
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];
			if (nx < 0 || nx >= r || ny < 0 || ny >= c) continue;
			if (maze[nx][ny] == '#' || fire[nx][ny] >= 0) continue;
			fire[nx][ny] = fire[cur.X][cur.Y] + 1;
			Q.push(make_pair(nx, ny));
		}
	}

	Q.push(start);
	int time = 0;

	// 지훈이 탈출 시작
	while (!Q.empty())
	{
		int q_size = Q.size(); // 동서남북으로 한 칸 이동했을 때 time에 하나만 증가시키기 위한 변수(while(q_size--)로 쓰인다)
		++time;
		while(q_size--)
		{
			pair<int, int> cur = Q.front(); Q.pop();
			if (cur.X == 0 || cur.X == r - 1 || cur.Y == 0 || cur.Y == c - 1)
			{
				cout << time << '\n';
				return 0;
			}
			f(dir, 4)
			{
				int nx = cur.X + dx[dir];
				int ny = cur.Y + dy[dir];
				if (nx >= 0 && nx < r && ny >= 0 && ny < c && maze[nx][ny] == '.')  // 범위 체크
				{
					if (fire[nx][ny] == -1 || time < fire[nx][ny])
					{
						maze[nx][ny] = 'J';
						Q.push(make_pair(nx, ny));
					}
				}
			}
		}
	}
	cout << "IMPOSSIBLE\n";
	return 0;
}

/*
시간 제한	메모리 제한	제출	정답	맞힌 사람	정답 비율
1 초	256 MB	48729	10817	7262	20.845%
문제
지훈이는 미로에서 일을 한다. 지훈이를 미로에서 탈출하도록 도와주자!
미로에서의 지훈이의 위치와 불이 붙은 위치를 감안해서 지훈이가 불에 타기전에 탈출할 수 있는지의 여부,
그리고 얼마나 빨리 탈출할 수 있는지를 결정해야한다.

지훈이와 불은 매 분마다 한칸씩 수평또는 수직으로(비스듬하게 이동하지 않는다) 이동한다.
불은 각 지점에서 네 방향으로 확산된다.
지훈이는 미로의 가장자리에 접한 공간에서 탈출할 수 있다.
지훈이와 불은 벽이 있는 공간은 통과하지 못한다.

입력
입력의 첫째 줄에는 공백으로 구분된 두 정수 R과 C가 주어진다. 단, 1 ≤ R, C ≤ 1000 이다. R은 미로 행의 개수, C는 열의 개수이다.
다음 입력으로 R줄동안 각각의 미로 행이 주어진다.
각각의 문자들은 다음을 뜻한다.

#: 벽
.: 지나갈 수 있는 공간
J: 지훈이의 미로에서의 초기위치 (지나갈 수 있는 공간)
F: 불이 난 공간
J는 입력에서 하나만 주어진다.

출력
지훈이가 불이 도달하기 전에 미로를 탈출 할 수 없는 경우 IMPOSSIBLE 을 출력한다.
지훈이가 미로를 탈출할 수 있는 경우에는 가장 빠른 탈출시간을 출력한다.

예제 입력 1
4 4
####
#JF#
#..#
#..#
예제 출력 1
3

예제 입력 2
4 4
####
#F#J
###.
#...
예제 출력 2
1

예제 입력 3
5 5
#####
#F#J#
###.#
###.#
예제 출력 3
3
*/

```

## References
