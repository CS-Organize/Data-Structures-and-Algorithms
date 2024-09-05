#include <iostream>
using namespace std;

int main(void)
{
    int a, b;
    cin >> a >> b;

    while (a % b != 0)
    {
        if (a < b) swap(a, b);
        a = a % b;
        // cout << a << ' ' << b << '\n';
    }
    cout << b << endl;
    return 0;
}
