#include <stdio.h>
#define LENG 1000001

int main(void)
{
  char str[LENG];
  scanf("%[^\n]s",str); // [^문자] -> 해당 문자가 나오기 전까지 모든 문자열을 받겠다.
  // [^\n] 개행(엔터)을 의미하는 \n을 ^ 앞에 넣어주면 엔터 전까지 문자열 받기
  int i = 0,cnt = 1;
  while (str[i] != 0)
  {
    // 첫 글자 혹은 마지막 글자가 공백일 경우 cnt--
    if ((str[i] == ' ' && i == 0) || (str[i] == ' ' && str[i+1] == 0))
    {
      cnt --;
    }
    // str에 단어가 없을 경우
    if (str[0] == ' ' && str[1] == 0)
    {
      printf("0\n");
      return 0;
    }
    if (str[i] == ' ')
    {
      cnt ++;
    }
    i++;
  }
  printf("%d\n",cnt);

  return 0;
}