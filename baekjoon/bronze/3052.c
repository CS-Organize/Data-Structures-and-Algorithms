#include <stdio.h>

int main(void)
{
  int numbers[10],num;
  for (int i = 0; i < 10; i++)
  {
    scanf("%d",&num);
    numbers[i] = num%42;
  }
  int samenum;
  int cnt = 0;
  for (int j = 0; j < 10; j++)
  {
    for (int k = j+1; k < 10; k++) // 0과 1~9 비교, 1과 2~9 비교 ...
    {
      if (numbers[j] == numbers[k] && numbers[j] != -1)
      {
        samenum = numbers[j]; // 비교하는 두 수말고 다른 수까지 -1로 만들기 위해서
        numbers[j] = -1;
        numbers[k] = -1;
        for (int l = k+1; l < 10; l++)
        {
          if (samenum == numbers[l])
          {
            numbers[l] = -1;
          }
        }
        cnt ++;
      }
    }
  }
  for (int i = 0; i < 10; i++)
  {
    if(numbers[i] > -1) cnt ++;
  }
  printf("%d\n",cnt);
  return 0;
}