#include <stdio.h>

int main(void)
{
  char s[100];
  scanf("%s",s);

  int arr[26];
  for(int i = 0; i < 26; i++)
  {
    arr[i] = -1;
    int j = 0;
    while (s[j])
    {
      if(s[j]-97 == i && arr[i] == -1)
      {
        arr[i] = j;
      }
      j++;
    }
    
  }
  for(int j = 0; j < 26; j++)
  {
    printf("%d ",arr[j]);
  }
  return 0;
}