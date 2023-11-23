# [1181](https://www.acmicpc.net/problem/1181)
Created on: 2023-11-23

```cpp
// 내 이전 제출

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

#define ll long long
#define f(i, n) for (int i = 0; i < n; i++)

// s1 - s2
int	compare(string s1, string s2)
{
	if (s1.length() > s2.length()) return 1;
	if (s1.length() < s2.length()) return -1;
	for (size_t i = 0; i < s1.length(); i++)
		if (s1[i] - s2[i] != 0) return s1[i] - s2[i];
	return 0;
}

int	main(void)
{
	ios::sync_with_stdio(false), cin.tie(nullptr);

	string s[20001];
	int n; cin >> n;
	f(i, n)
		cin >> s[i];

	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			int val = compare(s[i], s[j]);
			string tmp;
			if (val > 0)
			{
				tmp = s[i];
				s[i] = s[j];
				s[j] = tmp;
			}
			if (val == 0)
			{
				s[j] = '\0';
			}
		}
	}
	f(i, n)
		if (s[i][0] != '\0')
			cout << s[i] << '\n';

	return 0;
}
```

## References

- [정리가 잘 된 글](https://beginnerdeveloper-lit.tistory.com/94)
- [sort](https://blockdmask.tistory.com/178)
- [sort ref](https://cplusplus.com/reference/algorithm/sort/)
