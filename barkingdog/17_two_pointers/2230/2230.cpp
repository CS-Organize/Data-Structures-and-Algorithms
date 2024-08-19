#include <algorithm>
#include <iostream>
using namespace std;

typedef pair<int, int> P;

#define ll      long long
#define f(i, n) for (int i = 0; i < n; i++)

int n, m;
int mn = 0x7fffffff;

void binarySearch(int arr[], int start)
{
    int low = start + 1;
    int high = n - 1;
    int target = arr[start];

    while (low <= high)
    {
        int mid = (low + high) / 2;
        int tmp = abs(target - arr[mid]);
        if (tmp >= m && mn > tmp) mn = tmp;
        if (tmp > m)
            high = mid - 1;
        else if (tmp < m)
            low = mid + 1;
    }
}

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(nullptr);


    cin >> n >> m;
    int seq[n];
    f(i, n) cin >> seq[i];

    sort(seq, seq + n);
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n && mn != m; j++)
            binarySearch(seq, i);
        if (mn == m)
            break;
    }
    cout << mn << '\n';
    return 0;
}
