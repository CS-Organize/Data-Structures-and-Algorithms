#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

#define ll long long
#define f(i, n) for (int i = 0; i < n; i++)

#define I first
#define V second

int	main(void)
{
	ios::sync_with_stdio(false), cin.tie(nullptr);

	stack<pair<int, int> > st;
	// stack( {index, value} )
	int n; cin >> n;
	
	for (int i = 1; i <= n; ++i)
	{
		int x; cin >> x;
		if (st.empty()) 
		{
			st.push({i, x});
			cout << "0 ";
		}
		else
		{
			if (st.top().V >= x)
				cout << st.top().I << ' ';
			else 
			{
				while (!st.empty() && st.top().V < x)
					st.pop();
				if (st.empty())
					cout << "0 ";
				else 
					cout << st.top().I << ' ';
			}
			st.push({i, x});
		}
	}
	return 0;
}

/* 
6 
push {6}

9 
pop { }
push {9}

5
push {5, 9}

7
pop {9}
push {7, 9}

4
push {4, 7, 9}
*/
