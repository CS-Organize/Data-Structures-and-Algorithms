#include <iostream>
#include <algorithm>
#include <deque>
using namespace std;

int	main()
{
	deque<int> DQ;

	DQ.push_front(20);
	DQ.push_back(30);
	DQ.push_front(10);

	for (auto x : DQ) cout << x << ' ';
	cout << "\nsize : " << DQ.size() << '\n';

	if (DQ.empty()) cout << "Deque is empty\n";
	else cout << "Deque isn\'t empty\n";

	DQ.pop_front();
	DQ.pop_back();

	cout << DQ.front() << '\n';
	cout << DQ.back() << '\n';

	DQ.push_back(40);

	cout << DQ.front() << '\n';
	cout << DQ.back() << '\n';

	DQ.push_back(59);
	cout << DQ.back() << '\n';

	DQ[DQ.size() - 1] = 60;
	cout << DQ.back() << '\n';

	DQ.insert(DQ.begin() + 1, 30);
	DQ.insert(DQ.begin() + 3, 50);
	DQ.insert(DQ.begin(), 10);

	for (auto x : DQ) cout << x << ' ';
	cout << "\nsize : " << DQ.size() << '\n';

	DQ.erase(DQ.begin() + 5);

	for (auto x : DQ) cout << x << ' ';
	cout << "\nsize : " << DQ.size() << '\n';

	cout << DQ[2] << '\n';

	DQ.clear();

	return 0;
}
