#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

#define ll long long
#define f(i, n) for (int i = 0; i < n; i++)

int	main(void)
{
	ios::sync_with_stdio(false), cin.tie(nullptr);

	int n; cin >> n;
	cin.ignore();
	// getline이 호출되기 전 받는 입력이 있다면, 버퍼에 개행문자가 남아있어, '\n'이 getline에 바로 입력되어버리는 현상이 발생한다.
	// 이 때, cin.ignore을 이용한다면 버퍼를 비울 수 있다.
	f(i, n)
	{
		string s; getline(cin, s);
		'a' <= s[0] && s[0] <= 'z' ? s[0] -= 32 : s[0];
		cout << s << '\n';
	}
	return 0;
}
