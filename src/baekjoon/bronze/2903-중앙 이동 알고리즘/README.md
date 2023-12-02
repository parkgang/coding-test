## 문제

https://www.acmicpc.net/problem/2903

약 `15분`

## 풀이

문제 설명이 길게 되어있는데 입력된 값에 따른 점의 개수를 구해서 넓이를 구하면 되는 것이다.

## 다른 사람이 푼 것

`지수` 를 이용해서 풀 수 있을 거 같다는 생각이 들었는데 그렇게 푼 사람을 볼 수 있어서 참고로 넣어놓음

```cpp
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;
    // 한 변의 정사각형의 개수는 2^N일 때
    // 꼭지점의 개수는 해당 정사각형의 개수인 (2^N +1)의 2 제곱 개
    cout << int(pow(pow(2, N) + 1, 2));
}
```

[백준 - 2903번 중앙 이동 알고리즘 (수학)](https://velog.io/@itsantiago/%EB%B0%B1%EC%A4%80-2903%EB%B2%88-%EC%A4%91%EC%95%99-%EC%9D%B4%EB%8F%99-%EC%95%8C%EA%B3%A0%EB%A6%AC%EC%A6%98-%EC%88%98%ED%95%99)
