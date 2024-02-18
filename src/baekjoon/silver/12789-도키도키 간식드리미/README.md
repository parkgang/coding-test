## 문제

https://www.acmicpc.net/problem/12789

## 풀이 시간

1차: 33분
솔루션 확인 및 이해: 19분

## 오답 노트

기본적으로 `Stack` 의 자료구조만 생각한체로 접근하면서 발생했습니다.

- 대기열의 입력 값을 `Stack` 으로 저장함
  - 해당 부분이 잘못되었다는 것을 느끼고 `vector` 에 저장 후 `reverse` 하는 방식으로 처리하긴 했으나 근본적으로 `Queue` 를 사용하면 되는 것이었음
- [fail2-stack-and-stack.cpp](./fail2-stack-and-stack.cpp) 를 보면 대기열에 번호표랑 일치하는 것이 없으면 기다리는 줄로 이동하는 코드가 없이 `Sad` 를 바로 출력함
  - 즉, `swap` 하는 부분이 없으니 문제가 해결되지 않음
