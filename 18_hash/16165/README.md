# [16165](https://www.acmicpc.net/problem/16165)
solved on: 2024-07-17

## Solutions

내 첫풀이
```cpp
#include <algorithm>
#include <iostream>
#include <map>
using namespace std;

typedef pair<int, int> P;

#define ll      long long
#define f(i, n) for (int i = 0; i < n; i++)

const int GROUP_TO_MEMBER = 0;
const int MEMBER_TO_GROUP = 1;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(nullptr);

    unordered_map<string, vector<string> > g2m;
    unordered_map<string, string> m2g;
    int n, m, num; 
    string name;

    cin >> n >> m;
    f(i, n)
    {
        cin >> name >> num;
        vector<string>& group = g2m[name];
        f(j, num)
        {
            string m; cin >> m;
            group.push_back(m);
            m2g[m] = name;
        }
        sort(group.begin(), group.end());
    }

    f(i, m)
    {
        cin >> name >> num;
        if (num == GROUP_TO_MEMBER)
            for (vector<string>::iterator it = g2m[name].begin(); it != g2m[name].end(); ++it)
                cout << *it << '\n';
        else if (num == MEMBER_TO_GROUP)
            cout << m2g[name] << '\n';
    }
    return 0;
}
```

## References
