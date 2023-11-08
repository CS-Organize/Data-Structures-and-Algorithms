#include <iostream>
#include <algorithm>
using namespace std;

int	main()
{
	ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

	int card[21];
	for (int i = 0; i <= 20; i++)
		card[i] = i;
	for (int i = 0; i < 10; i++)
	{
		int a, b, tmp; cin >> a >> b;
		for (int j = a; j <= a + (b - a) / 2; j++)
		{
			tmp = card[j];
			card[j] = card[a + b - j];
			card[a + b - j] = tmp;
		}
	}
	for (int i = 1; i <= 20; i++)
		cout << card[i] << ' ';
	return 0;
}
