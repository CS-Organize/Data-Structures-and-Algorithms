#include <stdio.h>

int main(void)
{
  int n,v;
  scanf("%d",&n);
  int numbers[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d",&numbers[i]);
  }
  scanf("%d",&v);
  int cnt = 0;
  for (int j = 0; j < n; j++)
  {
    if (numbers[j] == v) cnt ++;
  }
  printf("%d\n",cnt);
  return 0;
}