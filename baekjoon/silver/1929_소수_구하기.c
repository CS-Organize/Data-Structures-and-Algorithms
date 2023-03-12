#include <stdio.h>

int main(void)
{
  int m,n,cnt;
  scanf("%d %d",&m,&n);
  for (int i = m; i <= n; i++)
  {
    if(i == 1) continue; // 1은 소수가 아니다.
    cnt = 0;
    // https://velog.io/@cjy0029/%EC%86%8C%EC%88%98-%EA%B5%AC%ED%95%98%EB%8A%94-%EB%B0%A9%EB%B2%95
    for (int j = 2; j*j <= i; j++) 
    {
      if(i%j==0)
      { 
        cnt ++;
        break;
      }
    }
    if (cnt == 0)
    {
      printf("%d\n",i);
    }
  }
  return 0;
}
// 시간 초과
