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
	unsigned long long sum = 0, a, b, set, flag = 0;
	int	n;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int num;

		cin >> num;
		pq.push(num);
	}

	if (pq.size() == 1)
	{
		sum = 0;
		flag = 1;
	}
	while (pq.size() != 1 && flag == 0)
	{
		a = 0; b = 0;
		a = pq.top(); pq.pop();
		if (pq.size() > 0)
			b = pq.top(); pq.pop();
		set = a + b;
		sum += set;
		pq.push(set);
	}
	cout << sum << '\n';
	return 0;
}
