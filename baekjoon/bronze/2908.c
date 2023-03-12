#include <stdio.h>

int main(void)
{
  int a,b,c,d;
  scanf("%d %d",&a,&b);
  c = (a-(a/10)*10)*100+((a-(a/100)*100)/10)*10+a/100;
  d = (b-(b/10)*10)*100+((b-(b/100)*100)/10)*10+b/100;
  printf("%d\n",c>d?c:d);
  return 0;
}