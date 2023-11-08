# [2480](https://www.acmicpc.net/problem/2480)
Created on: 2023-11-08

```cpp

// 원래 짰던 코드

#include <iostream>
#include <algorithm>
using namespace std;

int	main()
{
	ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

	int dice[3], cnt = 0, dup = 0;

	for (int i = 0; i < 3; i++)
		cin >> dice[i];
	for (int i = 0; i < 3; i++)
	{
		for (int j = i + 1; j < 3; j++)
		{
			if (dice[i] == dice[j])
			{
				dup = dice[i];
				cnt++;
			}
		}
	}
	if (cnt == 0)
		cout << *max_element(dice, dice + 3) * 100 << '\n';
	else if (cnt == 3)
		cout << 10000 + dup * 1000 << '\n';
	else
		cout << 1000 + dup * 100 << '\n';

	return 0;
}
```

## References


