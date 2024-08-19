#include <algorithm>
#include <iostream>
using namespace std;

typedef pair<int, int> P;

#define ll      long long
#define f(i, n) for (int i = 0; i < n; i++)

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(nullptr);

    ll n, m; cin >> n >> m;
    int seq[n];
    f(i, n) cin >> seq[i];

    int start = 0, end = 0, cnt = 0;
    ll sum = seq[start];
    while (start < n && end < n)
    {
        if (sum < m)
            sum += seq[++end];
        else if (sum == m)
        {
            sum -= seq[start++];
            ++cnt;
        }
        else if (sum > m)
            sum -= seq[start++];
    }
    cout << cnt << '\n';
    return 0;
}
