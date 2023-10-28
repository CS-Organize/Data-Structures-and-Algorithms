#include <iostream>
using namespace std;

unsigned int	gcd(unsigned int a, unsigned int b)
{
	unsigned int tmp;
	while (b != 0)
	{
		tmp = a % b;
		a = b;
		b = tmp;
	}
	return (a);
}

int main()
{
	unsigned int	a, b;
	cin >> a >> b;
	cout << gcd(a, b) << '\n' << (a * b) / gcd(a, b);
	return (0);
}
