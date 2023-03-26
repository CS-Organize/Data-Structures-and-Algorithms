#include <iostream>
using namespace std;

int main()
{
	short n, m;
	cin >> n >> m;

	short basket[n + 1], a, b, tmp;
	for (short i = 1; i <= n; i++)
		basket[i] = i;
	for (short i = 0; i < m; i++)
	{
		cin >> a >> b;
		for (short j = 0; j < (b - a + 1) / 2; j++)
		{
			tmp = basket[a + j];
			basket[a + j] = basket[b - j];
			basket[b - j] = tmp;
		}
	}
	for (short i = 1; i <= n; i++)
		cout << basket[i] << ' ';
	return (0);
}
