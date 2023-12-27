#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long
#define f(i, n) for (size_t i = 0; i < n; i++)

int	main(void)
{
	ios::sync_with_stdio(false), cin.tie(nullptr);

	int n; cin >> n;
	string input; cin >> input;
	int	chicken = 0;

	f(i, input.length()) 
		if (input[i] == 'C')
			++chicken;
	
	if (n == chicken) cout << n << '\n';
	else cout << n / (n - chicken + 1) << '\n';
	return 0;
}
