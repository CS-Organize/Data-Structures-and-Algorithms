#include <iostream>
#include <algorithm>
using namespace std;

int	main()
{
	ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

	int sum = 0, min = 101;

	for (int i = 0; i < 7; i++)
	{
		int num; cin >> num;
		if (num & 1)
		{
			sum += num;
			if (min > num)
				min = num;
		}
	}
	if (sum == 0) cout << "-1\n";
	else cout << sum << '\n' << min;
	return 0;
}
