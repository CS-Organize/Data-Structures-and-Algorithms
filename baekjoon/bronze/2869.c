#include <stdio.h>

int main(void)
{
  double days,a,b,v;
  scanf("%lf %lf %lf",&a,&b,&v);
  days = (v-a)/(a-b) + 1;
  if((int) days == days) printf("%d\n",(int) days);
  else printf("%d\n",(int) days+1);
  return 0;
}