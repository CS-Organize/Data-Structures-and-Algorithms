// https://develop247.tistory.com/8

#include <stdio.h>

int main(void)
{
  int a,b,c,d=1,result,input,cnt=0;
  scanf("%d",&input);
  result = input;

  while (d!=result)
  {
    a=input/10;
    b=input%10;
    c=(a+b)%10;
    d=(b*10)+c;
    input=d;
    cnt ++;
  }
  printf("%d",cnt);
  return 0;
}