#include <stdio.h>

int main(void)
{
  char word[1000001];
  scanf("%s", word);
  int i = 0;
  int arr[26] = {0}; // 알파벳에 대응하는 인덱스 번호를 가진 배열 생성

  while (word[i] != '\0')
  {
    if (word[i] >= 97 && word[i] <= 122) // 대문자로 바꾸기
    {
      word[i] -= 32;
    }
    arr[word[i] - 65]++; // A -> arr[0]++ B -> arr[1]++ .. Z -> arr[25]++
    i++;
  }

  int max = -1, idx = 0;
  for (int j = 0; j < 26; j++) // arr에서 가장 큰 값 즉, 가장 많이 나온 알파벳에 대응하는 인덱스 찾기
  {
    if (arr[j] > max)
    {
      max = arr[j];
      idx = j;
    }
  }
  for (int k = 0; k < 26; k++)
  {
    if (arr[idx] <= arr[k] && k!=idx) // 같은 빈도로 나왔으면 ? 출력
    {
      printf("?\n");
      return 0;
    }
  }
  
  printf("%c\n",idx+65);

  return 0;
}