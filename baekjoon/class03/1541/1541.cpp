#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long
#define f(i, n) for (int i = 0; i < n; i++)

int	main(void)
{
	ios::sync_with_stdio(false), cin.tie(nullptr);

	string input; cin >> input;
	int sum = 0, posSum = 0, i = 0;
	bool pos = false;

	while ((size_t)i < input.length())
	{
		int start = i;
		while ('0' <= input[i] && input[i] <= '9')
			++i;
		int num = atoi(input.substr(start, i - start).c_str());
		if (pos)
			posSum += num;
		else
			sum += num;
		if (input[i++] == '-')
			pos = true;
	}
	sum -= posSum;
	cout << sum << '\n';
	return 0;
}
