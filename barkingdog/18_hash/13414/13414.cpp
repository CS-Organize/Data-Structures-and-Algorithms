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

    size_t k, l; cin >> k >> l;
    vector<string> v, ans;
    unordered_map<string, int> hashMap;

    f(i, l)
    {
        string n; cin >> n;
        v.push_back(n);

        if (hashMap.find(n) != hashMap.end())
            ++hashMap[n];
        else
            hashMap[n] = 0;
    }
    for (size_t i = 0; i < l; ++i)
    {
        int& cur = hashMap[v[i]];

        if (cur > 0)
            --cur;
        else
            ans.push_back(v[i]);
    }

    int i = 0;
    for (vector<string>::iterator it = ans.begin(); it != ans.end() && i++ < k; ++it)
        cout << *it << '\n';

    return 0;
}

/* 
3 4
1
2
3
3

3 3
3
3
3

4 3
3
2
3
 */
