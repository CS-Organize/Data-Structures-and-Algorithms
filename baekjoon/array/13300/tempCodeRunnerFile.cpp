#include <iostream>
#include <algorithm>
using namespace std;

int	main()
{
	ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

	int n, k; cin >> n >> k;
	int cnt[2][7], room = 0;

	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 7; j++)
			cnt[i][j] = 0;

	for (int i = 0; i < n; i++)
	{
		int s, y; cin >> s >> y;
		++cnt[s][y];
	}

	for (int i = 0; i < 2; i++)
		for (int j = 1; j < 7; j++)
			room += (cnt[i][j] + 1) / 2;

	cout << room << '\n';
	return 0;
}
