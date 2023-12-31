#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

#define ll long long
#define f(i, n) for (int i = 0; i < n; i++)

#define CMD first
#define NUM second

void	testCase()
{
	// src에서 dst로 만들기
	int src, dst; cin >> src >> dst;

	// cmd는 idx에 도달하기 위한 명령어의 집합
	string cmd[10000];
	queue<pair<string, int> > q;

	// src에 도달하기 위한 명령어는 없으므로 ""를 넣음
	q.push({"", src});
	while (!q.empty())
	{
		int i;
		pair<string, int> cur = q.front(); q.pop();

		if (!cmd[dst].empty()) break;

		// D: (2 * n) % 10000
		i = (2 * cur.NUM) % 10000;
		if (cmd[i].empty() || cmd[i].length() > (cur.CMD).length() + 1)
		{
			cmd[i] = cur.CMD + 'D';
			q.push({cmd[i], i});
		}

		// S: n = n - 1;
		i = cur.NUM - 1;
		if (i == -1) i = 9999;
		if (cmd[i].empty() || cmd[i].length() > (cur.CMD).length() + 1)
		{
			cmd[i] = cur.CMD + 'S';
			q.push({cmd[i], i});
		}

		// L: 왼쪽으로 회전
		i = (cur.NUM - (cur.NUM / 1000) * 1000) * 10 + cur.NUM / 1000;
		if (cmd[i].empty() || cmd[i].length() > (cur.CMD).length() + 1)
		{
			cmd[i] = cur.CMD + 'L';
			q.push({cmd[i], i});
		}

		// R: 오른쪽으로 회전
		i = cur.NUM / 10 + (cur.NUM % 10) * 1000;
		if (cmd[i].empty() || cmd[i].length() > (cur.CMD).length() + 1)
		{
			cmd[i] = cur.CMD + 'R';
			q.push({cmd[i], i});
		}
	}
	cout << cmd[dst] << '\n';
}

int	main(void)
{
	ios::sync_with_stdio(false), cin.tie(nullptr);

	int t; cin >> t;
	f(i, t) testCase();
	return 0;
}
