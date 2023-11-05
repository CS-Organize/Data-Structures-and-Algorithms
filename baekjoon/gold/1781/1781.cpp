#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

// 1. 데드라인을 기준으로 오름차순 정렬하여 그 중 가장 많은 컵라면을 가질 수 있는 숙제를 푼다.
/*
반례
4
1 1
2 1
3 10
3 10
A : 21
*/
// 2. 컵라면의 개수를 기준으로 내림차순 정렬하여 그 중 가장 데드라인이 작은 숙제를 푼다.

int	main()
{
	ios::sync_with_stdio(false), cin.tie(nullptr);

	priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > pq;
	int n, day = 1, sum = 0;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int deadline, cnt;

		cin >> deadline >> cnt;
		pq.push(make_pair(deadline, cnt)); // deadline 기준 내림차순 정렬
	}
	while (pq.size() != 0)
	{
		int max = 0;

		while (pq.size() != 0 && pq.top().first == day)
		{
			if (pq.top().second > max)
				max = pq.top().second;
			if (pq.size() != 0)
				pq.pop();
		}
		if (pq.size() != 0 && max == 0)
		{
			max = pq.top().second;
			if (pq.size() != 0)
				pq.pop();
		}
		sum += max;
		// cout << day << "일차 " << max << "개 획득, 총" << sum << "개 획득\n";
		++day;
	}
	cout << sum << '\n';
	return 0;
}

/*
문제
상욱 조교는 동호에게 N개의 문제를 주고서, 각각의 문제를 풀었을 때 컵라면을 몇 개 줄 것인지 제시 하였다. 하지만 동호의 찌를듯한 자신감에 소심한 상욱 조교는 각각의 문제에 대해 데드라인을 정하였다.

문제 번호	1	2	3	4	5	6	7
데드라인	1	1	3	3	2	2	6
컵라면 수	6	7	2	1	4	5	1
위와 같은 상황에서 동호가 2, 6, 3, 1, 7, 5, 4 순으로 숙제를 한다면 2, 6, 3, 7번 문제를 시간 내에 풀어 총 15개의 컵라면을 받을 수 있다.

문제는 동호가 받을 수 있는 최대 컵라면 수를 구하는 것이다. 위의 예에서는 15가 최대이다.

문제를 푸는데는 단위 시간 1이 걸리며, 각 문제의 데드라인은 N이하의 자연수이다. 또, 각 문제를 풀 때 받을 수 있는 컵라면 수와 최대로 받을 수 있는 컵라면 수는 모두 231보다 작거나 같은 자연수이다.

입력
첫 줄에 숙제의 개수 N (1 ≤ N ≤ 200,000)이 들어온다. 다음 줄부터 N+1번째 줄까지 i+1번째 줄에 i번째 문제에 대한 데드라인과 풀면 받을 수 있는 컵라면 수가 공백으로 구분되어 입력된다.

출력
첫 줄에 동호가 받을 수 있는 최대 컵라면 수를 출력한다.

예제 입력 1
7
1 6
1 7
3 2
3 1
2 4
2 5
6 1
예제 출력 1
15
*/
