#include <iostream>
using namespace std;

int main()
{
	short n, m;
	cin >> n >> m;

	short basket[n + 1], a, b, tmp;
	for (int i = 1; i <= n; i++)
		basket[i] = i;
	for (int i = 0; i < m; i++)
	{
		cin >> a >> b;
		tmp = basket[a];
		basket[a] = basket[b];
		basket[b] = tmp;
	}
	for (int i = 1; i <= n; i++)
		cout << basket[i] << ' ';
	return (0);
}
