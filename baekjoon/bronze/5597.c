// https://kiffblog.tistory.com/202 참고
#include <stdio.h>

int main(void)
{
  int students[30] = {0};
  int num;
  for (int i = 0; i < 28; i++)
  {
    scanf("%d", &num);
    students[num-1] = num;
  }
  for (int j = 0; j < 30; j++)
  {
    if (students[j] == 0)
    {
      printf("%d\n", j+1);
    }
    
  }
  return 0;
}