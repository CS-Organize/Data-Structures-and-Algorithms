#include <stdio.h>

int main(void)
{
  int x, cnt = 0;
  scanf("%d", &x);
  while (x != 1)
  {
    if (x % 3 == 0)
    {
      x /= 3;
      cnt++;
    }
    else if ((x-1)%3==0)
    {
      x--;
      cnt ++;
    }
    else if (x % 2 == 0)
    {
      x /= 2;
      cnt++;
    }
    else
    {
      x--;
      cnt++;
    }
  }
  printf("%d\n",cnt);
  return 0;
}