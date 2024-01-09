## 문제

https://www.acmicpc.net/problem/18870

## 풀이 시간

약 `1시간 30분` 이상

## 풀이 과정

문제가 이해가 안되서 [[BaekJoon/백준] 18870번 C++](https://hevton.tistory.com/437) 글을 보고 이해하였다.

`좌표 압축` 이란 주어진 `좌표` 중에서 `지정 값` 보다 작은 값이 몇개 있는가를 나열하는 것이다.

그래서 핵심은 `중복되지 않는 값` 을 구해야하고 `지정 값` 보다 작은 값을 찾기 위해서 `정렬` 이 필요하다

## 오답노트

### 시간 초과

문제를 이해하고 `set` 을 이용해서 구현해보았는데 `시간 초과` 가 발생했다.

<details>
    <summary>
        자세히 보기
    </summary>

```cpp
#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N;

  vector<int> points;
  set<int> setPoints;
  for (int i = 0; i < N; i++) {
    int v;
    cin >> v;
    points.push_back(v);
    setPoints.insert(v);
  }

  for (auto &v1 : points) {
    int index = 0;
    for (auto &v2 : setPoints) {
      if (v1 == v2) break;
      index++;
    }
    cout << index << " ";
    index = 0;
  }

  return 0;
}
```

</details>

이유로 `중첩된 반복문 문제` 로 코드의 `두 번째 for 루프` 에서, 각 `points` 요소에 대해 전체 `setPoints` 를 순회하고 있는데 이 경우 시간 복잡도는 `O(N^2)` 로 `N` 이 큰 경우 `시간 복잡도` 가 너무 높은 상황이였습니다.

`C++` 의 `STL` 를 이용해서 해결했습니다.
