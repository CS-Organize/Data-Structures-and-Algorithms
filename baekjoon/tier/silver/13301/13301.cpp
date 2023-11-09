#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;

int	main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	long long	dp[81];
	int			n;

	cin >> n;
	dp[1] = 1;
	dp[2] = 1;
	for (int i = 3; i <= n; i++)
		dp[i] = dp[i - 1] + dp[i - 2];
	cout << dp[n] * 4 + dp[n - 1] * 2 << endl;
	return (0);
}
