#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

#define ll long long
#define f(i, n) for (int i = 0; i < n; i++)

const int MX = 100001;
int location[MX];
const int dx[4] = {1, -1};

int	main(void)
{
	ios::sync_with_stdio(false), cin.tie(nullptr);

	queue<int> Q;

	// n: 수빈, k: 동생
	int n, k; cin >> n >> k;

	fill(location, location + MX, -1);
	location[n] = 0;
	Q.push(n);
	while (!Q.empty())
	{
		int cur = Q.front(); Q.pop();
		if (location[k] >= 0) break;
		// 2배씩 이동
		int doubX = cur * 2;
		if (0 <= doubX && doubX < MX && location[doubX] == -1)
		{
			location[doubX] = location[cur] + 1;
			Q.push(doubX);
		}
		// 1칸씩 양 옆으로 이동
		f(dir, 2)
		{
			int nx = cur + dx[dir];
			if (nx < 0 || nx >= MX) continue;
			if (location[nx] >= 0) continue;
			location[nx] = location[cur] + 1;
			Q.push(nx);
		}
	}
	cout << location[k] << '\n';

	return 0;
}

/*
시간 제한	메모리 제한	제출	정답	맞힌 사람	정답 비율
2 초	128 MB	225247	65559	41416	25.545%
문제
수빈이는 동생과 숨바꼭질을 하고 있다. 수빈이는 현재 점 N(0 ≤ N ≤ 100,000)에 있고, 동생은 점 K(0 ≤ K ≤ 100,000)에 있다.
수빈이는 걷거나 순간이동을 할 수 있다. 만약, 수빈이의 위치가 X일 때 걷는다면 1초 후에 X-1 또는 X+1로 이동하게 된다.
순간이동을 하는 경우에는 1초 후에 2*X의 위치로 이동하게 된다.

수빈이와 동생의 위치가 주어졌을 때, 수빈이가 동생을 찾을 수 있는 가장 빠른 시간이 몇 초 후인지 구하는 프로그램을 작성하시오.

입력
첫 번째 줄에 수빈이가 있는 위치 N과 동생이 있는 위치 K가 주어진다. N과 K는 정수이다.

출력
수빈이가 동생을 찾는 가장 빠른 시간을 출력한다.

예제 입력 1
5 17
예제 출력 1
4
 */
