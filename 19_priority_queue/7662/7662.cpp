#include <algorithm>
#include <iostream>
#include <map>
using namespace std;

typedef pair<int, int> P;

#define ll      long long
#define f(i, n) for (int i = 0; i < n; i++)

static void testCase(void);

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(nullptr);

    int t; cin >> t;
    f(i, t) testCase();
    return 0;
}

void testCase(void)
{
    int k; cin >> k;
    map<int, int> m;
    char cmd;
    int num;
    
    f(i, k)
    {
        cin >> cmd >> num;
        if (cmd == 'I')
        {
            m.find(num) != m.end() ? m[num] += 1 : m[num] = 1;
        }
        else if (cmd == 'D')
        {
            if (m.empty())
                continue;
            if (num == -1)
            {
                if (--m.begin()->second <= 0)
                    m.erase(m.begin());
            }
            else
            {
                if (--m.rbegin()->second <= 0)
                    m.erase(prev(m.end()));
            }
        }
    }
    if (m.empty()) cout << "EMPTY\n";
    else  cout << m.rbegin()->first << ' ' << m.begin()->first << '\n';
}

/* 
1
9
I 36
I 37
I 38
D 1
D 1
I 39
I 40
D -1
D -1
 */
