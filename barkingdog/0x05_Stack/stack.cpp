#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

int	main()
{
	stack<int> s;
	s.push(10); // 10
	s.push(20); // 10 20
	s.push(30); // 10 20 30
	cout << s.size() << '\n'; // 3

	if (s.empty()) cout << "Stack is empty\n";
	else cout << "Stack isn\'t empty\n";

	s.pop();
	cout << s.top() << '\n'; // 20
	s.pop();
	cout << s.top() << '\n'; // 10
	s.pop(); // empty
	if (s.empty()) cout << "Stack is empty\n";
	else cout << "Stack isn\'t empty\n";
	// cout << s.top() << '\n';
	return 0;
}
