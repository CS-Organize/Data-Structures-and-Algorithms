#include <iostream>
#include <algorithm>
using namespace std;

int	main()
{
	ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

	int y = 0, m = 0;
	int n; cin >> n;
	for (int i = 0; i < n; i++)
	{
		int t; cin >> t;
		y += (t / 30 + 1) * 10;
		m += (t / 60 + 1) * 15;
	}
	if (y < m)
		cout << "Y " << y << '\n';
	else if (y == m)
		cout << "Y M " << y << '\n';
	else
		cout << "M " << m << '\n';
	return 0;
}
