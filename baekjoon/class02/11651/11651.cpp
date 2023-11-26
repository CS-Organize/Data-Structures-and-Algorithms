#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long
#define f(i, n) for (int i = 0; i < n; i++)
#define X second
#define Y first

int	main(void)
{
	ios::sync_with_stdio(false), cin.tie(nullptr);

	int n; cin >> n;
	pair<int, int> coordinate[n];

	f(i, n)
	{
		cin >> coordinate[i].X;
		cin >> coordinate[i].Y;
	}

	sort(coordinate, coordinate + n);

	f(i, n) cout << coordinate[i].X << ' ' << coordinate[i].Y << '\n';
	return 0;
}

/*

 */
