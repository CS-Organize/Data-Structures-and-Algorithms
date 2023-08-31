// https://develop247.tistory.com/16
#include <stdio.h>
#include <string.h>

int main(void)
{
  int n;
  scanf("%d",&n);
  char test[81];
  for (int i = 0; i < n; i++)
  {
    int sum = 0;
    int cnt = 1;
    scanf("%s",test);
    for (int j = 0; j < strlen(test); j++)
    {
      if (test[j] == 'O')
      {
        sum += cnt;
        cnt ++;
      }
      else if(test[j] == 'X')
      {
        cnt = 1;
      }
    }
    printf("%d\n",sum);
  }
   return 0;
}