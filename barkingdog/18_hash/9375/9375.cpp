#include <algorithm>
#include <iostream>
#include <map>
using namespace std;

typedef pair<int, int> P;

#define ll      long long
#define f(i, n) for (int i = 0; i < n; i++)

void testCase(void)
{
    unordered_map<string, int> um;
    int n; cin >> n;

    f(i, n)
    {
        string name; cin >> name;
        string type; cin >> type;
        if (um.find(type) == um.end())
            um[type] = 1;
        else
            ++um[type];
    }

    int sum = 1;
    for (unordered_map<string, int>::iterator it = um.begin(); it != um.end(); it++)
    {
        sum *= it->second + 1;
    }
    cout << sum - 1 << '\n';
}

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(nullptr);

    int t; cin >> t;
    f(i, t) testCase();

    return 0;
}

/* 
3 1 2
a a a
b
c c

a (a1, a2, a3, ∅)
b (b1, ∅)
c (c1, c2, ∅)

4 x 2 x 3 - 1 = 23
 */
