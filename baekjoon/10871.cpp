#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int	main()
{
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int	n, x, a;
	cin >> n >> x;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		if (a < x)
			cout << a << ' ';
	}
	return (0);
}
