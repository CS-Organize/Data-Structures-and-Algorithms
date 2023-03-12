#include <stdio.h>

int main(void)
{
  char word[101];
  scanf("%s",word);
  int i = 0,cnt = 0;
  while (word[i] != '\0')
  {
    if (word[i] == 'c')
    {
      if(word[i+1] == '=' || word[i+1] == '-')
      {
        i += 2;
        cnt ++;
        continue;
      }
    }
    if (word[i] == 'd')
    {
      if(word[i+1] == '-')
      {
        i += 2;
        cnt ++;
        continue;
      }
      if(word[i+1] == 'z' && word[i+2] == '=')
      {
        i += 3;
        cnt++;
        continue;
      }
    }
    if (word[i] == 'l' || word[i] == 'n')
    {
      if (word[i+1] == 'j')
      {
        i += 2;
        cnt ++;
        continue;
      }
    }
    if (word[i] == 's' || word[i] == 'z')
    {
      if (word[i+1] == '=')
      {
        i += 2;
        cnt ++;
        continue;
      }
    }
    cnt++;
    i++;
  }
  printf("%d\n",cnt);
  return 0;
}