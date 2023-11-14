#include <iostream>
#include <algorithm>
#include <string>
#include <queue>
using namespace std;

#define X first
#define Y second

int maze[102][102];
int dist[102][102];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
queue<pair<int, int> > Q;

int	main(void)
{
	ios::sync_with_stdio(false), cin.tie(nullptr);

	int n, m; cin >> n >> m;

	// maze 파싱 + dist -1 초기화
	for (int i = 0; i < n; i++)
	{
		string map; cin >> map;
		for (int j = 0; j < m; j++)
		{
			maze[i][j] = map[j] - '0';
			dist[i][j] = -1;
		}
	}

	Q.push(make_pair(0, 0));
	dist[0][0] = 1;

	while (!Q.empty())
	{
		pair<int, int> cur = Q.front(); Q.pop();
		for (int dir = 0; dir < 4; dir++)
		{
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];
			// 좌표에서 벗어날 때
			if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
			// 방문을 했거나 미로가 아닐 때
			if (maze[nx][ny] != 1 || dist[nx][ny] >= 0) continue;
			// 조건에 만족하는 좌표에 현재 좌표 + 1한 값을 집어 넣음
			dist[nx][ny] = dist[cur.X][cur.Y] + 1;
			Q.push(make_pair(nx, ny));
		}
	}
	cout << dist[n - 1][m - 1] << '\n';
	return 0;
}

/*
시간 제한	메모리 제한	제출	정답	맞힌 사람	정답 비율
1 초	192 MB	181384	81691	52116	43.600%
문제
N×M크기의 배열로 표현되는 미로가 있다.

1	0	1	1	1	1
1	0	1	0	1	0
1	0	1	0	1	1
1	1	1	0	1	1
미로에서 1은 이동할 수 있는 칸을 나타내고, 0은 이동할 수 없는 칸을 나타낸다.
이러한 미로가 주어졌을 때, (1, 1)에서 출발하여 (N, M)의 위치로 이동할 때 지나야 하는 최소의 칸 수를 구하는 프로그램을 작성하시오.
한 칸에서 다른 칸으로 이동할 때, 서로 인접한 칸으로만 이동할 수 있다.

위의 예에서는 15칸을 지나야 (N, M)의 위치로 이동할 수 있다. 칸을 셀 때에는 시작 위치와 도착 위치도 포함한다.

입력
첫째 줄에 두 정수 N, M(2 ≤ N, M ≤ 100)이 주어진다. 다음 N개의 줄에는 M개의 정수로 미로가 주어진다.
각각의 수들은 붙어서 입력으로 주어진다.

출력
첫째 줄에 지나야 하는 최소의 칸 수를 출력한다.
항상 도착위치로 이동할 수 있는 경우만 입력으로 주어진다.

예제 입력 1
4 6
101111
101010
101011
111011
예제 출력 1
15
*/
