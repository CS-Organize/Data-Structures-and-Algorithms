#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long
#define f(i, n) for (int i = 0; i < n; i++)

int	main(void)
{
	ios::sync_with_stdio(false), cin.tie(nullptr);

	int t; cin >> t;
	// 1. 테이블 정의하기
	int d[11];

	// 3. 초기값 정하기
	d[1] = 1;
	d[2] = 2;
	d[3] = 4;

	// 2. 점화식 찾기
	for (int i = 4; i <= 10; i++)
		d[i] = d[i - 1] + d[i - 2] + d[i - 3];

	f(i, t)
	{
		int n; cin >> n;
		cout << d[n] << '\n';
	}
	return 0;
}
