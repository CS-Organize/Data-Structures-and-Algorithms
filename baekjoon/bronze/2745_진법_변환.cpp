#include <iostream>
#include <cstring>
using namespace std;

int	is_base(char *base, char c)
{
	int	n = 0;

	while (base[n] != c && base[n] != '\0')
		++n;

	return (n);
}

int	main()
{
	char	n[32], base[37] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int		b, answer = 0;
	cin >> n >> b;

	for (int i = 0; i < strlen(n); i++)
		answer = (answer * b) + is_base(base, n[i]);
	cout << answer;
	return (0);
}
