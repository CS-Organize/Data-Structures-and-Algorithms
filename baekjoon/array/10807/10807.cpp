#include <iostream>
#include <algorithm>
using namespace std;

int	main()
{
	ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

	int cnt[201] = { 0 }, n, v; cin >> n;
	for (int i = 0; i < n; i++)
	{
		int num; cin >> num;
		++cnt[num + 100];
	}
	cin >> v;
	cout << cnt[v + 100] << '\n';
	return 0;
}
