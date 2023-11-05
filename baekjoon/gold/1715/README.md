# 1715
Created on: 2023-11-04

- [STL priority_queue](https://travelbeeee.tistory.com/126)

```cpp
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
using namespace std;

int	main()
{
	ios::sync_with_stdio(false), cin.tie(nullptr);
	priority_queue<unsigned long long, vector<unsigned long long>, greater<unsigned long long> > pq;
	unsigned long long sum = 0, a = 0, b = 0;
	int	n;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int num;

		cin >> num;
		pq.push(num);
	}

	a = pq.top();
	pq.pop();
	if (pq.size() > 0)
	{
		b = pq.top();
		pq.pop();
	}
	sum += a + b;
	while (pq.empty() != 1)
	{
		a = a + b;
		b = pq.top();
		pq.pop();
		sum += a + b;
		cout << "a : " << a << ", b : " << b << '\n';
	}
	cout << sum << '\n';
	return 0;
}
```

Test Case:
3
10
20
40

Answer:
100

Test Case:
10
20
30
40
50
60

Answer:
100???????/

Test Case:
4
3
3
3
3

Answer:
24
