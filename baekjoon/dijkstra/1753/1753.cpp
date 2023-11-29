#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

#define ll long long
#define f(i, n) for (int i = 0; i < n; i++)
#define COST first
#define CUR second

const int MAX_POINT = 20000;
const int INF = 0x7fffffff;

int V, E, start; 															// 정점의 개수, 간선의 개수, 시작 정점
int bestPath[MAX_POINT + 1];									// index로 가는 최단 경로의 비용
vector<pair<int, int> > path[MAX_POINT + 1];	// index: 시작 정점, first: 비용, second: 도착 정점

priority_queue<pair<int, int>, vector<pair<int ,int> >, greater<pair<int, int> > > pq; // 다음에 방문할 정점

int	main(void)
{
	ios::sync_with_stdio(false), cin.tie(nullptr);

	cin >> V >> E >> start;

	// 간선 받기
	for (int i = 0; i < E; i++)
	{
		int src, dst, cost;
		cin >> src >> dst >> cost;
		path[src].push_back(make_pair(cost, dst));
	}

	// 무한대로 초기화
	for (int i = 1; i <= V; i++)
	{
		bestPath[i] = INF;
	}

	// 시작 정점 0으로 초기화
	bestPath[start] = 0;
	pq.push(make_pair(0, start));

	while (!pq.empty())
	{
		int cost = pq.top().COST;
		int cur = pq.top().CUR;
		pq.pop();

		if (bestPath[cur] != cost)
			continue;
		for(size_t i = 0; i < path[cur].size(); i++)
		{
			if (bestPath[path[cur][i].CUR] < bestPath[cur] + path[cur][i].COST)
				continue;
			bestPath[path[cur][i].CUR] = bestPath[cur] + path[cur][i].COST;
			pq.push({bestPath[path[cur][i].CUR], path[cur][i].CUR});
		}
	}

	for (int i = 1; i <= V; i++)
	{
		if (bestPath[i] == INF)
			cout << "INF\n";
		else
			cout << bestPath[i] << '\n';
	}

	return 0;
}

/*
시간 제한	메모리 제한	제출	정답	맞힌 사람	정답 비율
1 초	256 MB	188549	56372	28681	25.336%

문제
방향그래프가 주어지면 주어진 시작점에서 다른 모든 정점으로의 최단 경로를 구하는 프로그램을 작성하시오. 단, 모든 간선의 가중치는 10 이하의 자연수이다.

입력
첫째 줄에 정점의 개수 V와 간선의 개수 E가 주어진다. (1 ≤ V ≤ 20,000, 1 ≤ E ≤ 300,000) 모든 정점에는 1부터 V까지 번호가 매겨져 있다고 가정한다.
둘째 줄에는 시작 정점의 번호 K(1 ≤ K ≤ V)가 주어진다. 셋째 줄부터 E개의 줄에 걸쳐 각 간선을 나타내는 세 개의 정수 (u, V, w)가 순서대로 주어진다.
이는 u에서 v로 가는 가중치 w인 간선이 존재한다는 뜻이다. u와 v는 서로 다르며 w는 10 이하의 자연수이다.
서로 다른 두 정점 사이에 여러 개의 간선이 존재할 수도 있음에 유의한다.

출력
첫째 줄부터 V개의 줄에 걸쳐, i번째 줄에 i번 정점으로의 최단 경로의 경로값을 출력한다.
시작점 자신은 0으로 출력하고, 경로가 존재하지 않는 경우에는 INF를 출력하면 된다.

예제 입력 1
5 6
1
5 1 1
1 2 2
1 3 3
2 3 4
2 4 5
3 4 6
예제 출력 1
0
2
3
7
INF
예제 입력 2
6 8
1
1 2 3
1 3 2
1 4 5
2 3 2
2 5 8
3 4 2
4 5 6
5 6 1
예제 출력 2
0
3
2
4
10
11
*/
