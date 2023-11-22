# [1629](https://www.acmicpc.net/problem/1629)
Created on: 2023-11-19

```cpp
// 스택 오버플로우

#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long
#define f(i, n) for (int i = 0; i < n; i++)

unsigned ll multiply(unsigned long long num, unsigned long long cnt)
{
	if (cnt == 0)
		return 1;
	return multiply(num, cnt - 1) * num;
}

int	main(void)
{
	ios::sync_with_stdio(false), cin.tie(nullptr);

	unsigned ll a, b, c; cin >> a >> b >> c;

	cout << multiply(a, b) % c << '\n';
	return 0;
}
```

```cpp
// 스택 오버플로우

#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long
#define f(i, n) for (int i = 0; i < n; i++)

unsigned long long multiply(unsigned long long num, unsigned long long cnt, unsigned long long modulo)
{
	if (cnt == 0)
		return 1;
	return multiply(num, cnt - 1, modulo) * num % modulo;
}

int	main(void)
{
	ios::sync_with_stdio(false), cin.tie(nullptr);

	unsigned ll a, b, c; cin >> a >> b >> c;

	cout << multiply(a, b, c) << '\n';
	return 0;
}
```

```cpp
// 시간 초과
#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long
#define f(i, n) for (int i = 0; i < n; i++)

int	main(void)
{
	ios::sync_with_stdio(false), cin.tie(nullptr);

	unsigned ll a, b, c; cin >> a >> b >> c;
	unsigned ll res = 1;

	while (b > 0)
	{
		res = res * a % c;
		--b;
	}

	cout << res << '\n';

	return 0;
}
```

- a^n * a^n = a^2n
- 12^58 === 4(mod 67) -> 12^116 === 16(mod 67)

## References


