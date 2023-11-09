#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <stack>
using namespace std;

int	main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);

	set< pair<int, int> >	pSet;
	map<int, int>			pMap;

	// n개의 문제 삽입
	int	n, m; cin >> n;
	for (int i = 0; i < n; i++)
	{
		int	p, l; cin >> p >> l;
		pSet.insert(make_pair(l, p));
		pMap[p] = l;
	}

	// m개의 명령어 수행
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		int		x, p, l;
		string	cmd; cin >> cmd;

		if (cmd == "recommend") {
			cin >> x;
			if (x > 0)
				cout << pSet.rbegin()->second << '\n';
			if (x < 0)
				cout << pSet.begin()->second << '\n';
		}
		else if (cmd == "add") {
			cin >> p >> l;
			pSet.insert(make_pair(l, p));
			pMap[p] = l;
		}
		else if (cmd == "solved") {
			cin >> p;
			pSet.erase({pMap[p], p});
			pMap.erase(p);
		}
	}
	return (0);
}
