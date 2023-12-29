#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long
#define f(i, n) for (int i = 0; i < n; i++)

#define W first
#define H second

int	main(void)
{
	ios::sync_with_stdio(false), cin.tie(nullptr);

	int n; cin >> n;
	pair<int, int> people[n];
	int rank[n]; 

	f(i, n)
	{
		cin >> people[i].W;
		cin >> people[i].H;
	}

	f(i, n)
	{
		int cnt = 1;
		f(j, n)
		{
			if (people[i].W < people[j].W 
			&& people[i].H < people[j].H) cnt++;
		}
		rank[i] = cnt;
	}
	f(i, n) cout << rank[i] << ' ';
	return 0;
}
