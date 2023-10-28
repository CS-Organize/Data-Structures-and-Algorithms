#include <iostream>
using namespace std;

int main()
{
	short	arr[8], ascend = 0;
	for (short i = 0; i < 8; i++)
		cin >> arr[i];
	for (short i = 1; i < 8; i++)
	{
		if (arr[i] - arr[i - 1] == 1)
			++ascend;
		else if (arr[i] - arr[i - 1] == -1)
			--ascend;
	}
	if (ascend == 7)
		cout << "ascending";
	else if (ascend == -7)
		cout << "descending";
	else
		cout << "mixed";
	return (0);
}
