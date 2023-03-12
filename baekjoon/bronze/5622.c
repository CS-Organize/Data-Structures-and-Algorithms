#include <stdio.h>

int main(void)
{
  char word[16];
  scanf("%s",word);
  int sec,sum = 0,i = 0;
  while (word[i] != '\0')
  {
    if (word[i] >= 'W') sec = 10;
    else if (word[i] >= 'T') sec = 9;
    else if (word[i] >= 'P') sec = 8;
    else if (word[i] >= 'M') sec = 7;
    else if (word[i] >= 'J') sec = 6;
    else if (word[i] >= 'G') sec = 5;
    else if (word[i] >= 'D') sec = 4;
    else if (word[i] >= 'A') sec = 3;
    sum += sec;
    i++;
  }
  printf("%d\n",sum);
  return 0;
}