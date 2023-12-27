#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long
#define f(i, n) for (size_t i = 0; i < n; i++)
#define NUM first
#define FREQ second

int	main(void)
{
	ios::sync_with_stdio(false), cin.tie(nullptr);

	size_t n; cin >> n;
	size_t c; cin >> c;
	vector<int> v;

	f(i, n)
	{
		int x; cin >> x;
		v.push_back(x);
	} 
	while (!v.empty())
	{
		// 빈도 측정
		pair<int, int> maxFreq = {0, 0};
		for (size_t i = 0; i < v.size(); i++)
		{
			// 이미 측정한 수라면 통과
			if (maxFreq.NUM == v[i]) continue;

			int cnt = 1;
			for (size_t j = i + 1; j < v.size(); j++)
				if (v[i] == v[j]) ++cnt;
			if (cnt > maxFreq.FREQ)
				maxFreq = {v[i], cnt};
		}
		for (auto it = v.begin(); it != v.end(); ++it)
		{
			if (*it == maxFreq.NUM)
			{
				cout << maxFreq.NUM << ' ';
				v.erase(it);
				--it; // 삭제 후 다시 반복자 감소
			}
		}
	}
	return 0;
}
