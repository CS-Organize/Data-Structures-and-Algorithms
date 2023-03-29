#include <iostream>
using namespace std;

int main()
{
	int n;

	cin >> n;
	while (n != -1)
	{
		int sum = 0, cnt = 0;
		for (int i = 1; i < n; i++)
		{
			if (n % i == 0)
			{
				sum += i;
				++cnt;
			}
		}
		if (sum == n)
		{
			cout << n << " = ";
			for (int i = 1; i < n; i++)
			{
				if (n % i == 0)
				{
					cout << i;
					--cnt;
					if (cnt > 0)
						cout << " + ";
				}
			}
			cout << "\n";
		}
		else
			cout << n << " is NOT perfect.\n";
		cin >> n;
	}
	return (0);
}
