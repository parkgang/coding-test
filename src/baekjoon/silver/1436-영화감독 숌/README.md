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
