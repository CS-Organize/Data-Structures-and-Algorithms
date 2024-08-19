#include <algorithm>
#include <iostream>
#include <set>
using namespace std;

typedef pair<int, int> P;

#define ll      long long
#define f(i, n) for (int i = 0; i < n; i++)

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(nullptr);

    size_t n; cin >> n;
    set<string> s;

    f(i, n)
    {
        string name, status;
        cin >> name >> status;
        if (s.find(name) != s.end()) s.erase(name);
        if (status == "enter") s.insert(name);
    }

    for (set<string>::reverse_iterator it = s.rbegin(); it != s.rend(); ++it)
        cout << *it << '\n';
    
    return 0;
}
