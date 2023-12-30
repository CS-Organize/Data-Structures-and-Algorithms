# [1620](https://www.acmicpc.net/problem/1620)
solved on: 2023-12-30

## Solutions

시간 초과난 코드
```cpp
#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long
#define f(i, n) for (int i = 0; i < n; i++)

int	main(void)
{
	ios::sync_with_stdio(false), cin.tie(nullptr);

	int n; cin >> n;
	int m; cin >> m;
	string pokemon[n];

	f(i, n) cin >> pokemon[i];
	f(i, m)
	{
		string input; cin >> input;
		if ('0' <= input[0] && input[0] <= '9')
			cout << pokemon[atoi(input.c_str()) - 1] << '\n';
		else
			f(j, n)
				if (input == pokemon[j]) cout << j + 1 << '\n';
	}
	return 0;
}
```

## References

- [(string to char) to int](https://stackoverflow.com/questions/27640333/how-do-i-use-atoi-function-with-strings-in-c)
- [해시맵을 사용한 풀이](https://hagisilecoding.tistory.com/41)
- [cpp STL map](https://twpower.github.io/91-how-to-use-map-in-cpp)
