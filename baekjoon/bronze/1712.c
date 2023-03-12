#include <stdio.h>

int main(void)
{
  double a, b, c;
  scanf("%lf %lf %lf", &a, &b, &c);
  double answer = a/(c-b);
  if (b >= c)
  {
    printf("-1\n");
  }
  else 
  {
    printf("%lld\n",(long long)answer + 1);
  }
  return 0;
}