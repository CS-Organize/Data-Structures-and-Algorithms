#include <iostream>
#include <algorithm>
using namespace std;

// a가 b의 앞에 와야할 때 true, 그렇지 않을 때 false
// 주의: 두 값이 같을 때 false를 반환하지 않으면 run time error 발생
bool	cmp(int a, int b)
{
	return a < b;
}

int	main(void)
{
	int a[5] = {1, 4, 5, 2, 7};
	sort(a, a + 5);

	vector<int> b = {1, 4, 5, 2, 7};
	sort(b.begin(), b.end());
	// sort(b.begin(), b.begin() + 5);

	for (int i = 0; i < 5; i++)
		cout << a[i] << ' ';
	cout << '\n';

	for (int i = 0; i < 5; i++)
		cout << b[i] << ' ';
	cout << '\n';
	
	int c[7] = {7, 6, 5, 4, 3, 2, 1};
	sort(c, c + 7, cmp);

	for (int i = 0; i < 7; i++)
			cout << c[i] << ' ';
		cout << '\n';

	return 0;
}
