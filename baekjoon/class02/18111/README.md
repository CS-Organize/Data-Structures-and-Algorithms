# [18111](https://www.acmicpc.net/problem/18111)
Created on: 2023-11-26

기존 코드

```cpp
#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long
#define f(i, n) for (int i = 0; i < n; i++)

const int MAX_HEIGHT = 256;
const int INTMAX = 2147483647;

int	main(void)
{
	ios::sync_with_stdio(false), cin.tie(nullptr);

	// n: 세로, m: 가로, b: 가진 블록의 수
	int n, m, b; cin >> n >> m >> b;
	int map[n][m];

	f(i, n)
	{
		f(j, m)
		{
			int x; cin >> x;
			map[i][j] = x;
		}
	}

	int ans = INTMAX;
	int height = 0;

	for (int hCur = 0; hCur <= MAX_HEIGHT; hCur++)
	{
		int time = 0;
		int item = b;

		f(i, n)
		{
			f(j, m)
			{
				// map의 해당 지점 높이 hTmp
				int hTmp = map[i][j];
				// 현재 높이보다 높다면 블록을 캐야함
				while (hTmp > hCur)
				{
					--hTmp;
					++item;
					time += 2;
				}
				// 현재 높이보다 낮다면 블록을 설치해야함
				while (item > 0 && hTmp < hCur)
				{
					++hTmp;
					--item;
					++time;
				}
				if (hTmp != hCur)
					time = INTMAX;
			}
		}
		if (ans >= time)
		{
			height = hCur;
			ans = time;
		}
	}
	cout << ans << ' ' << height << '\n';

	return 0;
}
```

틀린 이유

- 블록이 없어도 다른 블록을 먼저 캐고 설치할 수 있는데 그 부분을 고려하지 않고 그냥 2중 for문을 돌렸다.


시간 초과 코드

```cpp
#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long
#define f(i, n) for (int i = 0; i < n; i++)

const int MAX_HEIGHT = 256;
const int INTMAX = 2147483647;

int	main(void)
{
	ios::sync_with_stdio(false), cin.tie(nullptr);

	// n: 세로, m: 가로, b: 가진 블록의 수
	int n, m, b; cin >> n >> m >> b;
	int map[n][m];

	f(i, n)
	{
		f(j, m)
		{
			int x; cin >> x;
			map[i][j] = x;
		}
	}

	ll ans = INTMAX;
	ll height = 0;

	for (ll hCur = 0; hCur <= MAX_HEIGHT; hCur++)
	{
		ll time = 0;
		ll item = b;
		ll mTmp[n][m];

		f(i, n)
			f(j, m)
				mTmp[i][j] = map[i][j];

		f(i, n)
		{
			f(j, m)
			{
				// 현재 높이보다 높다면 블록을 캐야함
				while (mTmp[i][j] > hCur)
				{
					--mTmp[i][j];
					++item;
					time += 2;
				}
			}
		}
		f(i, n)
		{
			f(j, m)
			{
				// 현재 높이보다 낮다면 블록을 설치해야함
				while (item > 0 && mTmp[i][j] < hCur)
				{
					++mTmp[i][j];
					--item;
					++time;
				}
				// 아이템이 없어 설치를 못했을 경우 처리
				if (mTmp[i][j] != hCur)
					time = INTMAX;
			}
		}
		if (ans >= time)
		{
			height = hCur;
			ans = time;
		}
	}
	cout << ans << ' ' << height << '\n';

	return 0;
}
```
`256 * 3 * nm`의 복잡도

256 * 3 * 500 * 500 = 96000000(9천6백만) = 0.1억

## References

- [보고 풀었다 !](https://codecollector.tistory.com/678)
