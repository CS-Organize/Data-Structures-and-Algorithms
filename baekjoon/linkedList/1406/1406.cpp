#include <iostream>
#include <algorithm>
#include <list>
#include <string>
using namespace std;

int	main()
{
	ios::sync_with_stdio(false), cin.tie(nullptr);

	string s; cin >> s;
	list<char> l;

	for (size_t i = 0; i < s.length(); i++)
		l.push_back(s[i]);

	list<char>::iterator cur = l.end();

	int m; cin >> m;

	for (int i = 0; i < m; i++)
	{
		char input; cin >> input;

		// L 커서를 왼쪽으로 한 칸 옮김 (커서가 문장의 맨 앞이면 무시됨)
		if (input == 'L')
		{
			if (cur != l.begin())
				--cur;
		}
		// D 커서를 오른쪽으로 한 칸 옮김 (커서가 문장의 맨 뒤이면 무시됨)
		if (input == 'D')
		{
			if (cur != l.end())
				++cur;
		}
		// B 커서 왼쪽에 있는 문자를 삭제함 (커서가 문장의 맨 앞이면 무시됨)
		// 삭제로 인해 커서는 한 칸 왼쪽으로 이동한 것처럼 나타나지만, 실제로 커서의 오른쪽에 있던 문자는 그대로임
		if (input == 'B')
		{
			if (cur != l.begin())
			{
				--cur;
				cur = l.erase(cur);
			}
		}
		// P c c라는 문자를 커서 왼쪽에 추가함
		if (input == 'P')
		{
			char c; cin >> c;
			l.insert(cur, c);
		}
	}

	for (list<char>::iterator it = l.begin(); it != l.end(); it++)
		cout << *it;
	cout << '\n';
	return 0;
}

/*
	'|'a|b|c|d|
	begin()
	|a|b|c|d'|'
	end()

	|a|b|c|d'|'
	3
	P x |a|b|c|d|x'|'
	L   |a|b|c|d'|'x|
	P y |a|b|c|d|y'|'x|

	|a|b|c'|'
	9
	L   |a|b'|'c|
	L   |a'|'b|c|
	L  '|'a|b|c|
	L  '|'a|b|c|
	L  '|'a|b|c|
	P x |x'|'a|b|c|
	L  '|'x|a|b|c|
	B  '|'x|a|b|c|
	P y |y'|'x|a|b|c|

	|d|m|i|h'|'
	11
	B   |d|m|i'|'
	B   |d|m'|'
	P x |d|m|x'|'
	L   |d|m'|'x|
	B   |d'|'x|
	B   '|'x|
	B   '|'x|
	P y |y'|'x|
	D   |y|x'|'
	D   |y|x'|'
	P z |y|x|z'|'
*/
