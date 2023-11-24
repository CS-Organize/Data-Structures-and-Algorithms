# [10816](https://www.acmicpc.net/problem/10816)
Created on: 2023-11-24

map을 이용한 풀이, 이분 탐색을 이용한 풀이가 있다고 한다.
이분 탐색을 이용하여 풀었는데 시간 초과가 났다.

```cpp
// 51% 시간 초과

#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long
#define f(i, n) for (int i = 0; i < n; i++)

int	main(void)
{
	ios::sync_with_stdio(false), cin.tie(nullptr);

	int card[500001];
	int n; cin >> n;

	f(i, n) cin >> card[i];
	sort(card, card + n);

	int m; cin >> m;

	f(i, m)
	{
		int num; cin >> num;
		int cnt = 0;

		int left = 0;
		int right = n - 1;
		int mid;

		while (left <= right)
		{
			// mid 계산
			mid = (left + right) / 2;

			if (card[mid] > num)
				right = mid - 1;
			else if (card[mid] == num)
			{
				// num 개수 세기 위해서 num 시작점까지 밀기
				while (mid > 0 && card[mid] == num)
					--mid;
				break;
			}
			else
				left = mid + 1;
		}
		// mid > 0 에 걸릴 때 인덱스 미는 것을 방지
		if (card[mid] != num) ++mid;
		while (mid < n && card[mid] == num)
		{
			++cnt;
			++mid;
		}
		cout << cnt << ' ';
	}
	return 0;
}
```

```cpp
// hash map을 이용한 풀이

#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

#define ll long long
#define f(i, n) for (int i = 0; i < n; i++)

int	main(void)
{
	ios::sync_with_stdio(false), cin.tie(nullptr);

	map<int, int> M;
	int n; cin >> n;

	f(i, n)
	{
		int x; cin >> x;
		++M[x];
	}

	int m; cin >> m;
	f(i, m)
	{
		int num; cin >> num;
		cout << M[num] << ' ';
	}
	cout <<'\n';

	return 0;
}
```

## References

- [보고 풀었다 !](https://bbeomgeun.tistory.com/18)
- [hash map이 이분 탐색보다 느린 이유](https://www.acmicpc.net/board/view/57406)
