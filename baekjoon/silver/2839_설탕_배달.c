#include <stdio.h>

int main(void)
{
  int n,cnt = 0,arr[2000];
  scanf("%d",&n);
  for (int i = 0; i <= n/5; i++)
  {
    for (int j = 0; j <= n/3; j++)
    {
      if (n == 5*i+3*j)
      {
        arr[cnt] = i+j; // 횟수 arr 배열에 저장
        cnt++;
      }
    } 
  }
  int min = 2000;
  if(cnt == 0) printf("-1\n");
  else
  {
    for (int k = 0; k < cnt; k++)
    {
      if (arr[k] < min)
      {
        min = arr[k];
      }
    }
    printf("%d\n",min);
  }
  return 0;
}