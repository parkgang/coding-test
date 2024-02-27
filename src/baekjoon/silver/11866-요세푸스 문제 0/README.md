## 문제

https://www.acmicpc.net/problem/11866

## 풀이 시간

15분 40초

## 오답노트

문제 이해가 안되어서 https://codingham.tistory.com/338 글을 참고했다.
`K` 까지 제거해서 `Queue` 의 뒤에 붙이고 그 상태에서 `Queue Front` 값을 출력하고 제거하는데 `Queue` 가 `empty` 할 때 까지 반복하는 것이더라

실수한 것으로

- `K` 만큼 제거할 때 실제 숫자가 `index` 보다 크기 때문에 `K- 1` 하지 않을 것이다.
