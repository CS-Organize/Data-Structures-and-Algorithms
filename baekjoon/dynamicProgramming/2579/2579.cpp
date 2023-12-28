#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long
#define f(i, n) for (int i = 0; i < n; i++)

int s[301];
int n;
// 1. 테이블 정의하기
int d[301][3];

int	main(void)
{
	ios::sync_with_stdio(false), cin.tie(nullptr);

	int n; cin >> n;

	for (int i = 1; i <= n; i++) cin >> s[i];
	if (n == 1)
	{
		cout << s[1];
		return 0;
	}

	// 3. 초기값 설정하기
	d[1][1] = s[1];
	d[1][2] = 0;
	d[2][1] = s[2];
	d[2][2] = s[1] + s[2];
	
	// 점화식 찾기ff
	for (int i = 3; i <= n; i++)
	{
		d[i][1] = max(d[i - 2][1], d[i - 2][2]) + s[i];
		d[i][2] = d[i - 1][1] + s[i];
	}
	cout << max(d[n][1], d[n][2]) << '\n';
	return 0;
}
