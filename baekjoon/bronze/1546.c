#include <stdio.h>

int main(void)
{
  int n;
  scanf("%d",&n);
  double scores[n];
  double max = 0;
  for (int i = 0; i < n; i++)
  {
    scanf("%lf",&scores[i]);
    if (scores[i] > max)
    {
      max = scores[i];
    } 
  }
  for (int j = 0; j < n; j++)
  {
    scores[j] = (scores[j]/max)*100;
  }
  double total = 0;
  for (int k = 0; k < n; k++)
  {
    total += scores[k];
  }
  printf("%lf",total/n);
  return 0;
}