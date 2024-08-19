#include <algorithm>
#include <iostream>
using namespace std;

typedef pair<int, int> P;

#define ll      long long
#define f(i, n) for (int i = 0; i < n; i++)

int BinarySearch(int arr[], int size, int target)
{
    int high = size - 1;
    int low = 0;
    
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] > target)
            high = mid - 1;
        else if (arr[mid] < target)
            low = mid + 1;
        else 
            return mid;
    }
    return -1;
}

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(nullptr);

    int n; cin >> n;
    int arr[n];
    f(i, n) cin >> arr[i];
    sort(arr, arr + n);

    int m; cin >> m;
    f(i, m)
    {
        int target; cin >> target;
        cout << (BinarySearch(arr, n, target) != -1 ? 1 : 0) << ' ';
    }
    return 0;
}
