#include <iostream>
#include <algorithm>
using namespace std;

int	main()
{
	ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

	long long a, b, low, up; cin >> a >> b;
	up = max(a, b);
	low = min(a, b);
	cout << up - low - (up != low) << '\n';
	for (long long i = low + 1; i < up; i++)
		cout << i << ' ';
	return 0;
}
