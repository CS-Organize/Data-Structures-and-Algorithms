# [7785](https://www.acmicpc.net/problem/7785)
solved on: 2024-07-17

## Solutions

- 1초에 N이 최대 $10^6$이므로 $O(NlogN)$으로 해결해야 한다.
- `set`, `map` 중 `set`을 사용한 이유는 value가 필요 없기 때문이다.
- `endl` 대신 `'\n'`을 사용하자. 이 거 때문에 시간 초과가 났다.

## References
