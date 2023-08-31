#include <iostream>
using namespace std;

int main()
{
	short n, m;
	cin >> n >> m;

	short basket[n], a, b, c;
	for (short i = 0; i < n; i++)
		basket[i] = 0;
	for (short i = 0; i < m; i++)
	{
		cin >> a >> b >> c;
		for (short j = a - 1; j <= b - 1; j++)
			basket[j] = c;
	}
	for (int i = 0; i < n; i++)
		cout << basket[i] << ' ';
	return (0);
}
