#include <iostream>
#include <algorithm>
using namespace std;

int	main()
{
	ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

	int set[10] = { 0 }, max = 0;
	int n; cin >> n;
	while (n != 0)
	{
		++set[n % 10];
		n /= 10;
	}
	set[6] = (set[6] + set[9] + 1) / 2;
	for (int i = 0; i < 9; i++)
	{
		if (max < set[i])
			max = set[i];
	}
	cout << max << '\n';
	return 0;
}
