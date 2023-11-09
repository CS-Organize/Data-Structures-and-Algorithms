#include <iostream>
#include <cstring>
using namespace std;

int	is_size(int n, int b)
{
	int	size = 0;

	if (n == 0)
		size = 1;
	while (n > 0)
	{
		++size;
		n /= b;
	}
	return (size);
}

int	main()
{
	char	 base[37] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int		b, n, size;
	cin >> n >> b;

	size = is_size(n, b);
	char	answer[size + 1];
	for (int i = size - 1; i >= 0; i--)
	{
		answer[i] = base[n % b];
		n /= b;
	}
	answer[size] = '\0';

	cout << answer;
	return (0);
}
