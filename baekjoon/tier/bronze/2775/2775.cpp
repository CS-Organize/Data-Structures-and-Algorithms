#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;


// 3층 1, 5, 15, 25
// 2층 1, 4, 10, 20
// 1층 1, 3, 6, 10
// 0층 i호에 i명
int	main()
{
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int t, dp[15][15] = { {0} };

	// 기저값 깔기
	for (int i = 1; i <= 14; i++)
		dp[0][i] = i;
	// 점화식 사용
	for (int i = 1; i <= 14; i++)
	{
		dp[i][1] = 1;
		for (int j = 2; j <= 14; j++)
			dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
	}

	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int k, n; // k층 n호
		cin >> k >> n;
		cout << dp[k][n] << '\n';
	}
	return 0;
}
