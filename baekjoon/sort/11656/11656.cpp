#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long
#define f(i, n) for (size_t i = 0; i < n; i++)

int	main(void)
{
	ios::sync_with_stdio(false), cin.tie(nullptr);

	string s; cin >> s;
	size_t n = s.length();
	string arr[n];
	
	f(i, n) arr[i] = s.substr(i);
	sort(arr, arr + n);
	f(i, n) cout << arr[i] << '\n';
	return 0;
}
