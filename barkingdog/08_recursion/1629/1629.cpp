#include <algorithm>
#include <iostream>
using namespace std;

typedef pair<int, int> P;

#define ll      long long
#define f(i, n) for (int i = 0; i < n; i++)

/* ll power(ll a, ll b, ll c)
{
    if (b == 0) return a;
    if (b % 2 == 0) return power(a, b / 2, c) * power(a, b / 2, c);
    else return (a * power(a, b - 1, c)) % c;
} */

ll power(ll a, ll b, ll c)
{
    if (b == 0) return 1;
    if (b == 1) return a % c;
    ll tmp = power(a, b / 2, c);
    if (b % 2 == 0) return (tmp * tmp) % c;
    else return (tmp * tmp * a) % c;
}

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(nullptr);

    cout << power(7, 2147483647, 29) << '\n'; 
    return 0;
}
