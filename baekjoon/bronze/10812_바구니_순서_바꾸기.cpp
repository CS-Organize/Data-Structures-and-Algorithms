#include <iostream>
using namespace std;

int main()
{
	short n, m;
	cin >> n >> m;

	short basket[n + 1], start, end, mid, tmp, max = 0;
	for (short i = 1; i <= n; i++)
		basket[i] = i;
	for (short i = 0; i < m; i++)
	{
		cin >> start >> end >> mid;
		max = 0;
		for (short j = mid - 1; j >= start; j--)
		{
			for (short k = j; k < end - max; k++)
			{
				tmp = basket[k];
				basket[k] = basket[k + 1];
				basket[k + 1] = tmp;
			}
			++max;
		}
	}
	for (short i = 1; i <= n; i++)
		cout << basket[i] << ' ';
	return (0);
}
