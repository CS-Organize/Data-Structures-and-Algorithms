#include <iostream>
using namespace std;

int main()
{
	int	num, cpy, reverse;
	while (1)
	{
		cin >> num;
		if (num == 0)
			break;
		cpy = num;
		reverse = 0;
		while (cpy > 0)
		{
			reverse = reverse * 10 + cpy % 10;
			cpy /= 10;
		}
		if (num == reverse)
			cout << "yes\n";
		else
			cout << "no\n";
	}

	return (0);
}
