#include <stdio.h>

int main(void)
{
  int n,cnt=0,isDiv;
  scanf("%d",&n);
  for (int i = 0; i < n; i++)
  {
    int isPrime;
    scanf("%d",&isPrime);
    if (isPrime == 1) cnt --; // 1은 소수가 아니다.
    isDiv = 0; // 나누어 떨어졌는가
    for (int j = 2; j*j <= isPrime; j++)
    {
      if (isPrime % j == 0)
      {
        isDiv++;
        break;
      }
    }
    if (isDiv == 0) cnt ++;
  }
  printf("%d\n",cnt);
  return 0;
}