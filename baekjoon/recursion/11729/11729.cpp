#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long
#define f(i, n) for (int i = 0; i < n; i++)

// 원판 n개를 기둥 a에서 기둥 b으로 옮기는 방법을 출력하는 함수
void	func(int a, int b, int n)
{
	if (n == 1) // base condition
	{
		cout << a << ' ' << b << '\n';
		return ;
	}
	func(a, 6 - a - b, n - 1); // n - 1개의 원판을 기둥 a에서 기둥 6 - a - b로 옮긴다.
	cout << a << ' ' << b << '\n'; // n번 원판을 기둥 a에서 기둥 b로 옮긴다.
	func(6 - a - b, b, n - 1); // n - 1개의 원판을 기둥 6 - a - b에서 기둥 a로 옮긴다.
}

int	main(void)
{
	ios::sync_with_stdio(false), cin.tie(nullptr);

	int k; cin >> k;
	cout << (1 << k) - 1 << '\n';
	func(1, 3, k);
	return 0;
}

/*
n - 1개의 원판을 기둥 1에서 기둥 2로 옮긴다.
n번 원판을 기둥 1에서 기둥 3으로 옮긴다.
n - 1개의 원판을 기둥 2에서 기둥 3으로 옮긴다.
-> 원판이 n - 1개일 때 옮길 수 았으면 원판이 n개일 때에도 옮길 수 있다

원판이 1개일 때 원판을 내가 원하는 곳으로 옮길 수 있다.
원판이 k개일 때 옮길 수 있으면 원판이 k + 1개일때에도 옮길 수 있다.
 */
