#include <stdio.h>

int main(void)
{
  int t;
  scanf("%d", &t);            // testcase
  for (int i = 0; i < t; i++) // repeat t times
  {
    int k, n;
    scanf("%d\n%d", &k, &n); // k층 n호
    int prevFloor[n];        // 이전 층 배열
    for (int j = 0; j < n; j++)
    {
      prevFloor[j] = j + 1; // 0층
    }

    for (int l = 1; l <= k; l++) // k층일 때
    {
      for (int m = 0; m < n; m++) // m호 (0~n-1까지)
      {
        int sum = 0; // k-1층 일때 1~n호 사람 수 더한 값
        for (int o = 0; o < m; o++)
        {
          sum += prevFloor[o];
          // printf("prevFloor[%d] : %d\n", n, prevFloor[n]);
        }
        prevFloor[m] += sum;
      }
      for (int p = 0; p < n; p++)
      {
        printf("%d층 : prevFloor[%d] : %d\n",l,p,prevFloor[p]);
      }
      
    }
    printf("%d\n", prevFloor[n - 1]);
  }
  return 0;
}
// floor 3: 1 5 15 35 70 126 210
// floor 2: 1 4 10 20 35 56  84
// floor 1: 1 3 6  10 15 21  28  = an = a(n-1)+n
// floor 0: 1 2 3  4  5  6   7   = an = n;