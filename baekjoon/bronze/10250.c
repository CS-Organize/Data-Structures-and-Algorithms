#include <stdio.h>

int main(void)
{
  int t;
  scanf("%d", &t); // 테스트 케이스
  for (int i = 0; i < t; i++)
  {
    int h, w, n,floor,room;
    scanf("%d %d %d", &h, &w, &n);
    if (n % h != 0)
    {
      floor = (n % h) * 100;
      room = n / h + 1;
    }
    else
    {
      floor = h * 100;
      room = n / h;
    }
    printf("%d\n",floor+room);
  }
  return 0;
}