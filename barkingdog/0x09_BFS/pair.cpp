#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;

int	main()
{
	pair<int, int> t1 = make_pair(10, 13);
	pair<int, int> t2 = {4, 6}; // C++11

	cout << t2.first << ' ' << t2.second << '\n';
	if (t2 < t1) cout << "t2 < t1\n"; // first 비교 후 같으면 second 비교
	return 0;
}
