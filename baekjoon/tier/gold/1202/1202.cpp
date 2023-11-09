#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <stack>
using namespace std;

int	main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);

	priority_queue<pair<unsigned long long,unsigned long long> > pq;
	multiset<unsigned long long> bag;
	unsigned long long n, k, sum = 0;

	cin >> n >> k;
	for (unsigned long long i = 0; i < n; i++)
	{
		unsigned long long m, v;
		cin >> m >> v;
		pq.push(make_pair(v, m)); // 가격(first) 기준 내림차순
	}
	for (unsigned long long i = 0; i < k; i++)
	{
		unsigned long long c;
		cin >> c;
		bag.insert(c); // 최대로 담을 수 있는 무게 기준 오름차순
	}
	while (bag.size() != 0 && pq.size() != 0)
	{
		multiset<unsigned long long>::iterator it = bag.lower_bound(pq.top().second);
		if (it != bag.end())
		{
			bag.erase(it);
			sum += pq.top().first;
		}
		if (pq.size() != 0)
			pq.pop();
	}
	cout << sum << '\n';
	return 0;
}

// n개의 줄에는 보석의 무게 m, 가격 v
// k개의 줄에는 가방에 담을 수 있는 최대 무게 c
/*
세계적인 도둑 상덕이는 보석점을 털기로 결심했다.

상덕이가 털 보석점에는 보석이 총 N개 있다. 각 보석은 무게 Mi와 가격 Vi를 가지고 있다. 상덕이는 가방을 K개 가지고 있고, 각 가방에 담을 수 있는 최대 무게는 Ci이다. 가방에는 최대 한 개의 보석만 넣을 수 있다.

상덕이가 훔칠 수 있는 보석의 최대 가격을 구하는 프로그램을 작성하시오.

입력
첫째 줄에 N과 K가 주어진다. (1 ≤ N, K ≤ 300,000)

다음 N개 줄에는 각 보석의 정보 Mi와 Vi가 주어진다. (0 ≤ Mi, Vi ≤ 1,000,000)

다음 K개 줄에는 가방에 담을 수 있는 최대 무게 Ci가 주어진다. (1 ≤ Ci ≤ 100,000,000)

모든 숫자는 양의 정수이다.

출력
첫째 줄에 상덕이가 훔칠 수 있는 보석 가격의 합의 최댓값을 출력한다.

예제 입력 1
2(개의 보석) 1(개의 가방)
무게 5 가격 10
무게 100 가격 100
가방이 담을 수 있는 최대 무게11
예제 출력 1
훔칠 수 있는 보석 가격의 최댓값 10
예제 입력 2
3 2
1 65
5 23
2 99
10
2
예제 출력 2
164
힌트
두 번째 예제의 경우 첫 번째 보석을 두 번째 가방에, 세 번째 보석을 첫 번째 가방에 넣으면 된다.

9 5
4 5
4 9
4 10
8 55
14 20
9 15
8 55
8 5
11 54
10
5
4
15
20
______________________

ans : 183
 */

/*
	for (int i = 0; i < n; i++)
	{
		cout << pq.top().first << ' ' << pq.top().second << '\n';
		pq.pop();
	}
	for (int i = 0; i < k; i++)
	{
		cout << bag.top() << '\n';
		bag.pop();
	}
*/
