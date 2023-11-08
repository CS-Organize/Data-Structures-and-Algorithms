#include <iostream>
#include <algorithm>
using namespace std;

int	main()
{
	ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

	int n, x; cin >> n >> x;
	for (int i = 0; i < n; i++)
	{
		int num; cin >> num;
		if (num < x)
			cout << num << ' ';
	}
	cout << '\n';
	return 0;
}
