#include <stdio.h>

int main(void)
{
  int n,k,swap;
  scanf("%d %d",&n,&k);
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d",&arr[i]);
  }
  for (int i = 0; i < n-1; i++) // bubble sort
  {
    for (int j = 0; j< n-1; j++)
    {
      if (arr[j] > arr[j+1]) 
      {
        swap = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = swap;
      }
    }
  }
  printf("%d\n",arr[n-k]); // 뒤에서 k번째
  return 0;
}