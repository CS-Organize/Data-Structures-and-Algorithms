# [10808](https://www.acmicpc.net/problem/10808)
Created on: 2023-11-08

```cpp

// 원래 내 코드

#include <iostream>
#include <algorithm>
using namespace std;

int	main()
{
	ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

	char s[101]; cin >> s;
	int alpha[26] = { 0 }, idx = 0;

	while (s[idx] != '\0')
	{
		++alpha[(int)(s[idx] - 'a')];
		++idx;
	}
	for (int i = 0; i < 26; i++)
		cout << alpha[i] << ' ';
	return 0;
}

```

## References


