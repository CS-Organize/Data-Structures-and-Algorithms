#include <stdio.h>

int main(void)
{
  int swap;
  int arr[5];
  int sum = 0;
  for (int i = 0; i < 5; i++)
  {
    scanf("%d",&arr[i]);
    sum += arr[i];
  }
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j< 4; j++)
    {
      if (arr[j] > arr[j+1]) 
      {
        swap = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = swap;
      }
    }
  }
  printf("%d\n%d\n",sum/5,arr[2]);
  return 0;
}