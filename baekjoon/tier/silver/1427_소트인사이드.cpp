#include <iostream>
#include <cstring>
using namespace std;

int	is_size(int n)
{
	int	size = 0;
	if (n == 0)
		size = 1;
	while (n > 0)
	{
		++size;
		n /= 10;
	}
	return (size);
}

int	main()
{
	int	n;
	cin >> n;

	char	num[11] = { 0 };
	int		size = is_size(n), tmp;
	if (n == 0)
		num[0] = '0';
	for (int i = size - 1; n > 0; i--)
	{
		num[i] = n % 10 + '0';
		n /= 10;
	}
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (num[i] < num[j])
			{
				tmp = num[i];
				num[i] = num[j];
				num[j] = tmp;
			}
		}
	}
	cout << num;

	return (0);
}
