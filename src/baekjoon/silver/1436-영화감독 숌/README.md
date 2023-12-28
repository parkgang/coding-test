## 문제

https://www.acmicpc.net/problem/1436

## 풀이 시간

40분

## 오답노트

### 문제 이해를 못함

문제 이해를 못했는데 처음에는 맨뒤에 `666` 만 반복되면 되는 줄 알고 `cout << (1000 * (N - 1)) + 666;`으로 코딩했는데 알고보니 맨뒤 말고 어디서든`666` 이 반복되면 카운트하는 것이었습니다.

### 연속되는 6의 숫자를 찾아야 하는데 6이 3개 있으면 카운트하도록 함

`6` 이 3번 연속되는 숫자를 찾아야 하는데 그렇지 않았음

```cpp
string strMovieTitle = to_string(movieTitle);
int _666_cnt = count(strMovieTitle.begin(), strMovieTitle.end(), '6');
if (_666_cnt >= 3)
    cnt++;
```

### 정규 표현식으로 하니까 시간초과 발생

아래와 같이 하니까 시간초과가 발생했습니다.

이런 간단한 것에 대해서는 정규 표현식을 사용하는 것이 시간 복잡도가 더 높다는 것을 알 수 있었습니다.

```cpp
regex pattern("6{3,}");
bool isContinuity666 = regex_search(to_string(movieTitle), pattern);
if (isContinuity666)
    cnt++;
```

## 참고

### 시간 복잡도 최적화: `/` 와 `%` 를 이용해서 구하기

`666` 으로 연속되는 수를 찾으면 되는 것이라 `% 1000` 으로 맨 뒷 3자리만 구해서 `666` 이면 찾은 것으로 인지하고, 아니면 `/ 10` 으로 일의 자리를 계속 컷팅해서 하는 방법이 있었습니다.

이렇게 하면 시간 복잡도가 많이 줄어들 것 같습니다.

참고: https://cocoon1787.tistory.com/155
