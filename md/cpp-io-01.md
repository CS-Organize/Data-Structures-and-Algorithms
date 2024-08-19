# Input function in C/C++

## C

### scanf

```c
char s[100];
scanf("%s", s);
```

### fgets

```c
char s[100];
fgets(s, sizeof(s), stdin);
```

## C++

### cin

```cpp
string s;
cin >> s;
```

- `cin`은 공백을 기준으로 문자열을 입력받는다.
- 그렇기 때문에 공백을 포함한 문자열을 입력받기 위해서는 `getline`을 사용해야 한다.

### getline

```cpp
string s;
getline(cin, s, '\n');
```

- `getline`은 공백을 포함한 문자열을 입력받을 수 있다.
- `cin` 으로 입력을 받으면 '\n'이 입력 버퍼에 남아있는데, 이 때, `getline`을 사용하면 '\n'을 입력받기 때문에 `cin.ignore()`를 사용하여 '\n'을 지워줘야 한다.

## References

- [scanf / fgets](<https://omyodevelop.tistory.com/120#:~:text=%EA%B0%9C%ED%96%89(%EC%97%94%ED%84%B0)%EB%A5%BC%20%EC%9D%98%EB%AF%B8%ED%95%98%EB%8A%94,%EB%B0%9B%EC%9D%84%20%EC%88%98%20%EC%9E%88%EA%B2%8C%20%EB%90%98%EB%8A%94%20%EA%B2%83%EC%9D%B4%EC%A3%A0>)
- [C++ 입력 함수 - cin, cin.get(), getline()](<https://kyu9341.github.io/C-C/2020/01/17/C++getline()/>)
- [Stack Overflow](https://stackoverflow.com/questions/21567291/why-does-stdgetline-skip-input-after-a-formatted-extraction)
- [[C++] getline을 이용해 입력받을 때 cin.ignore로 버퍼비우기](https://infjin.tistory.com/143)
- [std::cin과 getline()을 섞어쓸 때 주의점](https://velog.io/@copyrat90/cin%EA%B3%BC-getline%EC%9D%84-%EC%84%9E%EC%96%B4%EC%93%B8-%EB%95%8C-%EC%A3%BC%EC%9D%98%EC%A0%90)
- [C++ test case 입력 개수 모를 때 입력 받기 :: 펭귄과 컴퓨터](https://scarlettb.tistory.com/69)
- [char* 형으로 문자열 입력 받기 , scanf() 함수의 기능, gets와 scanf의 차이 : 네이버 블로그](https://m.blog.naver.com/zkd1750/90188086649)
