# [2910](https://www.acmicpc.net/problem/2910)
solved on: 2023-12-28

## Solutions

- 우선순위가 같은 원소의 순서를 보장해야 하므로, stable sort 방식을 사용해야 한다.
- radix sort를 사용하려 했지만 int 자료형 * 10^9의 크기(약 4GB)를 가지는 배열을 선언해야 하므로, 메모리 초과가 발생한다.
- 대신 n의 크기가 1000 이하이므로, 시간복잡도를 고려하지 않고 풀 수 있었다.

## References
