# [1463](https://www.acmicpc.net/problem/1463)
solved on: 2023-12-28

## Solutions

- DFS 풀이
```cpp

#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

#define ll long long
#define f(i, n) for (size_t i = 0; i < n; i++)

int	main(void)
{
	ios::sync_with_stdio(false), cin.tie(nullptr);

	int x; cin >> x;
	int visit[x + 1];
	queue<int> Q;
	
	fill(visit, visit + x + 1, 0);
	Q.push(x);
	while (!Q.empty())
	{
		int cur = Q.front(); Q.pop(); 
		if (cur == 1)
			break;
		if (cur % 3 == 0 && visit[cur / 3] == 0)
		{
			visit[cur / 3] = visit[cur] + 1;
			Q.push(cur / 3);
		}
		if (cur % 2 == 0 && visit[cur / 2] == 0)
		{
			visit[cur / 2] = visit[cur] + 1;
			Q.push(cur / 2);
		}
		if (visit[cur - 1] == 0)
		{
			visit[cur - 1] = visit[cur] + 1;
			Q.push(cur - 1);
		}
	}
	cout << visit[1] << '\n';
	return 0;
}
```
오랜만에 BFS 문제를 풀었는데 생각보다 어려웠다.
BFS 문제를 자주 풀어야겠다.

- DP 풀이
  1. 테이블 정의하기
    - D[i] = i를 1로 만드는데 필요한 연산의 최소 횟수
  2. 점화식 찾기
		- D[i] = min(D[i / 3], D[i / 2], D[i - 1]) + 1
	3. 초기값 설정하기
		- D[1] = 0
## References
