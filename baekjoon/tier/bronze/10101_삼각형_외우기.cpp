#include <iostream>
using namespace std;

int main()
{
	int x, y, z;

	cin >> x >> y >> z;
	if (60 == x && x == y && y == z)
		cout << "Equilateral";
	else if (x + y + z == 180)
	{
		if (x == y || y == z || z == x)
			cout << "Isosceles";
		else
			cout << "Scalene";
	}
	else
		cout << "Error";
	return (0);
}
