#include <iostream>
#include <algorithm>
using namespace std;

int	main()
{
	ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

	int t; cin >> t;
	for (int i = 0; i < t; i++)
	{
		int a, b; cin >> a >> b;
		cout << a + b << '\n';
	}

	return 0;
}
