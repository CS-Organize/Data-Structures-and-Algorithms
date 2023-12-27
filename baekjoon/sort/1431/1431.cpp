#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long
#define f(i, n) for (size_t i = 0; i < n; i++)

bool	is_digit(char c)
{
	return '0' <= c && c <= '9';
}

bool	cmp(string& a, string& b)
{
	if (a.length() != b.length()) return a.length() < b.length();

	int asum = 0;
	int bsum = 0;
	f(i, a.length())
	{
		if (is_digit(a[i])) asum += a[i] - '0';
		if (is_digit(b[i])) bsum += b[i] - '0';
	}
	if (asum != bsum) return asum < bsum;

	f(i, a.length())
		if (a[i] != b[i]) return a[i] < b[i];

	return false;
}

int	main(void)
{
	ios::sync_with_stdio(false), cin.tie(nullptr);

	size_t n; cin >> n;
	string serial_number[n];

	f(i, n) cin >> serial_number[i];
	sort(serial_number, serial_number + n, cmp);
	
	f(i, n) cout << serial_number[i] << '\n';
	return 0;
}
