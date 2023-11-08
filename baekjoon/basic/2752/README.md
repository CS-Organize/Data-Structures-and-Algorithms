# [2752](https://www.acmicpc.net/problem/2752)
Created on: 2023-11-08

바킹독 0x02 문제집

```cpp
// 원래 내 코드

#include <iostream>
using namespace std;

int	main()
{
	ios::sync_with_stdio(false), cin.tie(nullptr);

	int arr[3], tmp; cin >> arr[0] >> arr[1] >> arr[2];

	for (int i = 0; i < 3; i++)
	{
		for (int j = i + 1; j < 3; j++)
		{
			if (arr[i] > arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	cout << arr[0] << ' ' << arr[1] << ' ' << arr[2] << '\n';
	return 0;
}
```

## References


