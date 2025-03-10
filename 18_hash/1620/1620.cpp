#include <algorithm>
#include <iostream>
#include <map>
using namespace std;

typedef pair<int, int> P;

#define ll      long long
#define f(i, n) for (int i = 0; i < n; i++)

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(nullptr);

    size_t n, m; cin >> n >> m;
    unordered_map<string, int> book;
    vector<string> v;

    f(i, n)
    {
        string name; cin >> name;
        book.insert(make_pair(name, i));
        v.push_back(name);
    }
    f(i, m)
    {
        string q; cin >> q;
        if (isdigit(q[0]))
            cout << v[stoi(q) - 1] << '\n';
        else
            cout << book[q] + 1 << '\n';

    }
    return 0;
}
