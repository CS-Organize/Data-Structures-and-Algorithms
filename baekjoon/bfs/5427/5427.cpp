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

void	testCase(void)
{
	int w, h; cin >> w >> h;
	char map[h + 1][w + 1];
	int fire[h + 1][w + 1];
	int escape[h + 1][w + 1];

	f(i, h + 1)
	{
		fill(fire[i], fire[i] + w + 1, -1);
		fill(escape[i], escape[i] + w + 1, -1);
	}

	queue<pair<int, int> > Q;
	pair<int, int> start;
	f(i, h)
	{
		f(j, w)
		{
			char c; cin >> c;
			map[i][j] = c;
			if (c == '*')
			{
				Q.push(make_pair(i, j));
				fire[i][j] = 0;
			}
			if (c == '@')
			{
				start = make_pair(i, j);
				escape[i][j] = 0;
			}
		}
	}

	// 불 전파
	while (!Q.empty())
	{
		pair<int, int> cur = Q.front(); Q.pop();
		f(dir, 4)
		{
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];
			if (nx < 0 || nx >= w || ny < 0 || ny >= h) continue;
			if (map[ny][nx] == '#' || fire[ny][nx] >= 0) continue;
			fire[ny][nx] = fire[cur.Y][cur.X] + 1;
			Q.push(make_pair(ny, nx));
		}
	}

	// 상근 탈출
	Q.push(start);
	while (!Q.empty())
	{
		pair<int, int> cur = Q.front(); Q.pop();
		f(dir, 4)
		{
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];
			if (nx < 0 || nx >= w || ny < 0 || ny >= h)
			{
				cout << escape[cur.Y][cur.X] + 1 << '\n';
				return ;
			}
			if (escape[ny][nx] >= 0 || map[ny][nx] == '#' || (fire[ny][nx] != -1 && fire[ny][nx] <= escape[cur.Y][cur.X] + 1)) continue;
			escape[ny][nx] = escape[cur.Y][cur.X] + 1;
			Q.push(make_pair(ny, nx));
		}
	}
	cout << "IMPOSSIBLE\n";
}

int	main(void)
{
	ios::sync_with_stdio(false), cin.tie(nullptr);

	int t; cin >> t;
	f(i, t) testCase();
	return 0;
}

/*
시간 제한	메모리 제한	제출	정답	맞힌 사람	정답 비율
1 초	256 MB	38229	10145	6789	24.585%

문제
상근이는 빈 공간과 벽으로 이루어진 건물에 갇혀있다. 건물의 일부에는 불이 났고, 상근이는 출구를 향해 뛰고 있다.

매 초마다, 불은 동서남북 방향으로 인접한 빈 공간으로 퍼져나간다. 벽에는 불이 붙지 않는다.
상근이는 동서남북 인접한 칸으로 이동할 수 있으며, 1초가 걸린다.
상근이는 벽을 통과할 수 없고, 불이 옮겨진 칸 또는 이제 불이 붙으려는 칸으로 이동할 수 없다.
상근이가 있는 칸에 불이 옮겨옴과 동시에 다른 칸으로 이동할 수 있다.

빌딩의 지도가 주어졌을 때, 얼마나 빨리 빌딩을 탈출할 수 있는지 구하는 프로그램을 작성하시오.

입력
첫째 줄에 테스트 케이스의 개수가 주어진다. 테스트 케이스는 최대 100개이다.
각 테스트 케이스의 첫째 줄에는 빌딩 지도의 너비와 높이 w와 h가 주어진다. (1 ≤ w,h ≤ 1000)
다음 h개 줄에는 w개의 문자, 빌딩의 지도가 주어진다.

'.': 빈 공간
'#': 벽
'@': 상근이의 시작 위치
'*': 불
각 지도에 @의 개수는 하나이다.

출력
각 테스트 케이스마다 빌딩을 탈출하는데 가장 빠른 시간을 출력한다. 빌딩을 탈출할 수 없는 경우에는 "IMPOSSIBLE"을 출력한다.

예제 입력 1
5
4 3
####
#*@.
####
7 6
###.###
#*#.#*#
#.....#
#.....#
#..@..#
#######
7 4
###.###
#....*#
#@....#
.######
5 5
.....
.***.
.*@*.
.***.
.....
3 3
###
#@#
###
예제 출력 1
2
5
IMPOSSIBLE
IMPOSSIBLE
IMPOSSIBLE
*/
