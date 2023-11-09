#include <stdio.h>

int main(void)
{
  int n,i=1,range =1;
  scanf("%d",&n);
  while (n > range)
  {
    range += 6*i;
    i++;
  }
  printf("%d\n",i);
  return 0;
}