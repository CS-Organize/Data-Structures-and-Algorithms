#include <iostream>
#include <algorithm>
using namespace std;

int	main()
{
	int a, b, c; cin >> a >> b >> c;
	if (a == b && b == c) cout << 10000 + a * 1000 << '\n';
	else if (a == b || a == c) cout << 1000 + a * 100 << '\n';
	else if (b == c) cout << 1000 + b * 100 << '\n';
	else cout << max({a, b, c}) * 100 << '\n';
	return 0;
}
