# [9375](https://www.acmicpc.net/problem/9375)
solved on: 2024-07-17

## Solutions

- `hash`와 조합론에 대한 문제
- 각 종류의 개수를 세어서, 각 종류를 선택하지 않는 경우를 포함하여 모든 경우의 수를 구한다.

### Example
```plaintext
1
6
a1 a
a2 a
a3 a
b1 b
c1 c
c2 c
```
경우의 수는 다음과 같다.
$$
a = \{a_1, a_2, a_3, \varnothing\} \\
b = \{b_1, \varnothing\} \\
c = \{c_1, c_2, \varnothing\} \\
\text{총 경우의 수} = (4)(2)(3) - 1 = 23
$$
`-1`을 하는 이유는 a, b, c 모두 공집합일 때 경우의 수를 제외하기 위함이다.

## References
