## 문제

https://www.acmicpc.net/problem/9506

`40` 분 소요

## 실수

- `is NOT perfect` 부분에 `\n` 안 붙어서 틀릴뻔 함
- `완전수` 를 위해서는 `자기 자신을 제외한` 모든 약수의 합인데 `자기 자신의 수` 도 포함해서 계산하고 있었음 그래서 `약수` 를 구하는 `for` 에서 `1` 을 제외하도록 `i >= 2` 으로 함
- `perfect` 인데 p`a`rf`a`ct 으로 영어 오타남
