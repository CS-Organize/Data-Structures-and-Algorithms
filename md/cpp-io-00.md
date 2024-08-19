# ios::sync_with_stdio(false), cin.tie(NULL)

## Disables the synchronization between the C and C++ standard streams.

```cpp
ios::sync_with_stdio(false);
```

- 기본적으로 C++의 iostream은 C의 stdio와 동기화되어 있다.
- C style I/O와 C++ style I/O를 혼용할 때, 동기화로 인한 overhead가 발생하는데, 코딩 테스트에서는 이 overhead를 줄이기 위해 동기화를 끈다.
- **이 때, C style I/O를 사용하면 안된다.**

## Unties cin from cout

```cpp
cin.tie(NULL);
```

- 기본적으로 cin은 cout과 동기화되어 있다.
- 연결된 스트림은 한 스트림이 다른 스트림의 각 I/O 작업 전에 자동으로 플러시되도록 보장한다.
- 이러한 동기화는 코딩 테스트에서 불필요한 overhead를 발생시킬 수 있으므로 cin과 cout을 untie한다.

```cpp
cout << "Enter name:";
cin >> name;
```

- 위 코드에서 `cin >> name;`을 실행하기 전에 `cout << "Enter name:";`을 실행하면, `cout`이 `cin`보다 먼저 실행되어야 하므로 `cout`이 `cin`보다 먼저 실행되도록 `cout`을 플러시한다.
- 이러한 동기화는 코딩 테스트에서 불필요한 overhead를 발생시킬 수 있으므로 `cin`과 `cout`을 untie한다.

## References

- [Stack Overflow](https://stackoverflow.com/questions/31162367/significance-of-ios-basesync-with-stdiofalse-cin-tienull?newreg=8b27f5aaba4e44a0a6d0d0b7bcfcfebf)
- [ios::sync_with_stdio(false), cin.tie(0) 쓰는 이유](https://dingcoding.tistory.com/62)
