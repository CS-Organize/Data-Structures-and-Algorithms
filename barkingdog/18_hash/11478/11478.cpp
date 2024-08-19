#include <algorithm>
#include <iostream>
#include <unordered_set>
using namespace std;

typedef pair<int, int> P;

#define ll      long long
#define f(i, n) for (int i = 0; i < n; i++)

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(nullptr);

    unordered_set<string> us;
    string str; cin >> str;
    size_t len = str.length();

    for (size_t n = 1; n <= len; n++)
    {
        for (size_t idx = 0; idx < len && idx + n <= len; idx++)
        {
            us.insert(str.substr(idx, n));
        }
    }
    cout << us.size() << '\n';
    return 0;
}
