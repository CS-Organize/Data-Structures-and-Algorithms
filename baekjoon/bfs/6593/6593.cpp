#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

#define ll long long
#define f(i, n) for (int i = 0; i < n; i++)
#define X(x) get<2>(x)
#define Y(x) get<1>(x)
#define Z(x) get<0>(x)

const int dx[6] = {0, 0, 1, -1, 0, 0};
const int dy[6] = {0, 1, 0, 0, -1, 0};
const int dz[6] = {1, 0, 0, 0, 0, -1};

int	main(void)
{
	ios::sync_with_stdio(false), cin.tie(nullptr);

	int l, r, c; cin >> l >> r >> c;

	while (!(l == 0 && r == 0 && c == 0))
	{
		string building[l][r];
		int dist[l][r][c];
		tuple<int, int, int> escape;

		queue<tuple<int, int, int> > Q;

		// 맵 파싱, 민준이 push, dist -1로 초기화, 탈출구 escape에 기록
		f(i, l)
		{
			f(j, r)
			{
				cin >> building[i][j]; // 맵 파싱
				f(k, c)
				{
					if (building[i][j][k] == 'S') // 시작 지점
					{
						Q.push(make_tuple(i, j, k));
						dist[i][j][k] = 0;
					}
					else if (building[i][j][k] == 'E') // 탈출 지점
					{
						dist[i][j][k] = -1;
						escape = make_tuple(i, j, k);
					}
					else // -1로 초기화
						dist[i][j][k] = -1;
				}
			}
		}

		bool isEscape = 0;

		while (!Q.empty())
		{
			tuple<int, int, int> cur = Q.front(); Q.pop();
			if (dist[Z(escape)][Y(escape)][X(escape)] >= 0)
			{
				cout << "Escaped in " << dist[Z(escape)][Y(escape)][X(escape)] << " minute(s).\n";
				isEscape = 1;
				break;
			}
			f(dir, 6)
			{
				int nx = X(cur) + dx[dir];
				int ny = Y(cur) + dy[dir];
				int nz = Z(cur) + dz[dir];
				if (nx < 0 || nx >= c || ny < 0 || ny >= r || nz < 0 || nz >= l) continue;
				if (building[nz][ny][nx] == '#' || dist[nz][ny][nx] >= 0) continue;
				dist[nz][ny][nx] = dist[Z(cur)][Y(cur)][X(cur)] + 1;
				Q.push(make_tuple(nz, ny, nx));
			}
		}
		if (!isEscape) cout << "Trapped!\n";

		cin >> l >> r >> c;
	}

	return 0;
}

/* cout << "---------------------------------------------\n\n";
f(i, l)
{
	f(j, r)
		cout << building[i][j] << '\n';
	cout << '\n';
}
cout << "---------------------------------------------\n\n"; */

/* cout << "---------------------------------------------\n\n";
f(i, l)
{
	f(j, r)
	{
		f(k, c)
			cout << dist[i][j][k] << ' ';
		cout << '\n';
	}
	cout << '\n';
}
cout << "---------------------------------------------\n\n"; */

/*
시간 제한	메모리 제한	제출	정답	맞힌 사람	정답 비율
1 초	128 MB	19161	7283	5707	37.467%

문제
당신은 상범 빌딩에 갇히고 말았다. 여기서 탈출하는 가장 빠른 길은 무엇일까?
상범 빌딩은 각 변의 길이가 1인 정육면체(단위 정육면체)로 이루어져있다.
각 정육면체는 금으로 이루어져 있어 지나갈 수 없거나, 비어있어서 지나갈 수 있게 되어있다.
당신은 각 칸에서 인접한 6개의 칸(동,서,남,북,상,하)으로 1분의 시간을 들여 이동할 수 있다. 즉, 대각선으로 이동하는 것은 불가능하다.
그리고 상범 빌딩의 바깥면도 모두 금으로 막혀있어 출구를 통해서만 탈출할 수 있다.

당신은 상범 빌딩을 탈출할 수 있을까? 만약 그렇다면 얼마나 걸릴까?

입력
입력은 여러 개의 테스트 케이스로 이루어지며, 각 테스트 케이스는 세 개의 정수 L, R, C로 시작한다. L(1 ≤ L ≤ 30)은 상범 빌딩의 층 수이다.
R(1 ≤ R ≤ 30)과 C(1 ≤ C ≤ 30)는 상범 빌딩의 한 층의 행과 열의 개수를 나타낸다.

그 다음 각 줄이 C개의 문자로 이루어진 R개의 행이 L번 주어진다. 각 문자는 상범 빌딩의 한 칸을 나타낸다.
금으로 막혀있어 지나갈 수 없는 칸은 '#'으로 표현되고, 비어있는 칸은 '.'으로 표현된다. 당신의 시작 지점은 'S'로 표현되고, 탈출할 수 있는 출구는 'E'로 표현된다.
각 층 사이에는 빈 줄이 있으며, 입력의 끝은 L, R, C가 모두 0으로 표현된다. 시작 지점과 출구는 항상 하나만 있다.

출력
각 빌딩에 대해 한 줄씩 답을 출력한다. 만약 당신이 탈출할 수 있다면 다음과 같이 출력한다.

Escaped in x minute(s).
여기서 x는 상범 빌딩을 탈출하는 데에 필요한 최단 시간이다.

만일 탈출이 불가능하다면, 다음과 같이 출력한다.

Trapped!
예제 입력 1
3 4 5
S....
.###.
.##..
###.#

#####
#####
##.##
##...

#####
#####
#.###
####E

1 3 3
S##
#E#
###

0 0 0
예제 출력 1
Escaped in 11 minute(s).
Trapped!
*/
