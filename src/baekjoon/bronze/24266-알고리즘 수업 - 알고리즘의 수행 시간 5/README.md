## 문제

https://www.acmicpc.net/problem/24266

약 `15분` 소요

## Insight

`세제곱` 을 위해서 `cmath` 의 `pow` 를 사용했는데 `pow` 는 `double` 으로 계산해서 `부동소수점 오차` 가 발생할 수 있다고 합니다.

그래서 `pow(n, 3)` 를 `n * n * n` 으로 변경했습니다.
