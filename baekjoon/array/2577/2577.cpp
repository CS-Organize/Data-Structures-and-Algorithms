#include <iostream>
#include <algorithm>
using namespace std;

int	main()
{
	ios::sync_with_stdio(false), cin.tie(nullptr);

	int num = 1, digit[10] = { 0 };

	for (int i = 0; i < 3; i++)
	{
		int n; cin >> n;
		num *= n;
	}
	while (num != 0)
	{
		++digit[num % 10];
		num /= 10;
	}
	for (int i = 0; i < 10; i++)
		cout << digit[i] << '\n';
	return 0;
}
