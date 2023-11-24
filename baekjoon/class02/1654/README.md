# [1654](https://www.acmicpc.net/problem/1654)
Created on: 2023-11-24



```cpp
// 원래 코드 2% 틀림

#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long
#define f(i, n) for (ll i = 0; i < n; i++)

int	main(void)
{
	ios::sync_with_stdio(false), cin.tie(nullptr);

	ll k, n; cin >> k >> n;
	ll len = 1;
	ll cnt;
	ll cable[10001];

	f(i, k) cin >> cable[i];

	while (1)
	{
		cnt = 0;
		f(i, k)
			cnt += cable[i] / len;
		// cout << len << ' ' << cnt << '\n';
		if (cnt < n)
			break ;
		++len;
	}
	cout << len - 1 << '\n';

	return 0;
}
```

## References

- [보고 풀었다 !](https://yongmemo.tistory.com/21)
