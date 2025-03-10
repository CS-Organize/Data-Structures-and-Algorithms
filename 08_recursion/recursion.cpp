#include <iostream>
using namespace std;

/* My Code
size_t sumFromOneToN(size_t n, size_t sum = 0)
{
    if (n == 0) return sum;
    sum += n--;
    return sumFromOneToN(n, sum);
} */

size_t sumFromOneToN(size_t n)
{
    if (n == 0) return 0;
    return n + sumFromOneToN(n - 1);
}

void printFromNToOne(size_t n)
{
    if (n == 0)
    {
        cout << '\n';
        return ;
    }
    cout << n << ' ';
    printFromNToOne(n - 1);
}

int main(void)
{
    cout << sumFromOneToN(100) << '\n';
    printFromNToOne(100);
    return 0;
}
