#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int	main()
{
	string s; cin >> s;
	int alpha[26] = { 0 };

	for (auto c : s)
		++alpha[c - 'a'];
	for (int i = 0; i < 26; i++)
		cout << alpha[i] << ' ';
	return 0;
}
