#include <iostream>
#include <algorithm>
using namespace std;

int	main()
{
	ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

	int max = 0, idx;
	for (int i = 0; i < 9; i++)
	{
		int n; cin >> n;
		if (n > max)
		{
			max = n;
			idx = i + 1;
		}
	}
	cout << max << '\n' << idx << '\n';
	return 0;
}
