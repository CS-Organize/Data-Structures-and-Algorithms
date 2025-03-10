#include <algorithm>
#include <iostream>
#include <map>
using namespace std;

#define f(i, n) for (int i = 0; i < n; i++)

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(nullptr);

    unordered_map<string, vector<string> > dict;
    int n, m, num; 
    string name;

    cin >> n >> m;
    f(i, n)
    {
        cin >> name >> num;
        vector<string>& group = dict[name];
        f(j, num)
        {
            string m; cin >> m;
            group.push_back(m);
            dict[m].push_back(name);
        }
        sort(group.begin(), group.end());
    }

    f(i, m)
    {
        cin >> name >> num;
        for (vector<string>::iterator it = dict[name].begin(); it != dict[name].end(); ++it)
            cout << *it << '\n';
    }
    return 0;
}
