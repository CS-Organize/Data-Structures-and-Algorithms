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

    string s, e, q;
    cin >> s >> e >> q;
    map<string, vector<string> > chats;

    string time, name;
    while (!cin.eof())
    {
        cin >> time >> name;
        if (time > q)
            continue;
        chats[name].push_back(time);
    }

    int cnt = 0;
    for (map<string, vector<string> >::iterator mIt = chats.begin(); mIt != chats.end(); ++mIt)
    {
        bool before = false, after = false;
        for (vector<string>::iterator vIt = mIt->second.begin(); vIt != mIt->second.end(); ++vIt)
        {
            if (*vIt <= s) before = true;
            else if (*vIt >= e) after = true;
            if (before && after)
            {
                ++cnt;
                break;
            }
        }
    }
    cout << cnt << '\n';
    return 0;
}
