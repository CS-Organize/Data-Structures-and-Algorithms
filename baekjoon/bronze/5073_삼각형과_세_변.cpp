#include <iostream>
using namespace std;

int main()
{
	int a, b, c, tmp;
	cin >> a >> b >> c;
	while (!(a == 0 && b == 0 && c == 0))
	{
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
		if ((c >= a + b) || (a == 0 || b == 0 || c == 0))
			cout << "Invalid\n";
		else if (a == b && b == c)
			cout << "Equilateral\n";
		else if (a == b || b == c || c == a)
			cout << "Isosceles\n";
		else
			cout << "Scalene\n";
		cin >> a >> b >> c;
	}
	return (0);
}
