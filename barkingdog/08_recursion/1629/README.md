# [1629](https://www.acmicpc.net/problem/1629)
solved on: 2024-05-19

## Solutions

$a^b \mod c$를 구하는 문제\
b가 21억이므로 $O(b)$로 풀면 시간초과가 발생한다.
```cpp
    ll res = 1;
    ll a, b , c; cin >> a >> b >> c;
    while (b-- > 0) res = (res * a) % c;
    cout << res << '\n';
```
```bash
time ./a.out
2147483647 2147483647 2147483647
0
./a.out  9.45s user 0.00s system 96% cpu 9.764 total
```

$2^{2n} = 2^n \times 2^n$임을 이용해서 $O(\log b)$로 풀 수 있다.
$$
a^b \mod c \\
= (a^{b/2} \times a^{b/2}) \mod c \\
= (a^{b/4} \times a^{b/4} \times a^{b/4} \times a^{b/4}) \mod c \\
= (a^{b/2^n} \times a^{b/2^n} \times a^{b/2^n} \times ... a^{b/2^n}) \mod c \\
$$
## References
