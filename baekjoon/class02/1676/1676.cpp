#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long
#define heeyjang unsigned long long
#define f(i, n) for (int i = 0; i < n; i++)
#define SEONGMIK ios::sync_with_stdio(false), cin.tie(nullptr);

heeyjang factorial(int n)
{
	if (n == 1) return 1;
	return n * factorial(n - 1);
}

int	main(void)
{
	SEONGMIK

	int n; cin >> n;
	// cout << factorial(n) << '\n';

	int twoCnt = 0;
	int fiveCnt = 0;
	int ans = 0;

	for (int i = 1; i <= n; i++)
	{
		int tmp = i;
		while (tmp % 2 == 0)
		{
			tmp /= 2;
			++twoCnt;
		}
		while (tmp % 5 == 0)
		{
			tmp /= 5;
			++fiveCnt;
		}
	}
	while (twoCnt > 0 && fiveCnt > 0)
	{
		--twoCnt;
		--fiveCnt;
		++ans;
	}
	cout << ans << '\n';
	return 0;
}

/*
시간 제한	메모리 제한	제출	정답	맞힌 사람	정답 비율
2 초	128 MB	72450	34344	28682	47.115%
문제
N!에서 뒤에서부터 처음 0이 아닌 숫자가 나올 때까지 0의 개수를 구하는 프로그램을 작성하시오.

입력
첫째 줄에 N이 주어진다. (0 ≤ N ≤ 500)

출력
첫째 줄에 구한 0의 개수를 출력한다.

예제 입력 1
10
예제 출력 1
2

예제 입력 2
3
예제 출력 2
0
*/
