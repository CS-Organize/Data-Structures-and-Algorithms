#include <iostream>
using namespace std;

int main()
{
	unsigned int	a, b, c, n, digit[10] = { 0 };

	cin >> a >> b >> c;
	n = a * b * c;
	while (n > 0)
	{
		++digit[n % 10];
		n /= 10;
	}
	for (int i = 0; i < 10; i++)
		cout << digit[i] << '\n';
	return (0);
}
