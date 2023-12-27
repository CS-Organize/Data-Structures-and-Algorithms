#include <iostream>
#include <algorithm>
using namespace std;

int	main(void)
{
	int a[5] = {1, 4, 5, 2, 7};
	sort(a, a + 5);

	vector<int> b = {1, 4, 5, 2, 7};
	sort(b.begin(), b.end());

	for (int i = 0; i < 5; i++)
		cout << a[i] << ' ';
	cout << '\n';

	for (int i = 0; i < 5; i++)
		cout << b[i] << ' ';
	cout << '\n';
	
	return 0;
}
