#include <stdio.h>

int main(void)
{
  int t, r;
  scanf("%d", &t);
  for (int i = 0; i < t; i++)
  {
    scanf("%d", &r);
    char s[21], p[21 * r];
    scanf("%s", s);
    int j = 0;
    int idx = 0;
    while (s[j])
    {
      for (int k = 0; k < r; k++)
      {
        p[idx] = s[j];
        idx++;
      }
      j++;
    }
    p[idx] = '\0';
    printf("%s\n", p);
  }
  return 0;
}