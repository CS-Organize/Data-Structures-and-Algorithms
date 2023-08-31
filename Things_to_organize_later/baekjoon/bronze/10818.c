#include <stdio.h>

int main(void)
{
  int n;
  scanf("%d",&n);
  int numbers[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d",&numbers[i]);
  }
  int min = 1000001;
  int max = -1000001;
  for (int j = 0; j < n; j++)
  {
    if (numbers[j] > max)
    {
      max = numbers[j];
    }
    if (numbers[j] < min)
    {
      min = numbers[j];
    }
  }
  printf("%d %d",min,max);
  return 0;
}