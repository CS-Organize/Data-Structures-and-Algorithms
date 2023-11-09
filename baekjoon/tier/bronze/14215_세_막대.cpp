#include <iostream>
using namespace std;

int main()
{
	int a, b, c, tmp;

	cin >> a >> b >> c;
	if (a > c)
	{
		tmp = a;
		a = c;
		c = tmp;
	}
	if (b > c)
	{
		tmp = b;
		b = c;
		c = tmp;
	}
	while (c >= a + b)
		--c;
	cout << a + b + c;
	return (0);
}
