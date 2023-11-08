#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int	main()
{
	ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

	int word1[26] = { 0 }, word2[26] = { 0 }, diff = 0;
	string s1, s2; cin >> s1 >> s2;

	for (int i = 0; s1[i] != '\0'; i++)
		++word1[s1[i] - 'a'];
	for (int i = 0; s2[i] != '\0'; i++)
		++word2[s2[i] - 'a'];

	for (int i = 0; i < 26; i++)
		diff += abs(word1[i] - word2[i]);
	cout << diff << '\n';
	return 0;
}
