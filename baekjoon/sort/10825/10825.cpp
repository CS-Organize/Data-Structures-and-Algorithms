#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long
#define f(i, n) for (size_t i = 0; i < n; i++)

#define NAME get<0>
#define LANG get<1>
#define ENG get<2>
#define MATH get<3>

bool	cmp(const tuple<string, int, int, int>& a, const tuple<string, int, int, int>& b)
{
	// 국어 내림차순
	if (LANG(a) != LANG(b)) return LANG(a) > LANG(b);
	// 영어 오름차순
	if (ENG(a) != ENG(b)) return ENG(a) < ENG(b);
	// 수학 내림차순
	if (MATH(a) != MATH(b)) return MATH(a) > MATH(b);
	// 이름 사전순 오름차순
	if (NAME(a) != NAME(b)) return NAME(a) < NAME(b);
	return false;
}

int	main(void)
{
	ios::sync_with_stdio(false), cin.tie(nullptr);

	size_t n; cin >> n;
	tuple<string, int, int, int> students[n];

	f(i, n) 
	{
		string name; cin >> name;
		int lang; cin >> lang;
		int eng; cin >> eng;
		int math; cin >> math;
		students[i] = {name, lang, eng, math};
	}
	sort(students, students + n, cmp);
	f(i, n) cout << NAME(students[i]) << '\n';
	return 0;
}
