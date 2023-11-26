#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long
#define f(i, n) for (int i = 0; i < n; i++)

int factorial(int n)
{
	if (n <= 1) return 1;
	return n * factorial(n - 1);
}

int	main(void)
{
	ios::sync_with_stdio(false), cin.tie(nullptr);

	int n, k; cin >> n >> k;

	int a = factorial(n);
	int b = factorial(k) * factorial(n - k);

	cout << a / b << '\n';
	return 0;
}
