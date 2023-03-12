#include <stdio.h>

int main(void)
{
  int n,swap;
  scanf("%d",&n);
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d",&arr[i]);
  }
  for (int i = 0; i < n-1; i++)
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
  for (int i = 0; i < n; i++)
  {
    printf("%d\n",arr[i]);
  }
  return 0;
}