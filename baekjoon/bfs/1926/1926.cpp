#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

#define X first
#define Y second

int	main()
{
	ios::sync_with_stdio(false), cin.tie(nullptr);

	int n, m; cin >> n >> m;
	int picture[n][m];
	bool visit[n][m];

	// 맵 파싱 + visit 배열 초기화
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int x; cin >> x;
			picture[i][j] = x;
			visit[i][j] = false;
		}
	}

	int cnt = 0, mx = 0;
	int dx[4] = {1, 0, -1, 0};
	int dy[4] = {0, 1, 0, -1};

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (visit[i][j] || picture[i][j] == 0) continue; // 방문했거나 그림이 아니면 넘어감
			queue<pair<int,int> > Q;
			int area = 0;
			++cnt; // 조건문에 걸리면 그림의 수 += 1
			visit[i][j] = 1; // 방문했다고 표시
			Q.push(make_pair(i, j));
			while (!Q.empty())
			{
				++area; // 큐의 원소를 뺄 때마다 넓이 += 1
				pair<int, int> cur = Q.front(); Q.pop();
				for (int dir = 0; dir < 4; dir++)
				{
					int nx = cur.X + dx[dir];
					int ny = cur.Y + dy[dir];
					if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
					if (visit[nx][ny] || picture[nx][ny] != 1) continue;
					visit[nx][ny] = 1;
					Q.push(make_pair(nx, ny));
				}
			}
			if (mx < area) mx = area; // == max(mx, area);
		}
	}
	cout << cnt << '\n' << mx << '\n';

	return 0;
}

/*
시간 제한	메모리 제한	제출	정답	맞힌 사람	정답 비율
2 초	128 MB	35514	15340	10674	41.854%

문제
어떤 큰 도화지에 그림이 그려져 있을 때, 그 그림의 개수와, 그 그림 중 넓이가 가장 넓은 것의 넓이를 출력하여라.
단, 그림이라는 것은 1로 연결된 것을 한 그림이라고 정의하자.
가로나 세로로 연결된 것은 연결이 된 것이고 대각선으로 연결이 된 것은 떨어진 그림이다. 그림의 넓이란 그림에 포함된 1의 개수이다.

입력
첫째 줄에 도화지의 세로 크기 n(1 ≤ n ≤ 500)과 가로 크기 m(1 ≤ m ≤ 500)이 차례로 주어진다.
두 번째 줄부터 n+1 줄 까지 그림의 정보가 주어진다.
(단 그림의 정보는 0과 1이 공백을 두고 주어지며, 0은 색칠이 안된 부분, 1은 색칠이 된 부분을 의미한다)

출력
첫째 줄에는 그림의 개수, 둘째 줄에는 그 중 가장 넓은 그림의 넓이를 출력하여라.
단, 그림이 하나도 없는 경우에는 가장 넓은 그림의 넓이는 0이다.

예제 입력 1
6 5
1 1 0 1 1
0 1 1 0 0
0 0 0 0 0
1 0 1 1 1
0 0 1 1 1
0 0 1 1 1
예제 출력 1
4
9
*/
