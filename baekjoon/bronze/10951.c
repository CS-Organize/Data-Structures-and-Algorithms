// https://develop247.tistory.com/7

#include <stdio.h>

int main(void)
{
  int a, b;
  while (scanf("%d %d", &a, &b) != EOF) 
  {
    printf("%d\n", a + b);
  }
}

// C언어는 운영체제와 상관없이, 파일의 끝에 도달했을 때 언제나 특별한 값을 반환하도록 한다.
// EOF는 End Of File의 약자로 파일의 끝을 표현하기 위해 -1로 정의된 상수
// 즉, scanf("%d %d", &a, &b)!=EOF의 의미는 파일의 끝에 도달할 때까지 while문을 실행한다는 의미
// 출력초과가 나왔던 이유는 우리가 while문의 끝을 정해놓지 않았기 때문에 scanf가 무한루프 돌아서 메모리 할당 범위를 넘어섰기 때문이다.