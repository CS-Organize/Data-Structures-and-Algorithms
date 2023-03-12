#include <stdio.h>

int main(void)
{
  int n,cnt = 0;
  scanf("%d",&n);
  for (int i = 0; i < n; i++)
  {
    char word[101],repeatWord[101];
    scanf("%s",word);
    if (word[1] == '\0') // 만약 단어가 한 개라면 반복문 넘기기
    {
      cnt ++;
      continue;
    }
    int j = 1,k=0;
    char prevWord = word[j-1]; // 이전 문자
    while (word[j] != '\0')
    {
      if (prevWord != word[j]) // 현재 문자와 이전 문자가 다르면 중복인지 체크하는 배열에 넣기
      {
        repeatWord[k] = word[j];
        k++;
      }
      j++;
    }
    for (int l = 0; l < k+1; l++)
    {
      for (int m = l+1; m < k+1 ; m++)
      {
        if (repeatWord[l] == repeatWord[m])
        {
          cnt --;
        }
      }
    }
    cnt ++;
  }
  printf("%d\n",cnt);
  return 0;
}