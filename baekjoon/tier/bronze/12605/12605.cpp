#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long
#define f(i, n) for (size_t i = 0; i < n; i++)

void	reverse(string s, size_t i)
{
	if (i >= s.length() - 1) return ;
	int start = i;
	while (s[i] && s[i] != ' ')
		++i;
	int end = i;
	while (s[i] == ' ')
		++i;
	reverse(s, i);
	cout << s.substr(start, end - start) << ' ';
}

int	main(void)
{
	ios::sync_with_stdio(false), cin.tie(nullptr);

	size_t n; cin >> n;
	cin.ignore();

	f(i, n) 
	{
		string input; getline(cin, input);
		cout << "Case #" << i + 1 << ": ";
		reverse(input, 0);
		cout << '\n';
	}
	return 0;
}
