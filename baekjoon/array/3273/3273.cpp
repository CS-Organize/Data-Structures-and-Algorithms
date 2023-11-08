#include <iostream>
#include <algorithm>
using namespace std;

int	main()
{
	ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

	int n; cin >> n;
	int arr[n], x, cnt = 0;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	cin >> x;

	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] + arr[j] == x)
				++cnt;
		}
	}
	cout << cnt << '\n';
	return 0;
}
