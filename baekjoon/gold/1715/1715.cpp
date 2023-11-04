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
	int	n;
	priority_queue<int, vector<int>, greater<int> > pq;
	unsigned long long sum = 0;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int num;

		cin >> num;
		pq.push(num);
	}
	int dum = 0;
	dum += pq.top();
	pq.pop();
	dum += pq.top(); // 30
	pq.pop();
	// 10 20 40 => (10 + 20) + (30 + 40)
	// 10 20 30 40 50 60 => (10 + 20) + (30 + 30) + (60 + 40) + (100 + 50) + (150 + 60)
	// 30
	sum += dum;
	while (pq.empty() != 1)
	{
		sum += dum; // 30
		dum += pq.top();
		pq.pop();
	}
	cout << sum;
	return 0;
}
