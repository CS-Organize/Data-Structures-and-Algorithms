#include <iostream>
#include <cstring>
using namespace std;

int	main()
{
	int	n, m;

	cin >> n;
	int	arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	cin >> m;
	int	num[n], flag;
	for (int i = 0; i < m; i++)
		cin >> num[i];

	for (int i = 0; i < m; i++)
	{
		flag = 0;

		for (int j = 0; j < n; j++)
			if (num[i] == arr[j])
				flag = 1;
		cout << flag << ' ';
	}
	return (0);
}
